#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int startllamas;
    do
    {
        startllamas = get_int("number of starting llamas: ");
    }
while(startllamas < 9);

    int endllamas;
    do
    {
        endllamas = get_int("number of goal llamas: ");
    }
while(startllamas > endllamas);

    int year = 0;
do
{
    startllamas = startllamas + (startllamas/3) - (startllamas/4);
    year++;
}
while(startllamas < endllamas);

printf("years taken: %i\n ", year);
}
