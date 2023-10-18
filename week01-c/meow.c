#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }

    int j = 0;
    while (j < 3)
    {
        printf("meow\n");
        j++;
    }

    while (true)
    {
        printf("meow\n");
    }
}