#include <stdio.h>
#include "function.h"

int main(){
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    int* array = create_array_int(size);
    generation_int(array, size);
    print_array_int(array, size);
    printf("\n\n\n");
    bubble_sort(array, size);
    print_array_int(array, size);
    return 0;
}