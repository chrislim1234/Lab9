#include "turtle.h"
#include "draw.h"

int main() {
   draw::setpenwidth(10); // thick lines
   draw::setrange(-100, 100);
   // get in position
    Turtle a(30,30,15);
    Turtle b(60,70,25);
   Turtle michaelangelo(100, 80, 0);
   Turtle leonardo(90, -80, 135);
   michaelangelo.turn(-135);
    a.turn(20);
    b.turn(-125);
   michaelangelo.setColor(draw::NAVY);
   leonardo.setColor(draw::TEAL);
    a.setColor(draw::PINK);
    b.setColor(draw::ROSE);
    
    draw::show(20);
   leonardo.move(100); // blue, from bottom right to below center
    draw::show(20);
    a.move(150);
    a.off();
    a.move(-30);
    a.turn(130);
    a.on();
   draw::show(20);
    a.move(45);
   leonardo.off();
    draw::show(20);
   michaelangelo.move(226); // orange, from top right to bottom left
   leonardo.move(26); // invisible, from below to above center
   leonardo.on();
    draw::show(20);
   leonardo.move(100); // blue, from above center to top left
   leonardo.off();
    draw::show(20);
    b.move(-150);
    b.off();
    b.move(30);
    b.turn(-130);
    b.on();
    draw::show(20);
    b.move(-45);

   return 0;
}
