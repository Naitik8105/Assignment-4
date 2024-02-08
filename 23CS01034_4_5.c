#include <stdio.h>
int main()
{
    int num, sum_cube=0;
    printf("Enter a three digit number:");
    scanf("%d",&num);

    int temp=num;
    if((num>=100)&&(num<=999))
    {
    while(temp>0)
    {
        int r = temp%10;
        temp /=10;
        sum_cube = sum_cube + (r*r*r);
    }
        if(sum_cube==num){
            printf("Armstrong Number");
        }
        else{
            printf("Not a Armstrong Number");
        }
    }
    else
        printf("Incorrect Input");


    return 0;
}