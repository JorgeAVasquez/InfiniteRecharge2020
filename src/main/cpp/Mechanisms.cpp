#include "Mechanisms.h"

Mechanisms::Mechanisms()
{

}

void Mechanisms::Crawl() {
    crawlMotor.Set(.4);
}

void Mechanisms::Lift() {
    liftMotor1.Set(.5);
    liftMotor2.Set(.5);
}

void Mechanisms::Shoot() {
    shootMotor.Set(.8);
}

void Mechanisms::Spin() {
    
}


void Mechanisms::RunMechanisms() {
    if (controller.GetBButton()) {
        Lift();
    }
    if (controller.GetAButton()) {
        Shoot();
    }
}