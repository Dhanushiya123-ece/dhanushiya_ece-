#include<stdio.h>
// not return a value and not accepting a parameter
// int sum(int,int);
// void sum(int,int);
// int sum();
void sum();

int main(){
    sum();
    return 0;
}

void sum(){
    int a=20,b=40;
    printf("Result is %d",a+b);
}
