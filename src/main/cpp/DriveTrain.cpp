#include "DriveTrain.h"

void DriveTrain::GetPos(){
    y = GetY();
    z = GetTwist();
}

void DriveTrain::Drive(){
    //frc::SmartDashboard::PutNumber("YPos", y);
    //frc::SmartDashboard::PutNumber("ZPos", z);
    driveMotors->ArcadeDrive(y, z, true);

}