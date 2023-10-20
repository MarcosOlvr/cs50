#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int qty = get_int("Qty of llamas: ");
    int goal = get_int("Goal qty of llamas: ");
    int years = 0;

    while (qty != goal)
    {
        int bornLlamas = qty / 3;
        int passAwayLlamas = qty / 4;
        qty += (bornLlamas - passAwayLlamas);

        years++;
    }

    printf("Year: %i\n", years);
}