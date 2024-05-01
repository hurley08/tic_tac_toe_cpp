// robot.h
#ifndef ROBOT_H_
#define ROBOT_H_
#include <string>

class Robot {
    private:
        std::string name_;
    public:
        Robot();
        Robot(const std::string& name);
        void SayName() const;


};

#endif