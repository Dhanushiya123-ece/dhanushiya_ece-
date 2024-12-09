/*
syntax:
=======
for (ini;con;inc/dec){
//code
}
for(int i=0;i<=5;i++/++i/i--/--i){
//code
}
*/

#include<stdio.h>
int main(){
    //for loop(inside)
    printf("inside\n");
    for(int i=0;i<=8;i++){
        printf("%d \n",i);
    }
    //for loop(outside)
    printf("outside: \n");
    int j=0;
    for(j=0;j<=6;j++){
        printf("%d \n",j);
    }
}