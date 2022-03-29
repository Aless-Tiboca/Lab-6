//
// Created by alext on 22/03/2022.
//

#include "Punct.h"
#include <string.h>
#include <iostream>

Punct::Punct() {
    this->x = 0;
    this->y = 0;
}

Punct::Punct(double x, double y) {
    this->x = x;
    this->y = y;
}

Punct::Punct(const Punct &A) {
    this->x = A.x;
    this->y = A.y;
}

Punct::~Punct() {
    this->x = 0;
    this->y = 0;
}

bool Punct::operator==(const Punct &A) {
    if(this->y == A.y && this->x == A.x)
        return true;
    return false;
}

std::ostream& operator<<(std::ostream& out, const Punct &A) {
    out << "(" << A.x << "," << A.y << ")";
    return out;
}

void Punct::setPunct(double x, double y) {
    this->x = x;
    this->y = y;
}

std::istream &operator>>(std::istream& in, Punct &A) {
    in >> A.x >> A.y;
    return in;
}

double Punct::getX() {
    return this->x;
}

double Punct::getY() {
    return this->y;
}

