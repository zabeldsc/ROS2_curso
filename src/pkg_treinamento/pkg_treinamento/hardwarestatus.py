#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class HardwareStatus(Node):
    def __init__(self):
        super().__init__('hardwarestatus')

def main(args=None):
    rclpy.init(args=args)
    node = HardwareStatus()
    rclpy.spin(node)
    rclpy.shutdown()