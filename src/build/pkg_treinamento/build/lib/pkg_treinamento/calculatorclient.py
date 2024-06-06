#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class CalculatorClient(Node):
    def __init__(self):
        super().__init__('calculatorclient')
        self.get_logger().info("O cliente da calculadora está rodando")
        self.callserver(3,4)

    def callserver(self, a, b):
        client = self.create_client(AddTwoInts, "addtwoints")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Estou aguardando que o serviço addtwoints seja oferecido")
        self.get_logger().info("Opa! Ligaram a calculadora")

        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        future.add_done_callback(self.callbackcalladdtwoints)

    def callbackcalladdtwoints(self, future):
        try:
            response = future.result()
            self.get_logger().info("O resultado da soma = " + str(response.sum))
        except Exception as e:
            self.get_logger().error("Chamado ao serviço falhou") 

def main(args=None):
    rclpy.init(args=args)
    node = CalculatorClient()
    rclpy.spin(node)
    rclpy.shutdown()