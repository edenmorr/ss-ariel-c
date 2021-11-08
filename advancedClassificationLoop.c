# include <stdio.h>
#include <math.h>
#include "NumClass.h"

int TheINum(int x,int i){
    for(int j = 0; j < i; j++)
        x = x / 10;
        return x % 10;
}

int isArmstrong(int x) {
int len = 0;
int sum = 0;
int temp = x;
while(temp != 0){
temp = temp / 10;
len++;
}
temp = x;
while(temp != 0){
    sum = sum + pow(temp%10, len);
    temp = temp / 10;
}
if(sum == x)
return 1;
return 0;
}

int isPalindrome(int x){
    int len = 0, temp = x;
    while(temp != 0){
        temp = temp / 10;
        len ++;
    }
    for(int i = 0; i < len/2; i++){
        if(TheINum(x,i) != TheINum(x,len-i-1))
        return 0;
    }
    return 1;
}

