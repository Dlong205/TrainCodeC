#include <stdio.h>
#include "mylib.h"
void menu() {
    printf("\n==========MENU CHUC NANG=========\n");
    printf("1. Nhap mang.\n");
    printf("2. Sap xep tang dan.\n");
    printf("3. Sap xep giam dan.\n");
    printf("4. Tim phan tu trong mang.\n");
    printf("5. Xoa phan tu trong mang.\n");
    printf("6. Chen phan tu trong mang.\n");
    printf("7. Dao nguoc mang.\n");
    printf("0. Exit.\n");
}

void nhapMang(int a[], int *n) {
    printf("Vui long nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; ++i) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void tangDan(int a[], int n, int tam) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

void giamDan(int a[], int n, int tam) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

void timGT(int a[], int b[], int n, int trung, int dem) {
    printf("Nhap phan tu can tim: ");
    scanf("%d", &trung);
    for (int i = 0; i < n; i++) {
        if (a[i] == trung) {
            b[dem] = i + 1;
            dem++;
        }
    }
    printf("Phan tu %d xuat hien %d lan.\n ", trung, dem);
    printf("O vi tri: ");
    for (int i = 0; i < dem; i++) {
        printf("%d ", b[i]);
    }
}

void xoaTheoViTri(int a[], int *n, int vi_tri) {
    if (vi_tri < 0 || vi_tri >= *n) return;
    for (int i = vi_tri; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void xoaTheoGiaTri(int a[], int *n) {
    int trung;
    printf("Nhap gia tri phan tu can xoa: ");
    scanf("%d", &trung);
    int found = 0;
    for (int i = 0; i < *n; i++) {
        if (a[i] == trung) {
            xoaTheoViTri(a, n, i);
            i--; // Kiểm tra lại vị trí hiện tại sau khi xóa
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", trung);
    }
}
void chenPhanTu(int a[], int *n) {
    int vi_tri, so_pt_chen;
    printf("Nhap so phan tu muon chen: ");
    scanf("%d", &so_pt_chen);
    printf("Nhap vi tri muon chen phan tu (0 <= vi_tri <= %d): ", *n);
    scanf("%d", &vi_tri);
    if (vi_tri < 0 || vi_tri > *n) {
        printf("Vi tri chen khong hop le.\n");
        return;
    }
    for (int i = 0; i < so_pt_chen; i++) {
        int gia_tri;
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &gia_tri);
        for (int j = *n; j > vi_tri; j--) {
            a[j] = a[j - 1];
        }
        a[vi_tri] = gia_tri;
        (*n)++;
        vi_tri++;
    }
}
void daoNguocDay(int a[], int n){
	printf("Cac phan tu trong mang nguoc la: ");
	for(int i=n-1;i>=0;i--){
		printf("%d ", a[i]);
	}
}