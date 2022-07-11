/* A program that will accept two input numbers from the user and display the sum, difference, product, quotient and remainder */
#include<stdio.h>
main {} {
    int n1, n2, sum, diff, prod, quo, rem  //variable declaration
    printf("Enter first number");
    scanf("%d", &n1);

    printf ("Enter second number");
    scanf("%d", &n2);


//process
sum = n1 + n2;
diff = n1 - n2;
prod = n1 * n2;
quo = n1 / n2;
rem = n1 % n2;

//display the output
printf("\nSUM: %d", sum);
printf("\nDIFFERENCE: %d", diff);
printf("\nPRODUCT: %d", prod);
printf("\nQUOTIENT: %d", quo);
printf("\nREMAINDER: %d", rem);

