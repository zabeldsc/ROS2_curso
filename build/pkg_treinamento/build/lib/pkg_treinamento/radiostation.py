#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String 

class RadioStationNode(Node):
    def __init__(self):
        super().__init__('radiostation')
        self._publisher = self.create_publisher(String, 'FM1075', 10)
        self.timer = self.create_timer(0.5, self.publish_message)
        self.get_logger().info("A rádio está publicando!")

    def publish_message(self):
        msg = String()
        msg.data = "Olá da FM 107.5"
        self._publisher.publish(msg)
        

def main(args=None):
    rclpy.init(args=args)
    node = RadioStationNode()
    rclpy.spin(node)
    rclpy.shutdown()