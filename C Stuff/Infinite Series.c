#include<stdio.h>
#include<math.h>
int main(){
    char choice;
    printf("This is a calculator for infinite geometric series related stuff.\n\n");
    printf("Do you have the value of a and r? (y/n)\n");
    scanf("%c", &choice);
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
    else {
        printf("Wrong option!\n");
    }
}
