void quick_sort(int* array, int left, int right){
    if (left < right){
        int middle = array[(left + right) / 2];
        int i = left;
        int j = right;
        while (i <= j){
            while(array[i] < middle) i++;
            while(array[j] > middle) j--;
            if (i <= j){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
            }
        }
        if (left < j) quick_sort(array, left, j);
        if (i < right) quick_sort(array, i, right);
    }
}