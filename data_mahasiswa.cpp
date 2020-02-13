#include <stdio.h>
#include <iostream>
int main()
{
	char nama[30], nim[10];
	int nilai, tugas, uas, uts, absen;
	printf("DATA MAHASISWA\n");
	printf("==============\n");
	printf("Nama \t: "); scanf("%s", &nama);
	printf("NIM \t: "); scanf("%s", &nim);
	printf("Tugas \t: "); scanf("%d", &tugas);
	printf("Absen \t: "); scanf("%d", &absen);
	printf("UTS \t: "); scanf("%d", &uts);
	printf("UAS \t: "); scanf("%d", &uas);
	
	nilai = (tugas + absen + uts + uas) / 4;
	printf("Nilai \t= %d \n", nilai);
	printf("==============\n");
	if (nilai <= 100 && nilai >= 85)
	{
		printf("Selamat! Anda lulus dengan grade 'A'\n");
	}
	else if (nilai < 85 && nilai >= 75)
	{
		printf("Selamat! Anda lulus dengan grade 'B'\n");
	}
	else if (nilai < 75 && nilai >= 65)
	{
		printf("Selamat! Anda lulus dengan grade 'C'\n");		
	}
	else
	{
		printf("Maaf, Anda tidak lulus\n");	
	}
	system("pause");
	return 0;	
}
