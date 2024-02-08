#include <stdio.h>
int main()
{
    int balance,intRate,CreditScore;
    float interest;

    printf("Enter your current balance:");
    scanf("%d",&balance);
    printf("Enter your credit score:");
    scanf("%d",&CreditScore);
    
    if(CreditScore<=600)
    {
       intRate = 15;
    }
    else if (CreditScore<=750)
    {
        intRate = 12;
    }
    else if (CreditScore>750)
    {
        intRate = 10;
    }
    
    interest = balance*intRate/100;
    printf("Your Interest is:%f",interest);
    return 0;
}