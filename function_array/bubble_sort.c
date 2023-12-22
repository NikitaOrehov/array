void swap(int* array, int first, int second){
    int temp;
    temp = array[second];
    array[second] = array[first];
    array[first] = temp;
}

void bubble_sort(int* array, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = size - 1; j > i; j--){
            if (array[j] > array[j - 1]){
                swap(array, j, j - 1);
            }
        }
    }
}