#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct sinhVien{
	char ten[30];
	char lop[30];
	long long int masv; 
	char dchi[50];
}; 
int main(){
	struct sinhVien a;
	printf("1.Nhap ten sinh vien:\n"); 
	gets(a.ten); 
	 
	
	printf("2.Nhap lop cua sinh vien:\n"); 
	scanf("\n"); 
	gets(a.lop);
	
	printf("3.Nhap ma sinh vien:\n");
	scanf("\n");
	scanf("%lld",&a.masv);
	
	
	printf("4.Nhap dia chi cua sinh vien:\n");
	scanf("\n");
	gets(a.dchi);
	
	printf("<<<<<<Thong tin cua sinh vien a da nhap la:>>>>>>\n");	
	printf("\t%s %s %lld %s", a.ten, a.lop, a.masv, a.dchi );
	
	printf("\n<<<<<<Thong tin cua sinh vien b da nhap la:>>>>>>\n");	
	struct sinhVien b = a;
	printf("\t%s %s %lld %s", b.ten, b.lop, b.masv, b.dchi ); 
	
	return 0; 
} 
