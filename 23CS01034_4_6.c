#include <stdio.h>
int main()
{
    int a,b,Expression;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);

    printf("Enter 1: For Addition\n");
    printf("Enter 2: For Subtraction\n");
    printf("Enter 3: For Multiplication\n");
    printf("Enter 4: For Division\n");
    printf("Enter your choice:");
    scanf("%d",&Expression);

    switch (Expression)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %.2f",a,b,(float)a/(float)b);
        break;    
    default:
        printf("Please enter correct choice.\n");
        break;
    }
    return 0;
}