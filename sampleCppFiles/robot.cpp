//robot.cpp
#include <iostream>
#include <string>
#include "robot.h"

Robot::Robot(): name_(""){

}
Robot::Robot(const std::string& name):
    name_(name) {

    }

void Robot::SayName() const { 
    std::cout << name_ << std::endl;
}
