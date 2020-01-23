#include "DriveTrain.h"

DriveTrain::DriveTrain(frc::Joystick* lStick, frc::Joystick* rStick, frc::DifferentialDrive* motors){
    leftStick = lStick;
    rightStick = rStick;
    driveMotors = motors;
}

void DriveTrain::GetPos(){
    leftInput = leftStick->GetY();
    rightInput = rightStick->GetY();
}

void DriveTrain::Dump(){
    frc::SmartDashboard::PutNumber("LeftY", leftInput);
    frc::SmartDashboard::PutNumber("RightY", rightInput);
}

void DriveTrain::Drive(){
    ScaleInputs(0.15);
    Dump();
    driveMotors->TankDrive(leftInput, rightInput, true);
}

void DriveTrain::ScaleInputs(double lateralPercent){
    if(leftInput < lateralPercent && leftInput > -lateralPercent){
        leftInput = 0;
    }
    else if(leftInput >= lateralPercent){
        leftInput = (leftInput - lateralPercent) / (1 - lateralPercent);
    }
    else{
        leftInput = (leftInput + lateralPercent) / (1 - lateralPercent);
    }

    if(rightInput < lateralPercent && rightInput > -lateralPercent){
        rightInput = 0;
    }
    else if(rightInput >= lateralPercent){
        rightInput = (rightInput - lateralPercent) / (1 - lateralPercent);
    }
    else{
        rightInput = (rightInput + lateralPercent) / (1 - lateralPercent);
    }
}