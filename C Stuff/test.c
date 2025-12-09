#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2;
    printf("Type values of a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((b*b-4*a*c)>=1) {
    r1=(-b+sqrt (b*b-4*a*c))/(2*a);
    r2=(-b-sqrt (b*b-4*a*c))/(2*a);
    printf("Ans1= %7.2f Ans2= %7.2f\n", r1, r2);
    }
    if ((b*b-4*a*c)<0) {
        printf("The Answer is complex(imaginary) and cannot be solved.\n");
    }
}
