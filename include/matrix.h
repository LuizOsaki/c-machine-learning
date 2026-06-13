#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

Matrix *matrix_create(int rows, int cols);

void matrix_free(Matrix *matrix);

#endif