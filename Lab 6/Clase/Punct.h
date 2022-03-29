//
// Created by alext on 22/03/2022.
//

#ifndef LAB_4_PUNCT_H
#define LAB_4_PUNCT_H
#include <iostream>

class Punct {
private:
    double x, y;
public:
    Punct();
    Punct(double x, double y);
    Punct(const Punct& A);
    ~Punct();

    void setPunct(double x, double y);
    double getX();
    double getY();

    bool operator==(const Punct& A);
    friend std::ostream& operator<<(std::ostream& out, const Punct& A);
    friend std::istream& operator>>(std::istream& in, Punct& A);

};


#endif //LAB_4_PUNCT_H
