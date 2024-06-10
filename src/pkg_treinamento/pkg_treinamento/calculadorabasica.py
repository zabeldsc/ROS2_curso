#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pkg_interfaces.srv import CalculadoraSrv

class CalculadoraBasica(Node):

    def __init__(self):
        super().__init__("calculadorabasica")
        self._server = self.create_service(CalculadoraSrv, "calculadora_service", self.callback)
        self.get_logger().info("A calculadora básica está on")

    def callback(self, request, response):
        match request.operador:
            case "+":
                response.resultado = request.operando1 + request.operando2
            case "-":
                response.resultado = request.operando1 - request.operando2
            case "*":
                response.resultado = request.operando1 * request.operando2
            case "/":
                response.resultado = request.operando1 / request.operando2

        self.get_logger().info(str(request.operando1) + str(request.operador)
        + str(request.operando2) + " = " + str(response.resultado))
        
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = CalculadoraBasica()
    rclpy.spin(node)
    rclpy.shutdown()