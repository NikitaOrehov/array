int get_min_index(int* array, int left, int right){
    int min_index = 0;
    int min = 10000000;
    for (int i = left; i < right; i++){
        if (array[i] < min){
             min_index = i;
             min = array[i];
        }
    }
    return min_index;
}

void selection_sort(int* array, int size){
    for (int i = 0; i < size; i++){
        int min_index = get_min_index(array, i, size);
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}