//
// Created by Ilia.Motornyi on 12/11/2019.
//
#include "ledcontrol.h"

[[noreturn]]   void cppMain() {
    Light l = Light::RED.lit();
    sleep(500);
    (l = l + Light::GREEN).lit();
    sleep(500);
    l += Light::ORANGE;
    l.lit();
    sleep(500);
    l = -l;
    l.lit();
    bool q1 = l && -l;
    bool q2 = l || -l;
    bool q3 = l == Light::BLUE;
    l=Light::N;
    while (true) {
        sleep(500);
        (l  >>= 1).lit();
        sleep(250);
        (l <<= 1).lit();
        sleep(250);
        l = (l << 1).lit();
    }
}