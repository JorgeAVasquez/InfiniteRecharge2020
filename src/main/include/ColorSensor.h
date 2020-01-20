#include <iostream>
#include <frc/TimedRobot.h>
#include "rev/ColorSensorV3.h"
#include "frc/smartdashboard/smartdashboard.h"

class colorSensor {
    public:

    private:
        double GetColor(); 
        void Sense ();
        static constexpr auto i2cPort = frc::I2C::Port::kOnboard;


        rev::ColorSensorV3 m_colorSensor{i2cPort};


};