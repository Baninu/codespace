#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int num = get_int("How many animal: ");
    if (num < 9)
    {
        printf("No");
        return;
    }
    printf("Okay");
}