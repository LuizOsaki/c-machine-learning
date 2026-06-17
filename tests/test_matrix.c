#include "../include/matrix.h"

int main() {
    
    Matrix *m = matrix_create(3, 2);

    matrix_random(m);

    /*matrix_fill(m, 5.0);*/

    matrix_print(m);

    matrix_free(m);

    return 0;
}