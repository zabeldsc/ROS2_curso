#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class ClasseNode(Node):
    def __init__(self):
        super().__init__("teste_init")
        self.counter = 0
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.counter+=1
        self.get_logger().info("Hello" + str(self.counter))
        if self.counter==10:
            exit()

def main(args=None):
    rclpy.init(args=args)
    node = ClasseNode()
    rclpy.spin(node)
    rclpy.shutdown

if __name__ == "__main__":
    main()