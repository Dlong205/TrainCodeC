#include <stdio.h>

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

void xoaMangTheoViTri(int a[], int *n, int vi_tri) {
    if (vi_tri < 0 || vi_tri >= *n) return; // Kiểm tra vị trí hợp lệ
    for (int i = vi_tri; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--; // Giảm kích thước mảng đi 1
}

void xoaTheogiatri(int a[], int *n) {
    int trung;
    printf("Nhap gia tri phan tu can xoa: ");
    scanf("%d", &trung);
    int found = 0; // Biến kiểm tra xem có phần tử nào bị xóa không
    for (int i = 0; i < *n; i++) {
        if (a[i] == trung) {
            xoaMangTheoViTri(a, n, i);
            i--; // Kiểm tra lại vị trí hiện tại sau khi xóa
            found = 1; // Đánh dấu đã tìm thấy và xóa
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", trung);
    }
}
void chenPhanTu(int a[], int *n){
	int vi_tri, so_pt_chen;
	if(vi_tri<0||vi_tri>*n){
		printf("Vui long nhap dung gia tri. ");
	}
	printf("Nhap so phan tu muon chen: ");
	scanf("%d", &so_pt_chen);
	printf("Nhap cac phan tu muon chen: ")
	for(int i=0;i<so_pt_chen;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		(*n)++;
	}
	printf("Nhap vi tri muon chen phan tu: ");
	scanf("%d", &vi_tri);
	for(int i=vi_tri;i<*n-1;i++){
		a[i+1]=a[i];
	}
}
void daoNguocDay(int a[], int n){
	
}
int main() {
    int n, tam, trung, dem = 0;
    int a[100], b[10], c[10];
    nhapMang(a, &n);
    chenPhanTu(a, &n);
    xuatMang(a, n);
    return 0;
}