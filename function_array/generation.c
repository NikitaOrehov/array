#include <stdlib.h>
#include <time.h>

int* create_array_int(int size){
    int* array = malloc(sizeof(int) * size);
    return array;
}

double* create_array_double(int size){
    double* array = malloc(sizeof(double*) * size);
    return array;
}

void generation_int(int* array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() % 1000;
    }
}

void generation_double(double* array, int size){
    for (int i = 0; i < size; i++){
        array[i] = rand() / 10000;
    }
}