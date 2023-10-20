#include <stdio.h>
#include <cs50.h>

int main(void)
{
     string name = get_string("What's your name? ");
     int age = get_int("What's your age? ");
     string phoneNumber = get_string("Phone number: ");

     printf("Name: %s, Age: %i, Phone number:  %s", name, age, phoneNumber);
}