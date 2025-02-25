#include <vector>
#include "lagu.h"
#include <iostream>
#ifndef ANTRIAN_H
#define ANTRIAN_H

class Antrian {
private:
    std::vector<Lagu> antrian_lagu;
    int indeks_lagu_sekarang;
public:
    Antrian();
    void tambahLagu(Lagu lagu_baru);
    void next();
    void prev();
    void play();
};

#endif // !ANTRIAN_H