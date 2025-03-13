#include <stdio.h>
#include <stdlib.h>

// implement compare function for ascending order
int cmp_asc(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
// implement compare function for descending order
int cmp_desc(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

// function to implement qsort 
void gravitySort(char direction, int* cubes, int n) {
    if (direction == 'R') {
        qsort(cubes, n, sizeof(int), cmp_asc);
    } else if (direction == 'L') {
        qsort(cubes, n, sizeof(int), cmp_desc);
    } else {
        printf("Invalid direction\n");
        return;
    }
}
int main(void)
{
    //Example 1: to the right
    int cubes1[] = {3, 2, 1, 6, 0};
    gravitySort('R', cubes1, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", cubes1[i]);
    }
    printf("\n");

    //Example 2: to the left
    int cubes2[] = {1, 2, 3, 4, 5};
    gravitySort('L', cubes2, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", cubes2[i]);
    }
    printf("\n");
    return 0;
}

