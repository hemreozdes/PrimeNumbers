#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,sayac=0;
    printf("Enter a num=");scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            sayac++;
        }
    }
    if(sayac==0){
        printf("It is prime number");
    }
    else{
        printf("It is not prime number");
    }
    return 0;
}
