#include<stdio.h>
int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    // char str[size][20];

    char *str[size];                            //this 

    for(int i=0;i<size;i++){
        malloc(20*sizeof(char));                // and this
    }


    printf("Enter Strings: ");
    for(int i=0;i<size;i++){
        scanf("%s",str[i]);
    }

    printf("Entered Strings are : ");
    for(int i=0;i<size;i++){
        printf("%s ",str[i]);
    }
    printf("\n");


    return 0;
}