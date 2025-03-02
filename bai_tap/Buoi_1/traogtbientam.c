#include <stdio.h>
#include <math.h>
int main(){
	int a, b, bientam;
	printf("Nhap 2 so a, b: ");
	scanf("%d%d", &a, &b);
	printf("\nGia tri truoc: a= %d, b= %d. ", a, b);
	bientam=a;
	a=b;
	b=bientam;
	printf("\nGia tri sau: a= %d, b= %d. ", a, b);
	return 0;
}