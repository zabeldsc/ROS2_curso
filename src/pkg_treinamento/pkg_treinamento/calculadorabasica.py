#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from pkg_interfaces.srv import CalculadoraSrv

class CalculadoraBasica(Node):

    def __init__(self):
        super().__init__("calculadorabasica")
        self._server = self.create_service(CalculadoraSrv, "calculadora_service", self.callback)
        self._pub = self.create_publisher(String, 'Display', 10)
        self.get_logger().info("A calculadora básica está on")
        self._displaymsg = String()
        self._timer = None

    def callback(self, request, response):
        response.status = "Operação realizada!"
        try:
            match request.operador:
                case "+":
                    response.resultado = request.operando1 + request.operando2
                case "-":
                    response.resultado = request.operando1 - request.operando2
                case "*":
                    response.resultado = request.operando1 * request.operando2
                case "/":
                    response.resultado = request.operando1 / request.operando2
                case _:
                    response.status = "Operação não realizada!"
        except Exception as e:
            response.status = "Operação não realizada!"

        self._displaymsg.data = f'{request.operando1} {request.operador} {request.operando2} = {response.resultado}'
        self._timer = self.create_timer(0.5, self.publish_message)
        return response
    
    def publish_message(self):
        self._pub.publish(self._displaymsg)
        self.get_logger().info(self._displaymsg.data)
    
def main(args=None):
    rclpy.init(args=args)
    node = CalculadoraBasica()
    rclpy.spin(node)
    rclpy.shutdown()