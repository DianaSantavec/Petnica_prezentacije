#include <stdio.h>
#include <stdlib.h>

int povecava_matricu(int par, int matrica[4][4]);

int main(int argv, char **argc){
    int i,j;
    int matrica[4][4];
    for (i = 0;i < 4;i++){
        for (j = 0; j < 4; j++){
            matrica[i][j] = i * j;
        }
    }
    matrica[i][j] = 100;

    povecava_matricu(5, matrica);
    return 0;
}

int povecava_matricu(int par, int matrica[4][4]){
    int i,j;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            matrica[i][j] += par;
        }
    }
    return 1;
}