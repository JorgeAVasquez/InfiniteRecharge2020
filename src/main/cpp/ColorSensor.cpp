#include "ColorSensor.h"

    void colorSensor::Sense(){

        frc::Color detectedColor = colorSensor.GetColor();        

        frc::SmartDashboard::PutNumber("Red", detectedColor.red);
        frc::SmartDashboard::PutNumber("Green", detectedColor.green);
        frc::SmartDashboard::PutNumber("Blue", detectedColor.blue);
    }
