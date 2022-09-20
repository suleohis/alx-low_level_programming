#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)(time(NULL)));
    int i;
    char pass[12];

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for(i = 0; i < 12; i++) {
    pass[i] = 33 + rand() % 94;
}
pass[i] = '\0';
printf("%s\n",pass);
    printf("\n\n");
}
