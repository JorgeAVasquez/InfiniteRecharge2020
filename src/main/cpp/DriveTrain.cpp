#include "DriveTrain.h"

void DriveTrain::GetPos(){
    x = GetX(JoystickHand hand = kRightHand);
    z = GetZ(JoystickHand hand = kRightHand);
}

void DriveTrain::Drive(){
    frc::SmartDashboard::PutNumber("XPos", x);
    frc::SmartDashboard::PutNumber("ZPos", z);
    
}