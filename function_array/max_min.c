int get_max(int x, int y){
    if (x > y) return x;
    else return y;
}

int get_min(int x, int y){
    if (x < y) return x;
    else y;
}

int find_max(int* array, int size){
    int max = 0;
    for (int i = 0; i < size; i++){
        max = get_max(array[i], max);
    }
    return max;
}

int find_min(int* array, int size){
    int min = 100000;
    for (int i = 0; i < size; i++){
        min = get_min(array[i], min);
    }
    return min;
}