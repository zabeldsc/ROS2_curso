#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# A Classe Publicador herda da Classe Node

class Publicador(Node):

    # Construtor

    def __init__(self):
        super().__init__('Palestrante')
        self.publisher_ = self.create_publisher(String, 'chatter', 10)
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.i = 0

    # Método

    def timer_callback(self):
        msg = String()
        msg.data = 'Hello World: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    publicador = Publicador()
    rclpy.spin(publicador)
    rclpy.shutdown()


if __name__ == '__main__':
    main()