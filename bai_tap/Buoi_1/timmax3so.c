#include <stdio.h>
#include <math.h>
int main(){
	int max=0;
	int a[3];
	printf("Nhap 3 gia tri a, b, c: ");
	for(int i=0;i<3;i++){
		printf("\nNhap gia tri thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	for(int i=0;i<3;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	printf("Max cua day = %d ", max);
	return 0;
}