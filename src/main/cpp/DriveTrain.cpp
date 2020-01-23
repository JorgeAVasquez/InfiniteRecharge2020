#include "DriveTrain.h"

DriveTrain::DriveTrain(frc::Joystick* stick, frc::DifferentialDrive* motors){
    joystick = stick;
    driveMotors = motors;
}

void DriveTrain::GetPos(){
    y = joystick->GetY();
    z = joystick->GetTwist();
}

void DriveTrain::ScaleInputs(double lateralPercent){
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

void DriveTrain::Dump() {
    frc::SmartDashboard::PutNumber("YPos", y);
    frc::SmartDashboard::PutNumber("ZPos", z);
}

void DriveTrain::Drive() {
    GetPos();
    ScaleInputs(0.15);
    
    driveMotors->ArcadeDrive(y, z, true);

}