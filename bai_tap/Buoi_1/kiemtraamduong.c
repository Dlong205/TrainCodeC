#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap so : ");
	scanf("%d", &a);
	if(a>0) printf("So %d la so duong", a);
	else if(a==0) printf("So %d khong duong, ko am", a);
	else printf("So %d la so am", a);
	return 0;
}