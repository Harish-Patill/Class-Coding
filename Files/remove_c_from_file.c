#include <stdio.h>

int main()
{
    char ch;
    
    FILE *fp1 = fopen("data.txt", "r");
    FILE *fp2 = fopen("temp.txt", "w");

    while((ch = fgetc(fp1)) != EOF){
        if(ch != 'c' && ch != 'C'){
            fputc(ch, fp2);
        }
    }   

    fclose(fp1);
    fclose(fp2);

    printf("All c's removed and stored in temp.txt\n");

    return 0;
}