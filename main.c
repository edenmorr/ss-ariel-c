#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){
    int x,y;
    scanf("%i%i", &x,&y);



    printf("Prime numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPrime(i) == 1)
        printf(" ,%i",i);
    }

    printf("\nArmstrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isArmstrong(i) == 1)
        printf(" ,%i",i);
    }    

    printf("\nStrong numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isStrong(i) == 1)
        printf(" ,%i",i);
    }
    
    printf("\nPalindrome numbers are:");
    // x<y
    for(int i = x; i <= y; i++){
        if(isPalindrome(i) == 1)
        printf(" ,%i",i);
    }
    
    printf("\n");

    return 0;

}