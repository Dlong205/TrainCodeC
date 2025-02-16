#include <stdio.h>
#include <math.h>
int main(){
	long long a;
	printf("Nhap so: ");
	scanf("%lld", &a);
	if(a%2==0){
		printf("So %lld la so chan!", a);
	}
	else printf("So %lld la so le", a);
	
	return 0;
}