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

#include <iostream>
#include <cmath>
#include "../include/pid.hpp"

void pid::PID::setKp(double val) {
    _Kp = val;
}

double pid::PID::getKp() {
    return _Kp;
}

void pid::PID::setKd(double val) {
    _Kd = val;
}

double pid::PID::getKd() {
    return _Kd;
}

void pid::PID::setKi(double val) {
    _Ki = val;
}

double pid::PID::getKi() {
    return _Ki;
}

void pid::PID::setTstep(float val) {
    _tstep = val;
}

float pid::PID::getTstep() {
    return _tstep;
}

double pid::PID::computeVelocity(double V_target, double V_current) {
  double error = V_target - V_current;
  double previous_error = 0.0;
  double sum_error = 0.0;
  double feedback = 0.0;

  while (std::abs(error) > 0.1) {
    error = V_target - V_current;

    sum_error += error;

    double p = _Kp * error;
    double i = _Ki * sum_error * _tstep;
    double d = _Kd * (error - previous_error) / _tstep;
    feedback = p + i + d;
    V_current = feedback * _tstep;
    previous_error = error;
  }
  return feedback;
}
