/**
 * @file pid.cpp
 * @authors Rishabh Singh, Vishaal Kanna Sivakumar
 * @brief Stub class for the PID controller
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include<iostream>
 #include "../include/pid.hpp"

 void pid::PID::setKp(double val)
 {
    Kp = val;
 }

 double pid::PID::getKp()
 {
    return Kp;
 }

 void pid::PID::setKd(double val)
 {
    Kd = val;
 }

 double pid::PID::getKd()
 {
    return Kd;
 }

 void pid::PID::setKi(double val)
 {
    Ki = val;
 }

 double pid::PID::getKi()
 {
    return Ki;
 }

 void pid::PID::setTstep(float val)
 {
    tstep = val;
 }

float pid::PID::getTstep()
 {
    return tstep;
 }

 double pid::PID::computeVelocity(double V_target, double V_current)
 {
    return 3.5;
 }
