#include "../include/matrix.h"

int main() {
    
    Matrix *m = matrix_create(3, 2);

    matrix_free(m);

    return 0;
}