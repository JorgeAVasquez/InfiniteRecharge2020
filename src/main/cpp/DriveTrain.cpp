#include "DriveTrain.h"

DriveTrain::DriveTrain(frc::Joystick* stick, frc::DifferentialDrive* motors){
    joystick = stick;
    driveMotors = motors;
}

void DriveTrain::GetPos(){
    y = joystick->GetY();
    z = joystick->GetTwist();
}

void DriveTrain::Drive(){
    DeadZone(0.15, 0.7);
    frc::SmartDashboard::PutNumber("YPos", y);
    frc::SmartDashboard::PutNumber("ZPos", z);
    driveMotors->ArcadeDrive(y, z, true);

}

void DriveTrain::DeadZone(double lateralPercent){
    if(y < lateralPercent && y > -lateralPercent){
        y = 0;
    }
    else if(y >= lateralPercent){
        y = (y - lateralPercent) / (1 - lateralPercent);
    }
    else{
        y = (y + lateralPercent) / (1 - lateralPercent);
    }
}