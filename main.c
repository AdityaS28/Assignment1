/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int bill_amount, amount_given, quotient, remainder;
    printf("Enter bill_amount: ");
    scanf("%d", &bill_amount);
    printf("Enter amount_given: ");
    scanf("%d", & amount_given);

    
    quotient = amount_given/bill_amount;

    
    remainder =amount_given%bill_amount;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;

    return 0;
}
