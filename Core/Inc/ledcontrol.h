//
// Created by Ilia.Motornyi on 12/11/2019.
//

#ifndef CLION_F3_CPP_MEETING_LEDCONTROL_H
#define CLION_F3_CPP_MEETING_LEDCONTROL_H
extern "C" [[noreturn]]  void cppMain();

class Light {
public:
    Light operator-();

    Light operator>>(unsigned b);

    Light operator<<(unsigned  b);

    Light operator>>=(unsigned b);

    Light operator<<=(unsigned  b);

    friend Light operator-(const Light &light);

    friend Light operator+(const Light &lightA, const Light &lightB);

    Light &operator+=(const Light &light);

    Light &operator-=(const Light &light);

    friend Light operator-(const Light &lightA, const Light &lightB);

    bool operator||(const Light &light);

    bool operator&&(const Light &light);

    bool operator==(const Light &light);

    Light(const Light &light) {
        ledBits = light.ledBits;
    }

    const Light &lit() const;

    static const Light &N;
    static const Light &NE;
    static const Light &E;
    static const Light &SE;
    static const Light &S;
    static const Light &SW;
    static const Light &W;
    static const Light &NW;
    static const Light &BLUE;
    static const Light &RED;
    static const Light &ORANGE;
    static const Light &GREEN;
    static const Light &BLACK;

    Light() : Light(0) {}

private:
    explicit Light(unsigned char bits) noexcept {
        ledBits = bits;
    };
    unsigned char ledBits = 0;
};

void sleep(unsigned ms);

#endif //CLION_F3_CPP_MEETING_LEDCONTROL_H
