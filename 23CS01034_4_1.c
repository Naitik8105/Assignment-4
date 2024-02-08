//This is code for que-1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int check = (num%2);
    switch(check)
    {
    case 0 :
        printf("Even number");
        break;
    case 1:
        printf("Odd number");
        break;
    default:
        break;          
    }
    return 0;
}