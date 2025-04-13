#include<stdio.h>
int main(){

    // if even output is = 1 or if odd output is = 0 
    int x;

    printf("enter any number : ");

    scanf("%d",&x);

    printf("%d \n", x % 2 == 0);

    return 0;
     
}