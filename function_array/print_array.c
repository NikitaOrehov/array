void print_array_int(int* array, int size){
    for (int i = 0; i < size; i++){
        printf("array[%d] = %d;\n", i, array[i]);
    }
}

void print_array_double(double* array, int size){
    for (int i = 0; i < size; i++){
        printf("array[%d] = %lf;\n", i, array[i]);
    }
}