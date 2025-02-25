#include "lagu.h"
#include <iomanip>
#include <sstream>

Lagu::Lagu(std::string judul, std::string penyanyi, std::string album, int durasi_menit, int durasi_detik) {
    this->judul = judul;
    this->penyanyi = penyanyi;
    this->album = album;

    // Format durasi menjadi "mm:ss"
    std::ostringstream durasi_format;
    durasi_format << std::setw(2) << std::setfill('0') << durasi_menit
                  << ":" << std::setw(2) << std::setfill('0') << durasi_detik;
    this->durasi = durasi_format.str();
}

void Lagu::play() {
    std::cout << "Sedang memutar lagu: " << this->judul << " (" << this->album << ")\n"
              << "Oleh: " << this->penyanyi << "\n"
              << "Durasi: " << this->durasi << "\n\n";
}

std::string Lagu::getJudul() {
    return this->judul;
}
