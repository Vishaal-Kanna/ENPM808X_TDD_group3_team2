/**
 * @file pid.hpp
 * @authors Rishabh Singh (rsingh24@umd.edu), Vishaal Kanna Sivakumar
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
   * @return void
   */
  void setKp(double val);

  /**
   * @brief Get the value of Kp constant
   *
   * @param val
   * @return void
   */
  double getKp();

  /**
   * @brief Set the value of Ki constant
   *
   * @param val
   * @return void
   */
  void setKi(double val);

  /**
   * @brief Get the value of Ki constant
   *
   * @param val
   * @return void
   */
  double getKi();

  /**
   * @brief Set the value of Kd constant
   *
   * @param val
   * @return void
   */
  void setKd(double val);

  /**
   * @brief Get the value of Kd constant
   *
   * @param val
   * @return void
   */
  double getKd();

  /**
   * @brief Set the value of Time step
   *
   * @param val
   * @return void
   */
  void setTstep(float val);

  /**
   * @brief Get the value of Time step
   *
   * @param val
   * @return void
   */
  float getTstep();


  /**
   * @brief Method to compute the new acceleration
   *
   * @param V_target
   * @param V_current
   * @return double
   */
  double computeVelocity(double V_target, double V_current);

 private:
  double Kp; ///< Proportional constant
  double Ki; ///< Derivative constant
  double Kd; ///< Integral constant
  float tstep; ///< Time step
};
}  // namespace pid