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
    _Kp = val;
 }

 double pid::PID::getKp()
 {
    return -1;
 }

 void pid::PID::setKd(double val)
 {
    _Kd = val;
 }

 double pid::PID::getKd()
 {
    return -1;
 }

 void pid::PID::setKi(double val)
 {
    _Ki = val;
 }

 double pid::PID::getKi()
 {
    return -1;
 }

 void pid::PID::setTstep(float val)
 {
    _tstep = val;
 }

float pid::PID::getTstep()
 {
    return -1;
 }

 double pid::PID::computeVelocity(double V_target, double V_current)
 {
    return 3.5;
 }
