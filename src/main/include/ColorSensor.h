#include <iostream>
#include <frc/TimedRobot.h>
#include "rev/ColorSensorV3.h"
#include "frc/smartdashboard/smartdashboard.h"

class colorSensor {
    public:

    private:
        double GetColor(); 
        void Sense ();

        // defining the port the color senseor is connected to, can be changed
        //not sure on whether be .h or .cpp errors apear when deleted on either
        static constexpr auto i2cPort = frc::I2C::Port::kOnboard;

        //"defining it or something" -paul
        rev::ColorSensorV3 m_colorSensor{i2cPort};


};