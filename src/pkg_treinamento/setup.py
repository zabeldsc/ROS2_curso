from setuptools import find_packages, setup

package_name = 'pkg_treinamento'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='uav_team',
    maintainer_email='isabelcostaaa2502@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'palestrante = pkg_treinamento.pub:main',
            'ouvinte1 = pkg_treinamento.sub1:main',
            'radiostation = pkg_treinamento.radiostation:main',
            'radioreceiver = pkg_treinamento.radioreceiver:main',
            'educadora = pkg_treinamento.educadora:main',
            'velhochico = pkg_treinamento.velhochico:main',
            'oeste = pkg_treinamento.oeste:main',
            'calculatorserver = pkg_treinamento.calculatorserver:main',
            'calculatorclient = pkg_treinamento.calculatorclient:main',
            'hardwarestatus = pkg_treinamento.hardwarestatus:main',
            'geocalcserver = pkg_treinamento.geocalcserver:main',
            'calculadorabasica = pkg_treinamento.calculadorabasica:main',
            'calculatorclientparam = pkg_treinamento.calculatorclientparam:main',
        ],
    },
)
