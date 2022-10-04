/**
 * @file main.cpp
 * @authors Rishabh Singh, Vishaal Kanna Sivakumar
 * @brief main function for PID controller
 * @version 0.1
 * @date 2022-10-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

#include "../include/pid.hpp"

int main()
{
    pid::PID controller;

    controller.setKp(0.4);
    controller.setKd(0.4);
    controller.setKi(0.4);
    controller.setTstep(0.1);

    std::cout << "The control command is " << controller.computeVelocity(50, 10) << std::endl;

}
