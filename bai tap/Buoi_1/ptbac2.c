#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c, denta, x1, x2, x;
	printf("pt co dang ax^2+bx+c");
	printf("\nvui long nhap he so a, b, c");
	scanf("%lf%lf%lf", &a, &b, &c);
	denta=pow(b,2)-4*a*c;
	if(a!=0){
		if(denta>0){
			x1=(-b+sqrt(denta))/(2*a);
			x2=(-b-sqrt(denta))/(2*a);
			printf("\npt co 2 nghiem phan biet \nx1=%.2lf\nx2=%.2lf", x1, x2);
		}
		else if(denta==0){
			x=-b/(2*a);
			printf("\npt co 1 nghiem duy nhat %.2lf", x);
		}
		else printf("\npt vo nghiem");
	}
	else if(a==0&&b!=0){
		x=-c/b;
		printf("\npt co 1 nghiem x= %.2lf", x);
	}
	else if (a==0&&b==0&&c==0){
		printf("\npt co vo so nghiem");
	}
	else printf("\npt vo nghiem");
	return 0;
}
