#include "antrian.h"

void Antrian::play() {
	this->antrian_lagu[indeks_lagu_sekarang].play();
}

void Antrian::tambahLagu(Lagu lagu_baru) {
	this->antrian_lagu.push_back(lagu_baru);
}

void next() {

}

void prev() {

}
