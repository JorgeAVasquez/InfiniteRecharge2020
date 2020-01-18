#include <iostream>
#include <string>
#include <frc/VictorSP.h>
#include <frc/Joystick.h>
#include <frc/drive/DifferentialDrive.h>

class DriveTrain {
    public:

    private:
    frc::VictorSP frontRight{0};
    frc::VictorSP rearRight{1};
    frc::VictorSP frontLeft{2}
    frc::VictorSP rearLeft{3};
    frc::Joystick stick{1};

    frc::SpeedControllerGroup leftMotors {frontLeft, rearLeft};
    frc::SpeedControllerGroup rightMotors {frontRight, rearRight};
    frc::DifferentialDrive driveMotors {leftGroup, rightGroup};
    
    void Drive;
    void GetPos;
    double x, y, z;
};