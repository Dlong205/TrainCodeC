#include <stdio.h>
#include "mylib.h"
int main() {
    int n, tam, trung, dem = 0, choice, choice5, vi_tri;
    int a[100], b[10], c[10];
    do {
    	menu();
    	printf("\nVui long nhap lua chon cua ban: ");
    	scanf("%d", &choice);
    	switch(choice){
    		case 1:
    			nhapMang(a, &n);
    			break;
    		case 2:
    			tangDan(a, n, tam);
    			xuatMang(a, n);
    			break;
    		case 3:
    			giamDan(a, n, tam);
    			xuatMang(a, n);
    			break;
    		case 4:
    			timGT(a, b, n, trung, dem);
    			break;
    		case 5:
    			xoaTheoGiaTri(a, &n);
    			xuatMang(a, n);
    			break;
    		case 6:
    			chenPhanTu(a, &n);
    			xuatMang(a, n);
    			break;
    		case 7:
    			daoNguocDay(a, n);
    			break;
    	 case 0:
                printf("Ban da thoat chuong trinh !!!\n");
                break;
            default:
                printf("Vui long nhap lua chon hop le.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}