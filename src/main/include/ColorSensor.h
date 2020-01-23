#include <iostream>
#include <frc/TimedRobot.h>
#include "rev/ColorSensorV3.h"
#include "frc/smartdashboard/smartdashboard.h"

class ColorSensor {
    public:

    private:
        void Sense();

        // defining the port the color senseor is connected to, can be changed
        //not sure on whether be .h or .cpp errors apear when deleted on either
        static constexpr auto i2cPort = frc::I2C::Port::kOnboard;

        rev::ColorSensorV3 sensor{i2cPort};


};