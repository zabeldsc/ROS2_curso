#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class Educadora(Node):

    def __init__(self):
        super().__init__('educadora')
        self.publicadorFM = self.create_publisher(String, 'FM1075', 10)
        self.publicadorAM = self.create_publisher(String, 'AM536', 10)
        self.timer = self.create_timer(10, self.publicar_FM)
        self.timer = self.create_timer(1, self.publicar_AM)

    def publicar_FM(self):
        msg = String()
        msg.data = 'Transmitindo em FM: Olá Bahia'
        self.publicadorFM.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)

    def publicar_AM(self):
        msg = String()
        msg.data = 'Transmitindo em AM: Olá Bahia'
        self.publicadorAM.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    educadora = Educadora()
    rclpy.spin(educadora)
    rclpy.shutdown()

if __name__ == '__main__':
    main()