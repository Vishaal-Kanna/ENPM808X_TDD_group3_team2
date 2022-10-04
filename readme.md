## Test-Driven Development - Group 3 Team2
This is a part of the implementation for Test Driven Development. <br /> Teams of two have implemented a stub for the class PID controller to be usd in ACME robot. <br /> The project includes the stub and the test code for making sure the controller is working properly.

## Author Names
Driver - Vishaal KannaSivakumar <br />
Navigator -  Rishabh Singh <br />

## Standard install via command-line
git clone https://github.com/Vishaal-Kanna/ENPM808X_TDD_group3_team2.git <br />
cd <path to repository> <br />
mkdir build <br />
cd build <br />
cmake .. <br />
make <br />
Run tests: ./test/cpp-test <br />
Run program: ./app/pid_control <br />

## Build for Code Coverage
cd build <br />
sudo apt-get install lcov <br />
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../ <br />
make <br />
make code_coverage <br />

[![Build Status](https://app.travis-ci.com/Vishaal-Kanna/ENPM808X_TDD_group3_team2.svg?branch=main)](https://app.travis-ci.com/Vishaal-Kanna/ENPM808X_TDD_group3_team2)



