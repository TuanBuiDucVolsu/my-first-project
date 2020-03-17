#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct SinhVien
{
	char tennhom[20];
    char hodem[30];
    char ten[10];
    float diem[5];
    float dtb;
};
typedef struct SinhVien SV;

void nhap(SV a[],int n);
void xuat(SV a[],int n);

int main(int argc, char *argv[]) {
	int i,n;
	SV sv[n];
	do{
    printf("Nhap so luong SV: "); 
	scanf("%d", &n);
    }while(n <= 0);
    fflush(stdin);
    nhap(sv,n);
    printf("\nThong tin sinh vien \n");
    xuat(sv,n);
    
    printf("\nSinh vien co dtb lon hon 4 la :\n");
    int f = 0,S = 0 ;
	for(i = 1;i <= n; i++)
	{
		if(sv[i].dtb >= 4)
		{
			printf("\n%-10s %-10s %-10s %-7.1f",sv[i].hodem,sv[i].ten,sv[i].tennhom,sv[i].dtb);
			f++;
		}
		S += f;
	}
	if(S == 0)
	{
		printf("\nKhong co sv nao thoa man \n");
	}
	return 0;
}
void nhap(SV a[],int n)
{
	int i,j;
	for(i = 1; i <= n; i++)
	{
	float sum = 0;
	printf("\nSinh vien thu %d \n",i);
	printf("\nNhap ten: "); 
	fflush(stdin); 
	gets(a[i].ten);
	printf("\nNhap ho: "); 
	fflush(stdin); 
	gets(a[i].hodem);
	printf("\nNhap ten nhom: ");
	fflush(stdin);
	gets(a[i].tennhom); 
	printf("\nnhap diem ");
    fflush(stdin);
	for (j=1;j<=5;j++)
        {
        	printf("\nDiem :");
            scanf("%f",&a[i].diem[j]);
            sum += a[i].diem[j];
        }
    fflush(stdin);    
    a[i].dtb = sum/5;
	}

}

void xuat(SV a[],int n){
	int i;
    printf("\n%-15s %-10s %-10s %-7s","ho","ten","nhom","diem\n");
    for(i = 1;i <= n;i++)
    {
    	printf("\n%-15s %-10s %-10s %-7.1f",a[i].hodem,a[i].ten,a[i].tennhom,a[i].dtb);
	}
}

