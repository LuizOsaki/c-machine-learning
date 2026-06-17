#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double **data;
} Matrix;

/* Criação e destruição */
Matrix *matrix_create(int rows, int cols);
void matrix_free(Matrix *matrix);

/* Utilidades */
void matrix_fill(Matrix *matrix, double value);
void matrix_random(Matrix *matrix);
void matrix_print(Matrix *matrix);

/* Operações entre matrizes */
Matrix *matrix_add(Matrix *a, Matrix *b);
Matrix *matrix_subject(Matrix *a, Matrix *b);
Matrix *matrix_multiply(Matrix *a, Matrix *b);

/* Outras operações */
Matrix *matrix_transpose(Matrix *matrix);

#endif