#include <stdio.h>
#include "function.h"

int main(){
    int size = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    int* array = create_array_int(size);
    generation_int(array, size);
    print_array_int(array, size);
    quick_sort(array, 0, size);
    print_array_int(array, size);
    return 0;
}