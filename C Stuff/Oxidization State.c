#include <inttypes.h>
#include<stdio.h>
int main() {
    printf("This is an calculator for measuring the oxidization states of 3 elemental molecules.\n\n\n");
    char element1[3];
    int howmany;
    float ox1,ox2,ans;
        printf("Put a name for the unknown element,\n like : X\n");
        scanf("%2s",element1);
        printf("How many?\n");
        scanf("%i",&howmany);
        printf("Put the oxidization states of the two elements you do know,\nlike : A B\n");
        scanf("%f %f",&ox1,&ox2);
            ans=(-(ox1+ox2))/howmany;
        printf("The oxidization state of %s is %2.2f\n",element1,ans);
    return 0;
}
