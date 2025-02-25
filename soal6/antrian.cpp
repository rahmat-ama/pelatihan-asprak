#include "antrian.h"

Antrian::Antrian() {
    indeks_lagu_sekarang = 0;
}


void Antrian::play() {
    if (antrian_lagu.empty()) {
        std::cout << "Antrian lagu kosong.\n";
        return;
    }
    antrian_lagu[indeks_lagu_sekarang].play();
}

void Antrian::tambahLagu(Lagu lagu_baru) {
    antrian_lagu.push_back(lagu_baru);
}

void Antrian::next() {
    if (antrian_lagu.empty()) {
        std::cout << "Antrian lagu kosong.\n";
        return;
    }
    indeks_lagu_sekarang = (indeks_lagu_sekarang + 1) % antrian_lagu.size();
    play(); 
}

void Antrian::prev() {
    if (antrian_lagu.empty()) {
        std::cout << "Antrian lagu kosong.\n";
        return;
    }
    indeks_lagu_sekarang = (indeks_lagu_sekarang - 1 + antrian_lagu.size()) % antrian_lagu.size();
    play();  
}
