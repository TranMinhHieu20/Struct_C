#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct mayTinh{
	char maMay[13];
	char tenMay[50];
	int namSanXuat;
	char hangSanXuat[50];
	double giaNhap;
}; 

void nhapThongTinMayTinh(struct mayTinh *thongTin, int n){

	for(int i = 0; i < n; i++){
		printf("Nhap thong tin may tinh %d:\n", i + 1);
		getchar();
		printf("1.Nhap ma may tinh: ");
		gets(thongTin[i].maMay);
		printf("2.Nhap ten may tinh: ");
		gets(thongTin[i].tenMay);
		printf("3.Nhap nam san xuat may tinh: ");
		scanf("%d",&thongTin[i].namSanXuat);
		getchar();
		printf("4.Nhap hang san xuat may tinh: ");
		gets(thongTin[i].hangSanXuat);
		printf("5.Nhap thong tin gia nhap may tinh: ");
		scanf("%lf", &thongTin[i].giaNhap);
	}
}

void hienThiThongTinMayTinh(struct mayTinh *thongTin, int n){
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("| %-13s | %-50s | %-14s | %-30s | %-11s|\n", "Ma May", "Ten May", "Nam San Xuat", "Hang San Xuat", "Gia Nhap"); 
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	for(int i = 0; i < n; i++){
		printf("| %-13s | %-50s | %-14d | %-30s | %-11.2lf|\n",thongTin[i].maMay, thongTin[i].tenMay, thongTin[i].namSanXuat, thongTin[i].hangSanXuat, thongTin[i].giaNhap);
		}
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	 
} 
int main(){
	struct mayTinh *thongTin;
	int n;
	printf("Nhap so luong may tinh: ");scanf("%d",&n);
		thongTin = (struct mayTinh*)malloc(n * sizeof(struct mayTinh));
		
	nhapThongTinMayTinh(thongTin, n);
	hienThiThongTinMayTinh(thongTin, n); 
	return 0; 
} 
