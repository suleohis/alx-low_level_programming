#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void convert(char s[])
{
    int num = 0;
    int n = strlen(s);

    for (int i = 0; i < n; i++)

        num = num * 10 + (s[i] - 48);

    printf("%d", num);
}

int main()
{
    char s[] = "123";

    convert(s);
    return 0;
}
