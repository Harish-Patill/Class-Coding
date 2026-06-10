#include<stdio.h>
int main(){
    char ch;

    FILE *fptr=fopen("data.txt","r");
    while(!feof(fptr)){
        putc(ch,stdout);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}