from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    remap_calculator_service=("addtwoints", "soma2ints")

    calculatorservernode = Node(
        package="pkg_treinamento",
        executable="calculatorserver",
        name="CalculadoraServidor",
        remappings=[
        remap_calculator_service
        ]
    )
    calculatorclientnode = Node(
        package="pkg_treinamento",
        executable="calculatorclient",
        name="CalculadoraClient",
        remappings=[
        remap_calculator_service
        ]
    )
    calculatorclientparamnode = Node(
        package="pkg_treinamento",
        executable="calculatorclientparam",
        name="CalculadoraClienteParametros",
        remappings=[
        remap_calculator_service
        ],
        parameters=[
            {"argument1":7},
            {"argument2":5}
        ]
    )

    ld.add_action(calculatorservernode)
    ld.add_action(calculatorclientnode)
    ld.add_action(calculatorclientparamnode)

    return ld