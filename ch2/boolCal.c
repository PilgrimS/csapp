#include <stdio.h>

void inplace_swap (int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[] , int cnt){
    for(int front = 0 , back = cnt -1 ; front < back ; front++ , back--){
        inplace_swap(&a[front],&a[back]);
    }
}

void main(){
    int a = 5;
    int b = 7;
    inplace_swap(&a,&b);
    printf("a = %d , b = %d\n" , a , b );

    int c[] = {1,2,3,4,5,6};
    int cnt = 6;
    reverse_array(c,cnt);
    for(int front = 0 ; front < cnt ; front++ ){
        printf(" %d,",c[front]);
    }
}
