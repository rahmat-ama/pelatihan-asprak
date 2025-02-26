#include "matrix.h"

Matrix newMatrix(int a, int b, int c, int d) {
    Matrix m;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
    return m;
}

void printMatrix(Matrix m) {
    printf("[%d %d]\n", m.a, m.b);
    printf("[%d %d]\n", m.c, m.d);
}

Matrix add(Matrix m1, Matrix m2) {
    Matrix result;
    result.a = m1.a + m2.a;
    result.b = m1.b + m2.b;
    result.c = m1.c + m2.c;
    result.d = m1.d + m2.d;
    return result;
}

Matrix subtract(Matrix m1, Matrix m2) {
    Matrix result;
    result.a = m1.a - m2.a;
    result.b = m1.b - m2.b;
    result.c = m1.c - m2.c;
    result.d = m1.d - m2.d;
    return result;
}

void transpose(Matrix *m) {
    int temp = m->b;
    m->b = m->c;
    m->c = temp;
}

int determinant(Matrix m) {
    return (m.a * m.d) - (m.b * m.c);
}