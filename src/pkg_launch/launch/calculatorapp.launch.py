from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    calculatorservernode = Node(
        package="pkg_treinamento",
        executable="calculatorserver",
        name="CalculadoraServidor"
    )
    calculatorclientnode = Node(
        package="pkg_treinamento",
        executable="calculatorclient",
        name="CalculadoraClient"
    )
    calculatorclientparamnode = Node(
        package="pkg_treinamento",
        executable="calculatorclientparam",
        name="CalculadoraClienteParametros"
    )

    ld.add_action(calculatorservernode)
    ld.add_action(calculatorclientnode)
    ld.add_action(calculatorclientparamnode)

    return ld