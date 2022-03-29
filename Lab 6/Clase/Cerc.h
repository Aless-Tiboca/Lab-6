#ifndef LAB_4_CERC_H
#define LAB_4_CERC_H
#include <iostream>
#include "Punct.h"

class Cerc {
private:
    int raza;
    Punct centru;

public:
    Cerc();
    Cerc(double raza, Punct C);
    Cerc(const Cerc& c);
    ~Cerc();

    double getRaza();
    void setRaza(double r);
    Punct getCentru();
    void setCentru(double x, double y);

    double getArea();
    double getPerimeter();
    bool inFirstQuadrant();

    bool operator<(Cerc c);
    bool operator==(const Cerc& c);
    friend std::ostream& operator<<(std::ostream& out, const Cerc& c);
    friend std::istream& operator>>(std::istream& in, Cerc& c);
};


#endif //LAB_4_CERC_H
