#include <stdio.h>
#include <math.h>



int cong(int a, int b){//prototype
	return(a+b);
}
int main(){
	int a = cong(2, 3);
	return 0;
}
//Neu muon lay 2 gia tri ra ham use con tro
//Tao thu vien add.h
//trong ca ct ko can include nhieu noi: dung ham #ifndef
//Vd: #ifndef _ADD.H_ #define _ADD.H_
// Thuong ko khai bao bien trong thu vien.
/*Cach de dung chung bien giua cac file: extern(tim bien trong cac file con) int gcc se tim bien gcc trong
cac file con khac de su dung trong cac file 
- neu ko tim thay bien thi se tim trong cac file khac
- giai bai tap tao mang bang cach su dung nhieu function va su dung nhieu thu vien 
 
		 
