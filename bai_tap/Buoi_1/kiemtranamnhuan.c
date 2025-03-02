#include <stdio.h>
#include <math.h>
int main(){
	long long a;
	printf("Nhap nam kiem tra: ");
	scanf("%lld", &a);
	if(a%4==0&&a%100!=0){
		printf("Nam %lld la nam nhuan! ", a);
	}
	else if(a%100==0&&a%400==0){
		printf("Nam %lld la nam nhuan", a);
	}
	else printf("Nam %lld khong phai la nam nhuan", a);
	return 0;
}