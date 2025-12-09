#include <stdio.h>
int main()
{
    char w1[64], w2[64], w3[64],w4[64], w5[64];
    printf("What do you wanna note?\n");
    scanf("%255s %255s %255s %255s %255s", &w1, &w2, &w3, &w4, &w5);
    printf("1. %s %s %s %s %s ", w1, w2, w3, w4, w5);
}
