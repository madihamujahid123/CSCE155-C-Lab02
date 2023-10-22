#include<stdio.h>
int main()
{
    float dollar, dollarperpound, exchangefee,totalamountdollar;
    float dolllarperyen;
    printf("Enter the total amount dollar");
    scanf("%f",&dollar);
    exchangefee=dollar*0.1;
    totalamountdollar=dollar-exchangefee;
    dollarperpound=(totalamountdollar/2)*0.79;
    dollarperyen=(totalamountdollar/2)*127.65;
    printf("Half of the dollar exchange to %2fGBP \n",dollarperpound);/*Added .2 to 
    format to 2 decimal places*/

    printf("Half of the dollar exchange to %2fJPY \n",dollarperyen);
    return 0;
    
    
    
}