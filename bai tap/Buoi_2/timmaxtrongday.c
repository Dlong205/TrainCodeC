#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int *n){
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", n);
	for(int i=0;i<*n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void max(int a[], int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
		}
	}
	printf("Max = %d", max);
}
int main(){
	int n;
	int a[100];
	nhapMang(a, &n);
	max(a, n);
}
