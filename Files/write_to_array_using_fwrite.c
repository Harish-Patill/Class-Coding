#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};

    FILE *fptr=fopen("array.txt","w+");
    fwrite(arr,4,5,fptr);
    rewind(fptr);

    int brr[5];
    fread(brr,4,5,fptr);

    printf("%d %d %d %d %d",brr[0],brr[1],brr[2],brr[3],brr[4]);
    fclose(fptr);

    return 0;
}