//
// Created by alext on 22/03/2022.
//

#ifndef LAB_5_REPO_H
#define LAB_5_REPO_H

#include "Cerc.h"
#include <vector>

using namespace std;

class Repo {
private:
    vector<Cerc> entitati;
public:
    /**
     * Constructor
     */
    Repo();
    ~Repo();

    /**
     * Adauga o entitate in repository
     * @param e entitatea de adaugat
     */
    void addEntity(Cerc e);

    /**
     *Primeste o entitate dupa un id
     * @param id
     * @return entitatea de pe id
     */
    Cerc getEntity(int id);

    vector<Cerc> getVector();

    /**
     * Primeste cea mai mare entitate in functie de aria cercului aria cercului
     * @return entitatea cea mai mare
     */
    Cerc getBiggest();

    /**
     * Primeste un vector de cercuri care se afla complet in primul cadran
     * @return un vector cu entitatile dorite
     */
    vector<Cerc> circleInFirstQuadrant();

    /**
     *
     * @return
     */
    void sequenceEqualEntities(int n, int& start, int& end);


};


#endif //LAB_5_REPO_H
