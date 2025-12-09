#include <stdio.h>
int main() {
	float a,b,ans;
	printf("Enter the value for a and b like : a b\n");
	scanf("%f %f",&a,&b);
	ans=(a+b)*(a+b);
	printf("The Answer is of (%f + %f) is : %f.\n", a, b, ans);
	return 0;
}
