#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int strings [] = {"battleship", "boot", "cannon", "iron", "thimbe", "top hat"};

    string s = get_string("String: "):
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}