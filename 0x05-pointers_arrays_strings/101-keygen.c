#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
srand((unsigned int)(time(NULL)));
int i;
char pass[12];

for(i = 0; i < 12; i++)
{
pass[i] = 33 + rand() % 94;
}
pass[i] = '\0';
printf("%s\n",pass);
printf("\n\n");
}
