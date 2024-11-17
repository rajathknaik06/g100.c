/* Mukilan is on a mathematical adventure and wants to explore the absolute values of different numbers. He's seeking a tool to quickly determine the absolute value of any given integer using the abs() function from the math library.



Can you help him by creating a program?

Input format :
The input is an integer n, representing the number to be calculated.

Output format :
The output displays"The absolute value of X is Y" where X is the input integer and Y is the absolute value of the input integer n.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, abs_val;
    scanf("%d", &num);
    abs_val = abs(num);
    printf("The absolute value of %d is %d\n", num, abs_val);
    return 0;
}
