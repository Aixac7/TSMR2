from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld= LaunchDescription()

    action1=Node(
        package='dofbot_ctrl',
        executable= 'dofbot_node',
    )

    #action2=Node(
    #    package='dofbot_node',
    #    executable= 'dofbot_node',
    #)

    ld.add_action(action1)
    #ld.add_action(action2)


    return ld