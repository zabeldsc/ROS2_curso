#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pkg_interfaces.srv import ComputeRectangleArea

class GeoCalcServer(Node):
    def __init__(self):
        super().__init__("geocalcserver")
        self._server = self.create_service(ComputeRectangleArea, "compute_rectangle_area", self.callbackgeo)
        self.get_logger().info("A calculadora geométrica está on")

    def callbackgeo(self, request, response):
        response.area = request.width * request.height
        self.get_logger().info("Recebi os números " + str(request.width) + " e "
        + str(request.height) + " para base e altura e estou retornando a área de "
        + str(response.area))
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = GeoCalcServer()
    rclpy.spin(node)
    rclpy.shutdown()