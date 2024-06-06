#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class CalculatorServer(Node):
    def __init__(self):
        super().__init__('calculatorserver')
        self._server = self.create_service(AddTwoInts, "addtwoints", self.callbacktwoints)
        self.get_logger().info("A calculadora está on")

    def callbacktwoints(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(
            "Recebi os números " + str(request.a) + " e " + str(request.b) +
            " e estou retornando " + str(response.sum)
        )
        return response

def main(args=None):
    rclpy.init(args=args)
    node = CalculatorServer()
    rclpy.spin(node)
    rclpy.shutdown()

