// Read a number from the user. Check number of set bits in a given number. 
// If number of set bits is odd, then Bit parity is odd. Similarly, 
// If number of set bits is even, then Bit parity is even. 
// For example, If num = 7, number of set bits = 3 which is odd number, 
// so bit parity is odd. Similarly, if num = 3, number of set bits = 2, bit parity should be even

#include<stdio.h>
int main(){
    int num=0;
    int set_bits=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for(int i=0;i<32;i++){
        if((num & (1<<i)) != 0){
            set_bits++;
        }
    }
    printf("Number of set bits = %d\n",set_bits);
    if((set_bits % 2) == 0){
        printf("Bit parity is Even\n");
    }
    else{
        printf("Bit parity is Odd\n");
    }

    return 0;
}