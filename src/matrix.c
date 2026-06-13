#include "../include/matrix.h"
#include <stdlib.h>

Matrix *matrix_create(int rows, int cols)
{
    Matrix *m = malloc(sizeof(Matrix));

    m->rows = rows;
    m->cols = cols;

    m->data = malloc(rows * sizeof(double *));

    for (int i = 0; i < rows; i++)
    {
        m->data[i] = malloc(cols *sizeof(double));
    }

    return m;
}

void matrix_free(Matrix *matrix)
{
    for (int i = 0; i < matrix->rows; i++)
    {
        free(matrix->data[i]);
    }
    free(matrix->data);

    free(matrix);
}