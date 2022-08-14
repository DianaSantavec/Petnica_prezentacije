#include <stdio.h>
#include <stdlib.h>

#define ALLOCATED_MEMORY_SIZE 4

int main(){
    int *p, *p2;
    int i;

    p = (int*)malloc(ALLOCATED_MEMORY_SIZE*sizeof(int));
    p2 = p;
    
    for (i = 0; i < ALLOCATED_MEMORY_SIZE; i++){
        // 2
        p[i] = i * 2;
    }

    for (i = 0; i < ALLOCATED_MEMORY_SIZE; i++){
        printf("[%d] = %d", i, p[i]);
    }

    free(p);
    printf ("ovde nesto jos radimo \n");
    free(p2);

    return 0;
}