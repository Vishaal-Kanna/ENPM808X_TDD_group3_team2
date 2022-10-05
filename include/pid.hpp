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
   * @param None
   * @return double
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
   * @param None
   * @return double
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
   * @param None
   * @return double
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
   * @param None
   * @return float
   */
  float getTstep();

  /**
   * @brief Method to compute the new acceleration
   *
   * @param V_target
   * @param V_current
   * @return double
   */
  double computeCommand(double V_target, double V_current, double total_error);

 private:
  double _Kp; ///< Proportional constant
  double _Ki; ///< Derivative constant
  double _Kd; ///< Integral constant
  float _tstep; ///< Time step
  double _prev_error=0; ///< Integral constant
};
}  // namespace pid