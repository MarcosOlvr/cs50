#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    int sum;

    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    return sum / (float) N;
}