/*Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)*/

#include <stdio.h>

int sumOfDigits(int);

int main(void){
    int number;
    
    scanf("%d", &number);
    
    printf("%d", sumOfDigits(number));
    
    return 0;
}

int sumOfDigits(int number){
    if(number < 10){
        return number;
    }else{
        int digit = number%10;
        number = number/10;
        return digit + sumOfDigits(number);
    }
}
