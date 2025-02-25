#include "antrian.h"

int main() {
    Lagu lagu1("Don't Stop Me Now", "Queen", "Jazz", 3, 39);
    Lagu lagu2("Virtual Insanity", "Jamiroquai", "Travelling Without Moving", 5, 41);
    Lagu lagu3("Bohemian Rhapsody", "Queen", "A Night at the Opera", 5, 55);

    Antrian antrian;
    antrian.tambahLagu(lagu1);
    antrian.tambahLagu(lagu2);
    antrian.tambahLagu(lagu3);

    // Putar lagu pertama
    antrian.play();

    // Pindah ke lagu berikutnya
    antrian.next();
    antrian.next();

    // Kembali ke lagu sebelumnya
    antrian.prev();

    return 0;
}