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
    printf("8. (a+b)^2(Equation)\n");
    printf("9. Infinite Series Calculator\n");
    printf("10. Oxidization State calculator\n");
    printf("11. Quadratic Equation solver.\n\n");
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
    else if(choice==8) {
        printf("What is the value for a and b? a b:\n");
        scanf("%f %f",&var1,&var2);
        ans=(var1+var2)*(var1+var2);
        printf("The answer for (%2.2f +%2.2f)^2 is %2.2f", var1,var2,ans);
    }
    else if(choice==9)
        {
            char choice;
            printf("This is a calculator for infinite geometric series related stuff.\n\n");
            printf("Do you have the value of a and r? (y/n)\n");
            scanf(" %c", &choice);
            if (choice=='n') {
                float f1,f2,ans_a,ans_r;
                printf("Write the first 2 terms of the infinite geometric series\n");
                scanf("%f %f",&f1,&f2);
                ans_a=f1;
                ans_r=f2/f1;
                printf("The first term of the series is %3.3f, The common ratio is %3.3f.\n\n", ans_a, ans_r);
                printf("Restart the program to continue further.\n");
            }
            else if (choice=='y') {
                float choice1,ans,a,r;
                int n;
                printf("Enter the value of first term and common ratio: a r\n\n");
                scanf("%f %f", &a, &r);
                printf("What would you like to calculate?\n");
                printf("1. n'th Term\n");
                printf("2. n'th partial sum\n");
                printf("3. Sum of a geometric set (r<1)\n\n");
                scanf("%f",&choice1);
                if (choice1==1) {
                    printf("Enter the n'th integer you want to find the n'th term of: n\n");
                    scanf("%i", &n);
                    ans=a*pow(r,n-1);
                    printf("The %i'th integer is %3.3f.\n",n,ans);
                }
                else if (choice1==2) {
                    printf("Enter the n'th integer you want to find the n'th partial sum of: n\n");
                    scanf("%i",&n);
                    if(r>1){
                        ans=(a*((pow(r,n))-1))/(1-r);
                        printf("The %i'th sum is %3.3f.\n",n,ans);
                    }
                    else if(r<1){
                        ans=(a*(1-(pow(r,n))))/(1-r);
                        printf("The %i'th sum is %3.3f.\n",n,ans);
                    }
                }
                else if (choice1==3) {
                    if (r>1) {
                        printf("Can't calculate it, as r is greater than 1. No sum of geometric set.\n");
                    }
                    else if (fabs(r)<1) {
                        ans=a/(1-r);
                        printf("The sum of the geometric set is %3.3f",ans);
                    }
                }
                else {
                    printf("Wrong option!\n");
                }
            }
        }
    else if(choice==10) {
        {
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
    }
    else if(choice==11){
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
    }
    else {
        printf("Invalid choice.\n");
    }
}
