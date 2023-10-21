#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    int years = 0;
    while (start < end)
    {
        int born = start / 3;
        int passAway = start / 4;
        int n = born - passAway;

        start += n;
        years++;
    }

    printf("Years: %i\n", years);
}