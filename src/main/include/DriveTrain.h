#include <iostream>
#include <string>
#include <frc/VictorSP.h>
#include <frc/Joystick.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/smartdashboard/SmartDashboard.h>

class DriveTrain {
    public:
    DriveTrain(frc::Joystick*, frc::Joystick*, frc::DifferentialDrive*);
    void Drive();
    private:
    frc::Joystick* leftStick;
    frc::Joystick* rightStick;
    frc::DifferentialDrive* driveMotors;
    
    void GetPos();
    void ScaleInputs(double);
    void Dump();

    double GetY();

    double leftInput, rightInput;
    
};