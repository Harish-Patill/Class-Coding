#include<stdio.h>
int main(){
    int x=35;
    char str[20]="Harish";
    float f=3.5;
    
    FILE *fptr=fopen("new.txt","w+");
    
    fprintf(fptr,"%d %s %f",x,str,f);
    
    
    int d;
    char s[20];
    float ff;
    
    rewind(fptr);
    fscanf(fptr,"%d %s %f",&d,s,&ff);
    printf("%d %s %f",d,s,ff);


    fclose(fptr);

    return 0;
}