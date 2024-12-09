#include<stdio.h>
int main(){
    int inputnumber=0;

    printf("enter a number: \n");
    scanf("%d",&inputnumber);
    int i=0;
     while(i<=inputnumber){
        printf("%d \n",i);
        i++;
        if(i==5){
            break;
        }
        
     }
     printf("Continue\n");
     int j=0;
    while(j<=inputnumber){
        if(j==5){
            continue;
        }
        printf("%d\n",j);
    }

    return 0;

}
