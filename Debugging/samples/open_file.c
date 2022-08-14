#include <stdio.h>
#include <unistd.h>
int main(){
    char str[30];
    FILE *fp = fopen("file.txt", "r");
    fgets(str, 5, fp);
    fclose(fp);
    return 0;
}