#include "ColorSensor.h"

    void ColorSensor::Sense(){
        
        // defining the port the color senseor is connected to, can be changed
        static constexpr auto i2cPort = frc::I2C::Port::kOnboard;


        frc::Color detectedColor = sensor.GetColor();

        frc::SmartDashboard::PutNumber("Red", detectedColor.red);
        frc::SmartDashboard::PutNumber("Green", detectedColor.green);
        frc::SmartDashboard::PutNumber("Blue", detectedColor.blue);
    }
