#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	printf("\ngt truoc: a = %d, b = %d", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\ngt sau: a = %d, b = %d", a, b);
	return 0;
}
