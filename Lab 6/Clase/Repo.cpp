//
// Created by alext on 22/03/2022.
//

#include "Repo.h"

Repo::Repo() {
    this->entitati = vector<Cerc>();
}

void Repo::addEntity(Cerc e) {
    this->entitati.push_back(e);
}

Cerc Repo::getEntity(int id) {
    return this->entitati[id];
}

Repo::~Repo() {
    this->entitati.clear();
}

Cerc Repo::getBiggest() {
    Cerc max;
    for(auto i=this->entitati.begin(); i<this->entitati.end(); i++)
        if(max < *i)
            max = *i;
    return max;
}

vector<Cerc> Repo::circleInFirstQuadrant() {
    vector<Cerc> rezultat;
    for(auto i=this->entitati.begin(); i<this->entitati.end(); i++)
    {
        Cerc val = *i;
        if(val.inFirstQuadrant())
            rezultat.push_back(val);
    }


    return rezultat;
}

void Repo::sequenceEqualEntities(int n, int& start, int& end)
{
    int length = 0, max = -1;
    start = end = 0;
    for(int i = 0; i<n-1; i++)
    {
        Cerc circle1 = this->getEntity(i);
        Cerc circle2 = this->getEntity(i+1);
        if(circle1 == circle2)
        {
            length++;
            if(length > max)
            {
                max = length;
                start = i-length+1;
                end = i+1;
            }
        }
        else
            length = 0;
    }
}

vector<Cerc> Repo::getVector() {
    return this->entitati;
}
