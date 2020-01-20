#include <iostream>
#include <string>
#include <frc/VictorSP.h>
#include <frc/Joystick.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/smartdashboard/SmartDashboard.h>

class DriveTrain {
    public:
    DriveTrain(frc::Joystick*, frc::DifferentialDrive*);
    void Drive();
    private:
    frc::Joystick* joystick;
    frc::DifferentialDrive* driveMotors;
    
    void GetPos();
    double GetY();
    double GetTwist();

    double x, y, z;
    
};