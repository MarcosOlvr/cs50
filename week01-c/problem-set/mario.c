#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int qty;
    do
    {
        qty = get_int("Height: ");
    }
    while (qty < 1 || qty > 8);

    int space;
    
    for (int i = qty; i > 0; i--)
    {
        space = i - 1;
        while (space > 0)
        {
            printf(" ");
            space--;
        }

        for (int j = i; j <= qty; j++)
        {
            printf("#");
        }

        printf(" \n");
    }
}