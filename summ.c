#include <stdio.h>


int summation (int n) 
{ 
    int sum = -2;

    for (int i = 0; i < n; n--) {
        int product = 0;
        int op = n;
        while(op > 0 ) {
            product += 5;
            op--;
        }
        product -= 2; 
        sum += product; 
    }
    return sum;
}


int main() 
{
    int upperValue = 3;
    int n = upperValue;
    int sum = 0;

    for (int i = 0; i <= n; n--) {
        sum += summation(n);
    }
    n = upperValue;

    printf("\n");
    printf("%d\n", n);
    printf("%x\n", sum);
}