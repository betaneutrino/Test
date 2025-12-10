#include <stdio.h>
int main() {
	printf("This is an calculator to calculate the value of (a+b)^2. \n\n");
	float a,b,ans;
	printf("Enter the value for a and b like : a b\n");
	scanf("%f %f",&a,&b);
	ans=(a+b)*(a+b);
	printf("The Answer is of (%2.2f + %2.2f) is : %2.2f.\n", a, b, ans);
	return 0;
}
