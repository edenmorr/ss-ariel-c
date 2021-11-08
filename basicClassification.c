#include <math.h>
# include <stdio.h>
#include "NumClass.h"

int factorial(int x){
    int fac = 1;
    for(int i = 2; i <= x; i++)
    fac = fac*i;
    return fac;
}
int isStrong(int x){
int temp = x;
int sum = 0;
while(temp != 0){
    sum = sum + factorial(temp % 10);
    temp = temp / 10;
}
if(sum == x)
return 1;
return 0;
}

int isPrime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0)
        return 0;
    }
    return 1;
}
