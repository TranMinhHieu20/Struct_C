#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

struct Sach{
	char maSach[30];
	char tenSach[100]; 
	int namXuatBan;
	char nhaXuatBan[50];
	double giaBan;
}; 
void nhapDanhSach(struct Sach *danhSach, int n){

	for(int i = 0; i < n; i++){
		getchar();
		printf("1.Nhap ma sach %d(char): ", i + 1);
		gets(danhSach[i].maSach);
	
		
		printf("2.Nhap ten sach %d(char): ", i + 1);
		gets(danhSach[i].tenSach);
	//	getchar();
		
		printf("3.Nhap nam xuat ban cho Sach %d(int): ", i + 1);
		scanf("%d", &danhSach[i].namXuatBan);
		getchar();
		
		printf("4.Nhap ten nha xuat ban cho Sach %d(char):", i + 1);
		gets(danhSach[i].nhaXuatBan);
	//	getchar();
		
		printf("5.Nhap gia tien cho Sach %d(double): ", i + 1);
		scanf("%lf", &danhSach[i].giaBan);
	}
}
//void inDanhSach(struct Sach *danhSach, int n){
//	printf("maSach \t\ttenSach \t\tnamXuatBan \t\tnhaXuatBan \t\tgiaBan\n"); 
//	for(int i = 0; i < n; i++){
//		printf("%s \t\t%s \t\t%d \t\t%s \t\t%.2lf\n",danhSach[i].maSach, danhSach[i].tenSach, danhSach[i].namXuatBan, danhSach[i].nhaXuatBan, danhSach[i].giaBan); 
//	} 
//} 

void inDanhSach(struct Sach *danhSach, int n) {
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| %-30s | %-50s | %-12s | %-20s | %-10s |\n", "Ma Sach", "Ten Sach", "Nam Xuat Ban", "Nha Xuat Ban", "Gia Ban");
    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("| %-30s | %-50s | %-12d | %-20s | %-10.2lf |\n", danhSach[i].maSach, danhSach[i].tenSach, danhSach[i].namXuatBan, danhSach[i].nhaXuatBan, danhSach[i].giaBan);
    }

    printf("------------------------------------------------------------------------------------------------------------------------------------------\n");
}
void lietKeSachTheoNXB(struct Sach *danhSach, int n, const char *nhaXuatBanCanTim) {
    printf("Cac cuon sach cua nha xuat ban %s:\n", nhaXuatBanCanTim);
    for (int i = 0; i < n; i++) {
        if (strcmp(danhSach[i].nhaXuatBan, nhaXuatBanCanTim) == 0) {
            printf("%s\n", danhSach[i].tenSach);
        }
    }
}

void inDanhSachTheoNamXB(struct Sach *danhSach, int n, int namXBCanTim){
	printf("Cac cuon sach co nam %d: \n", namXBCanTim); 
	for(int i = 0; i < n; i++){
		if(danhSach[i].namXuatBan == namXBCanTim){
			printf("%s\n", danhSach[i].tenSach); 
		} 
	} 
	
} 

int main(){
	struct Sach *danhSach;
	int n;
	printf("Nhap so luong sach: ");
	scanf("%d",&n);
	danhSach = (struct Sach*)malloc(n * sizeof(struct Sach));
	nhapDanhSach(danhSach, n);
	inDanhSach(danhSach, n); 
	
	lietKeSachTheoNXB(danhSach, n, "BGD");

	int namXBCanTim;
	printf("Nam xuat ban can tim la: "); scanf("%d", &namXBCanTim);
	
	inDanhSachTheoNamXB(danhSach, n, namXBCanTim); 
	
	
	return 0; 
} 
