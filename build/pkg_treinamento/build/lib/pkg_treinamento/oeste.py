#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Oeste(Node):

    def __init__(self):
        super().__init__("oeste")
        self._subscriber = self.create_subscription (String, "AM536", self.receber_mensagem, 10)
        self.publisher_ = self.create_publisher(String, "AM999", 1)
        self.timer = self.create_timer(10, self.publicar_mensagem)
        self.mensagem = String()

    def receber_mensagem(self, msg):
        self.get_logger().info("Estou escutando: " + str(msg.data))
        self.mensagem.data = 'Retransmitindo - ' + msg.data

    def publicar_mensagem(self):

        self.publisher_.publish(self.mensagem)
        self.get_logger().info('Publicando: "%s"' % self.mensagem.data)

def main(args=None):

    rclpy.init(args=args)
    oeste = Oeste()
    rclpy.spin(oeste)
    rclpy.shutdown()