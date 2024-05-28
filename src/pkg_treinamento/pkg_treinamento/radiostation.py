#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class RadioStationNode(Node):
    def __init__(self):
        super().__init__("radiostation")

def main(args=None):
    rclpy.init(args=args)
    node = RadioStationNode()
    rclpy.spin(node)
    rclpy.shutdown()