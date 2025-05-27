#include <stdio.h>

int main(void)
{
    int c;
    int f;
    int lowerBound = 0;
    int upperBound = 300;

    for(c = lowerBound; c <= upperBound; c += 5)
    {
        f = c * (9/5) + 32;
        printf("%d c\t=\t %d f\n", c, f);
    }
}