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
    int upperValue = 10;
    int n = upperValue;

    for (int i = 0; i <= n; i++) {
        int sum = summation(i);
        printf("%2d : %5d  0x%08x\n", i, sum, sum);
    }

}