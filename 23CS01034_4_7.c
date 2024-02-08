#include <stdio.h>
int main()
{
    int age, price;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age < 5)
    {
        price = 0;
        printf("Free Entry");
    }
    else if (age <= 12)
    {
        price = 20;
        printf("Ticket rate=%d", price);
    }
    else if (age <= 59)
    {
        price = 50;
        printf("Ticket rate=%d", price);
    }
    else
    {
        price = 50 - (50 * 0.2);
        printf("Ticket rate=%d", price);
    }
    return 0;
}