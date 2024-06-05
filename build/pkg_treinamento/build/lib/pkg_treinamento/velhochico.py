#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class VelhoChico(Node):

    def __init__(self):
        super().__init__("velhochico")
        self._subscriber = self.create_subscription (String, "FM1075", self.receber_mensagem, 10)
        self.publisher_ = self.create_publisher(String, "FM1031", 10)
        self.timer = self.create_timer(10, self.publicar_mensagem)
        self.mensagem = None

    def receber_mensagem(self, msg):
        self.get_logger().info("Estou escutando: " + str(msg.data))
        self.mensagem = 'Retransmitindo - ' + msg.data

    def publicar_mensagem(self):
        mensagem = String()
        mensagem.data = self.mensagem
        self.publisher_.publish(mensagem)
        self.get_logger().info('Publicando: "%s"' % mensagem.data)

def main(args=None):

    rclpy.init(args=args)
    velhochico = VelhoChico()
    rclpy.spin(velhochico)
    rclpy.shutdown()