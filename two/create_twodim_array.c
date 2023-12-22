#include <stdlib.h>
#include <stdio.h>

int** create_twodim_array(int row, int col){
    int* p = malloc(sizeof(int) * row * col);
    int** array = malloc(sizeof(int) * row);
    for (int i = 0; i < row; i++){
        array[i] = p + col * i; 
    } 
    return array;
}

void print_dim_array(int** array, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void generation_dim_array(int** array, int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            array[i][j] = rand() % 1000;
        }
    }
}