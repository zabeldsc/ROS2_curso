#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class PredatorController(Node):
    def __init__(self):
        super().__init__("predatorcontroller")
        self._pose = None
        self._posesubscriber = self.create_subscription(Pose, "turtle1/pose", self.callbackturtlepose, 10)
        self._cmdvelpublisher = self.create_publisher(Twist, "turtle1/cmd_vel", 10)
        self.controllooptimer = self.create_timer(0.01, self.controlloop)

    def callbackturtlepose(self, msg):
        self._pose = msg
        self.get_logger().info("Pose (x,y,theta): ()" + str(self._pose.x) + ";" + 
        str(self._pose.y) + "," + str(self._pose.theta) + ")")

    def controlloop(self):
        msg = Twist()
        msg.linear.x = 0.5
        self._cmdvelpublisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = PredatorController()
    rclpy.spin(node)
    rclpy.shutdown()