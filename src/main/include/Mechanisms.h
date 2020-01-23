#include <frc/VictorSP.h>
#include <frc/XBoxController.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/WPILib.h>

class Mechanisms {
    public:
    Mechanisms();
    private:
    void Crawl();
    void Lift();
    void Shoot();
    void Spin();
    
};