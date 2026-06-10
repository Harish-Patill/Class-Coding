#include <stdio.h>

int main(){
    char ch;
    int count = 0;
    
    FILE *fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF){
        if(ch == 'c' || ch == 'C'){
            count++;
        }
    }

    printf("Number of c = %d\n", count);

    fclose(fp);

    return 0;
}