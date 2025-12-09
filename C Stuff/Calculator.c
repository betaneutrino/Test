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
    printf("7. Trigonometric ratios\n");
    printf("\n");
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
    else if (choice==7) {
        float choice, var1, deg;
        printf("What type of trigonometric ratios you wanna use?\n");
        printf("1. Sine\n");
        printf("2. Cosine\n");
        printf("3. Tangent\n");
        printf("4. Cosecant\n");
        printf("5. Secant\n");
        printf("6. Cotangent\n");
        printf("\n");
        scanf("%f",&choice);
        if (choice==1) {
            printf("Put the angle(deg) you want to Sine: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=sin(deg);
            if (ans>1 || ans<-1) {
                printf("Invalid ratio.\n");
            }
            else if (ans<=1){
                printf("The answer of sin(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
       else if (choice==2) {
            printf("Put the angle(deg) you want to Cosine: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=cos(deg);
            if (ans>1 || ans<-1) {
                printf("Invalid ratio.\n");
            }
            else if (ans<=1){
                printf("The answer of cos(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
        else if (choice==3) {
            printf("Put the angle(deg) you want to Tangent: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=tan(deg);
            if (ans>1 || ans<-1) {
                printf("Invalid ratio.\n");
            }
            else if (ans<=1){
                printf("The answer of tan(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
        else if (choice==4) {
            printf("Put the angle(deg) you want to Cosecant: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=1/(sin(deg));
            if (ans>1 || ans<-1) {
                printf("Invalid ratio.\n");
            }
            else if (ans<=1){
                printf("The answer of cosec(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
        else if (choice==5) {
            printf("Put the angle(deg) you want to Secant: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=1/(cos(deg));
            if (ans>1) {
                printf("Invalid ratio.\n");
            }
            if (ans>1 || ans<-1){
                printf("The answer of sec(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
        else if (choice==6) {
            printf("Put the angle(deg) you want to Cotangent: x\n");
            scanf("%f",&var1);
            deg=var1*(M_PI/180);
            ans=1/(tan(deg));
            if (ans>1 || ans<-1) {
                printf("Invalid ratio.\n");
            }
            else if (ans<=1){
                printf("The answer of cot(%2.2f) is %2.2f. \n",var1, ans);
            }
        }
        else {
            printf("Invalid choice.\n");
        }
    }
    else {
        printf("Invalid choice.\n");
    }
}
