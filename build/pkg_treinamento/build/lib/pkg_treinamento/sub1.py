#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Subscriber1(Node):

    def __init__(self):
        super().__init__('Ouvinte1')
        self.subscription = self.create_subscription(
            String,
            'chatter',
            self.listener_callback,
            10)
        self.subscription 

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

def main(args=None):

    rclpy.init(args=args)
    subscrito = Subscriber1()
    rclpy.spin(subscrito)
    subscrito.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()