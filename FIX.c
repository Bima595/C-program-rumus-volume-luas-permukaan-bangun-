#include <stdio.h> 

///RUMUS KUBUS
void Lkubus(int a, int b){
printf("luas permukaan kubus = %d\n", a*b*b);
}

void Vkubus(int a, int b){
	printf("volume permukaan kubus = %d\n", a*a*a);
}

///RUMUS BALOK
void Lbalok (int a, int b, int c, int d){
	printf("luas permukaan balok = %d\n", a*b*c*d);
}

void Vbalok(int a, int b, int c){
	printf("volume permukaan balok = %d\n", a*b*c);
}

///RUMUS TABUNG
void Ltabung(int a, int b, int c, int d){
	printf("luas permukaan tabung = %d\n", a*b+c*d);
}

void Vtabung( int a, int b,  int c){
	printf("volume permukaan tabung = %d\n", a*b*b*c);
}

///FUNGSI UTAMA
int main(){
	int sisi, rumus, panjang,lebar,tinggi,luas,alas,jari;///VARIABLE YANG AKAN DI GUNAKAN
	int pilihan;
	char start='y'; ///RUMUS LOOPING
while(start=='y')//RUMUS LOOPING
{
printf("==========================================================\n");
printf("| PROGRAM MENGHITUNG VOLUME & LUAS PERMUKAAN BANGUN RUANG|\n");
printf("==========================================================\n");
printf("| PILIH SALAH SATU YANG MAU DIPILIH                      |\n");
printf("| 1. LUAS & VOLUME KUBUS                                 |\n");
printf("| 2. LUAS & VOLUME BALOK                                 |\n");
printf("| 3. LUAS & VOLUME TABUNG                                |\n");
printf("==========================================================\n");
printf("PILIH NOMOR :  ");
scanf("%i",&pilihan);

	
///OPERASI RUMUS 
switch(pilihan)///DI GUNAKAN UNTUK MEMILIH SEBUAH VARIABLE 
{
	case 1:
	printf("==========================================================\n");
	printf("LUAS & VOLUME KUBUS\n");
	printf("==========================================================\n");
	printf("sisi :");
	scanf("%d",&sisi);
	printf("awalan rumus :");
	scanf("%d",&rumus);
	printf("(6 dari awalan rumus luas kubus)\n");
	Lkubus(rumus,sisi);
	Vkubus(sisi,sisi);
	break;
	case 2:
	printf("==========================================================\n");
	printf("LUAS & VOLUME BALOK\n");
	printf("==========================================================\n");
	printf("panjang :");
	scanf("%d",&panjang);
	printf("lebar :");
	scanf("%d",&lebar);
	printf("tinggi :");
	scanf("%d",&tinggi);
	printf("rumus awal : ");
	scanf("%d",&rumus);
	printf("(2 dari awalan rumus luas balok)\n");
	Lbalok(rumus,panjang,lebar,tinggi);
	Vbalok(panjang,lebar,tinggi);
	break;
	case 3:
	printf("==========================================================\n");
	printf("LUAS & VOLUME TABUNG\n");
	printf("==========================================================\n");
	printf("panjang : ");
	scanf("%d",&panjang);
	printf("luas alas : ");
	scanf("%d",&luas);
	printf("keliling alas : ");
	scanf("%d",&alas);
	printf("tinggi : ");
	scanf("%d",&tinggi);
	printf("rumus : ");
	float rumus;
	scanf("%f",&rumus);///%f mengikuti float rumus 
	printf("jari jari kubus : ");
	scanf("%d",&jari);
	printf("3,14 rumus awalan tabung\n");
	Ltabung(rumus,luas,alas,tinggi);
	Vtabung(rumus,jari,tinggi);
	break;
}
	printf("==========================================================\n");
	printf("| MADE BY : SATRIA ABIMANYU PUTRA WIJAYATAMA              |\n");
	printf("| NIM : 395                                               |\n");
	printf("| KELAS : I                                               |\n");
	printf("==========================================================\n");



	printf("ingin masukkan lagi(y/t) ? : "); ///AKHIRAN LOOPING
	scanf(" %c",&start);///AKHIRAN LOOPING
	
	
}
	return 0;
}