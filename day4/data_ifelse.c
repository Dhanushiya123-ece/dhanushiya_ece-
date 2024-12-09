#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a value:");
    scanf("%d",&inputnumber);
    if(inputnumber%2==0){
        printf("the given value is even");

    }
    else{
        printf("the given value is odd");

    }
    return 0;
}

