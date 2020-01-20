#include "ColorSensor.h"

#include <iostream>
#include <frc/TimedRobot.h>
#include "rev/ColorSensorV3.h"
#include "frc/smartdashboard/smartdashboard.h"

    void colorSensor::Sense(){
        
        static constexpr auto i2cPort = frc::I2C::Port::kOnboard;

        frc::Color detectedColor = m_colorSensor.GetColor();

        frc::SmartDashboard::PutNumber("Red", detectedColor.red );
        frc::SmartDashboard::PutNumber("Green", detectedColor.green);
        frc::SmartDashboard::PutNumber("Blue", detectedColor.blue );
    }
