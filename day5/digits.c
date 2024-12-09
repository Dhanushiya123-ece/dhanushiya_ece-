#include<stdio.h>
int main(){
    int inputNumber=0,count=0,digit,countnumber=0;
    printf("enter a number:  \n");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countnumber++;
        count = (count*10)+digit;
        inputNumber=inputNumber/10;
        
    }
    printf("the no. of digits is:%d ",countnumber);
    return 0;
}
    
