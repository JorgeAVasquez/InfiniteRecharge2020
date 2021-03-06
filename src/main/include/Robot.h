/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include <frc/Joystick.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/VictorSP.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/TimedRobot.h>
#include "rev/ColorSensorV3.h"
#include <DriveTrain.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

  static constexpr auto i2cPort = frc::I2C::Port::kOnboard;
  rev::ColorSensorV3 color{i2cPort};

  frc::VictorSP frontRight{0};
  frc::VictorSP rearRight{1};
  frc::VictorSP frontLeft{2};
  frc::VictorSP rearLeft{3};
  frc::SpeedControllerGroup leftMotors {frontLeft, rearLeft};
  frc::SpeedControllerGroup rightMotors {frontRight, rearRight};
  frc::DifferentialDrive driveMotors {leftMotors, rightMotors};
  frc::Joystick leftStick{1};
  frc::Joystick rightStick{2};
  DriveTrain dT{&leftStick, &rightStick, &driveMotors};
};
