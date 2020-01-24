#include <frc/VictorSP.h>
#include <frc/XBoxController.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/XboxController.h>

class Mechanisms {
    public:
    Mechanisms();
    private:
    void Crawl();
    void Intake();
    void Lift();
    void Shoot();
    void Spin();
    void RunMechanisms();
    frc::XboxController controller{0};
    frc::VictorSP crawlMotor{0};
    frc::VictorSP liftMotor1{2};
    frc::VictorSP liftMotor2{3};
    frc::VictorSP shootMotor{4};
    frc::VictorSP spinMotor{5};
//    std::string x;
};