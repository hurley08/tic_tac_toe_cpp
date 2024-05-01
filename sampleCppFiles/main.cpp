// main.cpp

#include <iostream>
#include "robot.h"

int main() {
    Robot r("Rosie");
    Robot r2("Mosie");

    std::vector<Robot> robots;
    robots.push_back(r);
    robots.push_back(*r2);

    for (const Robot& robot : robots){
        robot.SayName();
    }

    std::cout << "There are " << robots.size() << " robots" << std::endl;
    Robot rosie = robots[0];
    return 0;

}