#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int num = get_int("Numbers of animals:");
    int birth = num/3;
    int death = num/4;
    printf("Original number:%d ",num,",Birth: ",birth,",Death: ",death);


}