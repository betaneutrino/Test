#include <stdio.h>
#include <math.h>
int main() {
    float choice,var1,var2,ans;
    printf("What type of calculation you wanna do?\n");
    printf("1. x+y(Addition)\n");
    printf("2. x-y(Substract)\n");
    printf("3. x*y(Multiply)\n");
    printf("4. x/y(Divide)\n");
    printf("5. x^1/2(Square Root)\n");
    printf("6. x^2(Square)\n");
    scanf("%f", &choice);
    if (choice==1) {
        printf("Put the numbers you want to addition: x y\n");
        scanf("%f %f", &var1,&var2);
        ans=var1+var2;
        printf("The answer is %2.2f", ans);
    }
    else if (choice==2) {
        printf("Put the numbers you want to substract: x y\n");
        scanf("%f %f", &var1,&var2);
        ans=var1-var2;
        printf("The answer is %2.2f", ans);
    }
    else if (choice==3) {
        printf("Put the numbers you want to multiply: x y\n");
        scanf("%f %f", &var1,&var2);
        ans=var1*var2;
        printf("The answer is %2.2f", ans);
    }
    else if (choice==4) {
        printf("Put the numbers you want to divide: x y\n");
        scanf("%f %f", &var1,&var2);
        ans=var1/var2;
        printf("The answer is %2.2f", ans);
    }
    else if (choice==5) {
        printf("Put the numbers you want to square root: x\n");
        scanf("%f", &var1);
        if (var1>=0) {
            ans=sqrt(var1);
            printf("The answer is %2.2f", ans);
        }
        else if (var1<0) {
            printf("The number is complex(Imaginary) and cannot be solved.");
        }
    }
    else if (choice==6) {
        printf("Put the numbers you want to square: x\n");
        scanf("%f", &var1);
        ans=var1*var1;
        printf("The answer is %2.2f", ans);
    }
    else {
        printf("Invalid choice. Lmao\n");
    }
}
