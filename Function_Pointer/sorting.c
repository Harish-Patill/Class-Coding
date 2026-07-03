#include<stdio.h>

int ascend(int a, int b){
    return a>b;
}

int descend(int a, int b){
    return a<b;
}

void sort(int *arr, int size, int(*ptr)(int, int)){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(ptr(arr[j], arr[j+1])){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[5]={5,2,4,1,3};

    sort(arr, 5, ascend);
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr, 5, descend);
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}