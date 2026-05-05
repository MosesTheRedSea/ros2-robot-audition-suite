from setuptools import find_packages
from setuptools import setup

setup(
    name='audition_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('audition_msgs', 'audition_msgs.*')),
)
