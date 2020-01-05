#include "turtle.h"
#include "draw.h"
#include <cstdlib>
#include <iostream>
#include<cmath>
using namespace std;

Turtle::Turtle(double x0, double y0, double dir0) {
    xposition = x0;
    yposition = y0;
    facingAngle = dir0;
    boolean = true;
    c = draw::BLACK;
}

void Turtle::turn(double deg) {
    facingAngle = facingAngle+deg;
}

void Turtle::setColor(Color c0) {
    c=c0;
}

void Turtle::move(double dis) {
    double x1position=xposition+dis*cos(facingAngle/180*M_PI);
    double y1position=yposition+dis*sin(facingAngle/180*M_PI);
    if (boolean==true) {
    Turtle::setColor(c);
    draw::line(xposition,yposition,x1position,y1position);
    }
    xposition=x1position;
    yposition=y1position;
}


void Turtle::on() {
    boolean=true; 
}

void Turtle::off() {
    boolean=false;
}
