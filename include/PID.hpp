/**
 * @file PID.hpp
 * @authors Rishabh Singh (rsingh24@umd.edu), Vishal Kanna
 * @brief This file contains a stub class to represent a PID controller
 * @version 1.0
 * @date 10/02/2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#pragma once
#include <iostream>

namespace pid {
/**
 * @brief Class to store PID constants and the function to return current
 * velocity
 * @param class_data
 *
 */

class PID {
 public:
  /**
   * @brief Set the value of Kp constant
   *
   * @param val
   * @return double
   */
  double setKp(double val);

  /**
   * @brief Set the value of Ki constant
   *
   * @param val
   * @return double
   */
  double setKi(double val);

  /**
   * @brief Set the value of Kd constant
   *
   * @param val
   * @return double
   */
  double setKd(double val);

  /**
   * @brief Method to compute the new acceleration
   *
   * @param V_target
   * @param V_current
   * @return double
   */
  double computeVelocity(double V_target, double V_current);

 private:
  double Kp;
  double Ki;
  double Kd;
};
}  // namespace pid