#include <stdio.h>

int pow(int a, int b)
{
    int r = 1;

    for (int i = 0; i < b; i++)
    {
        r = r * a;
    }
    return r;
}

void to2(long long n)
{
    int arr[16];
    while (n != 0)
    {

        int power = 0;
        while (pow(2, power) < n)
        {
            power++;
        }

        power--;
        arr[power] = 1;
        n = n - pow(2, power);
    }
    printf(0);
    bool needprint = false;
    for (int i = 15; i >= 0; i--)
    {
        if (arr[i] == 1)
            needprint = true;
        if (needprint)
            printf("%d", arr[i]);
    }
}
