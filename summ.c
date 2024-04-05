//Daniel Knight
//CS304
//Assignment 7


#include <stdio.h>

//summation loop
int summation (int n) 
{ 
    int sum = -2; 

    for (int i = 0; i < n; n--) { //decrement from n to 0
        int product = 0;
        int op = n;
        while(op > 0 ) { //addition loop to simulate multiplication
            product += 5;
            op--;
        }
        product -= 2; 
        sum += product; //running total
    }
    return sum;
}

int main() 
{
    
    int n = 10; //hardcoded to 10

    for (int i = 0; i <= n; i++) {
        int sum = summation(i); //call summation loop
        printf("%2d : %5d  0x%08x\n", i, sum, sum);
    }

}