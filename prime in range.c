#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,min;
    for(min=5;min<=50;min++){
        for(i=2;i<min;i++){
            if(min%i!=0){
                printf(" %d",min);
            }break;
        }
    }
    return 0;
}
