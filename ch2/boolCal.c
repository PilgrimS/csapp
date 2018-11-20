#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

int random_m(int m){
    return rand()%m;
}

void main(){
    int a = 5;
    int b = 7;
    inplace_swap(&a,&b);
    printf("a = %d , b = %d\n" , a , b );

    srand(time(NULL));
    int m = 200 ;
    int len = random_m(m);
    int c[len];
    for(int front = 0 ; front < len ; front++ ){
        c[front] = random_m(100);
        printf("%d," , c[front]);
    }
    printf("\n");
    reverse_array(c,sizeof(c)/sizeof(c[0]));
    for(int front = 0 ; front < len ; front++ ){
        printf("%d,",c[front]);
    }
    printf("\n");
}
