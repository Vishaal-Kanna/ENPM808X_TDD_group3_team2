
[![Build Status](https://app.travis-ci.com/Vishaal-Kanna/ENPM808X_TDD_group3_team2.svg?branch=main)](https://app.travis-ci.com/Vishaal-Kanna/ENPM808X_TDD_group3_team2) [![Coverage Status](https://coveralls.io/repos/github/Vishaal-Kanna/ENPM808X_TDD_group3_team2/badge.png?branch=main)](https://coveralls.io/github/Vishaal-Kanna/ENPM808X_TDD_group3_team2?branch=main)

## Test-Driven Development - Group 3 Team2
This is a part of the implementation for Test Driven Development. <br /> Teams of two have implemented a stub for the class PID controller to be usd in ACME robot. <br /> The project includes the stub and the test code for making sure the controller is working properly.

## Author Names
Driver - Vishaal Kanna Sivakumar <br />
Navigator -  Rishabh Singh <br />

## Author Names Team 1(Part 2)
Driver - Sanchit Kedia <br />
Navigator -  Adarsh Malapaka <br />

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

## Notes and TODO
Upon discussion the following future changes/suggestions were agreed upon:<br />
1. Include an Activity UML diagram.<br />
2. Add More Test cases for the computeCommand function.<br />
3. Test3 to check time step is redundant since there is no user input to set the value as negative.<br />
4. The error threshold for convergence of the PID loop is currently set to 0.1, consider reducing this value.<br />
5. Consider replacing pragma once with #ifndef guards in pid.hpp.<br />
6. _tstep can be lumped into the Ki and Kd gains.<br />

