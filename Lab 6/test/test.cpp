//
// Created by alext on 29/03/2022.
//

#include <cassert>
#include "test.h"
#include "../Clase/Punct.h"
#include "../Clase/Repo.h"

void testAll() {
    biggestEntity();
    testFirstQuadrant();
    testSequenceEqual();
}

void biggestEntity() {
    Repo repo;
    Punct c(1,1);
    repo.addEntity(Cerc(1, c));
    c.setPunct(2,3);
    repo.addEntity(Cerc(2, c));
    c.setPunct(3,4);
    repo.addEntity(Cerc(3, c));
    repo.addEntity(Cerc(3, c));
    Cerc result = repo.getBiggest();
    assert(result == Cerc(3,c));
}

void testFirstQuadrant() {
    Repo repo;
    Punct c(1,1);
    repo.addEntity(Cerc(1, c));
    c.setPunct(2,3);
    repo.addEntity(Cerc(2, c));
    c.setPunct(4,4);
    repo.addEntity(Cerc(3, c));
    repo.addEntity(Cerc(3, c));
    vector<Cerc> rezult = repo.circleInFirstQuadrant();
    c.setPunct(1,1);
    assert(rezult[0]==Cerc(1,c));
}

void testSequenceEqual() {
    Repo repo;
    Punct c(1,1);
    repo.addEntity(Cerc(1, c));
    c.setPunct(2,3);
    repo.addEntity(Cerc(2, c));
    c.setPunct(4,4);
    repo.addEntity(Cerc(3, c));
    repo.addEntity(Cerc(3, c));
    int start = 0, end = 0;
    repo.sequenceEqualEntities(4, start, end);
    assert(start == 2);
    assert(end == 3);

}
