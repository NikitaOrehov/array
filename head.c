#include <stdio.h>
#include "two-dim_array.h"


int main(){
    int row, col;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    int** array = create_twodim_array(row, col);
    generation_dim_array(array, row, col);
    print_dim_array(array, row, col);
    return 0;
}