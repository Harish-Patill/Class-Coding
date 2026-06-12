#include<stdio.h>

void swap(void *p1, void *p2, int size) {
    char temp;

    for(int i=0;i<size;i++){
        temp = ((char *)p1)[i];
        ((char *)p1)[i] = ((char *)p2)[i];
        ((char *)p2)[i] = temp;
    }
}

int main(){
    int x=10, y=20;
    swap(&x,&y,sizeof(x));
    printf("%d %d\n",x,y);
    
    char a='A', b='B';
    swap(&a,&b,sizeof(a));
    printf("%c %c\n",a,b);
    
    double d1=10.10, d2=20.20;
    swap(&d1,&d2,sizeof(d1));
    printf("%lf %lf\n",d1,d2);

}