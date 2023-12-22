#include <stdio.h>

void print_array_int(int* array, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void print_array_double(double* array, int size){
    for (int i = 0; i < size; i++){
        printf("%lf ", array[i]);
    }
    printf("\n");
}