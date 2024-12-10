#include<stdio.h>
// return a value and not accepting a parameters
// int sum(int,int);
// void sum(int,int);
int sum();

int main(){
    int res;
    res=sum();
    printf("Result is : %d",res);
    return 0;
}

int sum(){
    int a=20,b=40;
    return a+b;
}
