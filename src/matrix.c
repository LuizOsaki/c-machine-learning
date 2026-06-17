#include "../include/matrix.h"
#include <stdlib.h>
#include <stdio.h>

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

void matrix_fill(Matrix *matrix, double value)
{
    for (int i = 0; i < matrix -> rows; i++)
    {
        for (int j = 0; j < matrix -> cols; j++)
        {
            matrix -> data[i][j] = value;
        }
    }
}

void matrix_print(Matrix *matrix)
{
    for (int i = 0; i < matrix -> rows; i++)
    {
        for (int j = 0; j < matrix -> cols; j++)
        {
            printf("%.2f ", matrix -> data[i][j]);
        }
        printf("\n");
    }
}

void matrix_random(Matrix *matrix)
{
    for (int i = 0; i < matrix -> rows; i++)
    {
        for (int j = 0; j < matrix -> cols; j++)
        {
            matrix -> data[i][j] = (double) rand()/RAND_MAX;
        }
    }
}

