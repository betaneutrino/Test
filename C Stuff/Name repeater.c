#include <stdio.h>
int main(){
    char name[32];
    printf("What's your name?\n");
    scanf("%31s",&name);
    printf("Your name is %s",name);
}
