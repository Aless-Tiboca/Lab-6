//
// Created by alext on 15/03/2022.
//

#include "Cerc.h"
#include <cmath>
#include <iostream>
#include "Punct.h"

/**
 * creaza o instanta a clasei
 */
Cerc::Cerc() {
    this->raza = 0;
}

/**
 * creaza o instanta a clasei cu parametri
 * @param raza raza cercului
 */
Cerc::Cerc(double raza, Punct C) {
    this->raza = raza;
    this->centru = C;
}

/**
 * creaza o instanta a clasei folosind informatiile altui obiect
 * @param c un cerc
 */
Cerc::Cerc(const Cerc &c) {
    this->raza = c.raza;
    this->centru = c.centru;
}

/**
 * acceseaza raza cercului
 * @return raza cercului
 */
double Cerc::getRaza() {
    return this->raza;
}

/**
 * schimba valoarea razei cercului
 * @param r valoarea noi raze
 */
void Cerc::setRaza(double r) {
    this->raza = r;
}

double Cerc::getArea() {
    return M_PI*this->raza*this->raza;
}

double Cerc::getPerimeter() {
    return 2*M_PI*this->raza;
}

bool Cerc::operator==(const Cerc &c) {
    if(this->raza == c.raza && this->centru == c.centru)
        return true;
    return false;
}

std::ostream &operator<<(std::ostream &out, const Cerc &c) {
    out<<"Cercul are centrul "<<c.centru<<" si raza "<<c.raza<<std::endl;
    return out;
}

Punct Cerc::getCentru() {
    return this->centru;
}

void Cerc::setCentru(double x, double y) {
    this->centru.setPunct(x, y);
}

std::istream &operator>>(std::istream& in, Cerc &c) {
    std::cout<<"Dati cooordonatele centrului: "<<std::endl;
    in>>c.centru;
    std::cout<<"Dati raza cercului: "<<std::endl;
    in>>c.raza;
    return in;
}

bool Cerc::operator<(Cerc c) {
    return (this->getArea() < c.getArea());
}

bool Cerc::inFirstQuadrant() {
    return (this->raza <= this->centru.getX() && this->raza <= this->centru.getY());
}

Cerc::~Cerc() = default;
