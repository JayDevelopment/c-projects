#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char** interactWithFlick(const char** arr, int size, int* returnSize) {
    char** result = malloc(size * sizeof(char*));
    if(!result){
        perror("malloc failed.");
        exit(EXIT_FAILURE);
    }
    bool flag = true;

    for(int i = 0; i < size; i++){
        if(strcmp(arr[i], "flick") == 0){
            flag = !flag;
        }
        result[i] = flag ? "true" : "false";
    }
    *returnSize = size;
    return result;
    }
int main(void){
    const char* arr[] = {"flick", "switch", "flick", "switch", "flick"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int returnSize;
    char** result = interactWithFlick(arr, size, &returnSize);
    for(int i = 0; i < returnSize; i++){
        printf("%s\n", result[i]);
    }
    free(result);
    return 0;
}