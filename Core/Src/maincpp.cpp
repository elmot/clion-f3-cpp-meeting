//
// Created by Ilia.Motornyi on 12/11/2019.
//
#include "ledcontrol.hpp"

[[noreturn]] void cppMain() {
    Light l = Light::RED.lit();
    sleepTime(1.5s);
    (l = l + Light::GREEN).lit();
    sleepTime(5e+8ns);
    l += Light::ORANGE;
    l.lit();
    sleepTime(500ms);
    l = -l;
    l.lit();
    bool q1 = l && -l;
    bool q2 = l || -l;
    bool q3 = l == Light::BLUE;
    for (auto led =Light::N; true;) {
      sleepTime(500ms);
      (led >>= 1).lit();
      sleepTime(0.25s);
      (led <<= 1).lit();
      sleepTime(150000us + 0.5s);
      (led <<= 1).lit();
    }
}