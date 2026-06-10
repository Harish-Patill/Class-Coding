#include <stdio.h>
int main(){
    char ch;
    int count = 0;
    
    FILE *fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            count++;
        }
    }

    printf("Number of vowels = %d\n", count);

    fclose(fp);

    return 0;
}