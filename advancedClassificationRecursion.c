# include <stdio.h>
#include <math.h>
#include "NumClass.h"

int rec(int x, int len){
    if(x == 0)
    return 0;
    return (rec(x / 10, len) + pow(x % 10, len));
}

int TheINum(int x,int i){
    for(int j = 0; j < i; j++)
        x = x / 10;
        return x % 10;
}

int length(int x){
    int len = 0;
    while(x != 0){
    x = x / 10;
    len++;
}
return len;
}

int IsPalindrome(int x){
    if(x == 0)
    return 1;
    if(TheINum(x, length(x)-1) == 0 && TheINum(x,0) == 0){
        x = x / 10;
        x = x / (pow(10, length(x)-1));
        return isPalindrome(x);
    }
    else if(TheINum(x, length(x)-1) == 0)
    return 0;
    if(TheINum(x,0) == TheINum(x,length(x)-1)){
        x = x / 10;
        x = x / (pow(10, length(x)-1));
        return isPalindrome(x);
    }
    return 0;
}

int IsArmstrong(int x) {
    int y = length(x);
    if(rec(x,y) == x)
    return 1;
    return 0;
}
