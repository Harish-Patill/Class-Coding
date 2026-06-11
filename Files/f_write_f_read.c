#include<stdio.h>
int main(){
    int x=10;
    FILE *fptr=fopen("fwrite.txt","w+");
    
    fwrite(&x,2,2,fptr);
    rewind(fptr);
    int y;

    fread(&y,1,4,fptr);

    printf("%d",y);

    fclose(fptr);

    return 0;
}