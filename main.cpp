#include <stdio.h>

int main()
{
    char k[50];
    FILE *s = fopen("/Users/aleksejmaksimov/Downloads/temp/smth.db", "r");
    fscanf(s, "%s", k);
    printf(k);
    return 0;
}
