#include "draw.h"
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

class Turtle{
    public:
        Turtle(double x0, double y0, double dir0);
        void move(double);
        void turn(double);
        void setColor(Color);
        void off();
        void on();
    
    private:
        double xposition;
        double yposition;
        double facingAngle;
        bool boolean;
        Color c;
};
