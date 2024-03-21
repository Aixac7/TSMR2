from setuptools import find_packages
from setuptools import setup

setup(
    name='mypkg_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mypkg_interfaces', 'mypkg_interfaces.*')),
)
