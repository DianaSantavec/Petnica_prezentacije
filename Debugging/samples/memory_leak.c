#include <stdio.h>
#include <stdlib.h>

#define ALLOCATED_MEMORY_SIZE 4

int main(){
    int *p;
    int i;

    p = (int*)malloc(ALLOCATED_MEMORY_SIZE*sizeof(int));
    
    for (i = 0; i < ALLOCATED_MEMORY_SIZE; i++){
        // 2
        p[i*2] = i;
    }

    for (i = 0; i < ALLOCATED_MEMORY_SIZE; i++){
        printf("[%d] = %d", i, p[i]);
    }

    return 0;
}