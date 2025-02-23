#include <stdio.h>
#include "matrix.h"

Matrix newMatrix(int nilai1, int nilai2, int nilai3, int nilai4) {
    Matrix matrix;
    matrix.a = nilai1;
    matrix.b = nilai2;
    matrix.c = nilai3;
    matrix.d = nilai4;

    return matrix;
}

