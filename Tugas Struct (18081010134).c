#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa
{
	int npm;
	float ipk;
};

typedef struct mahasiswa mhs;

main() 
{
	struct mahasiswa mhs[3];
	int i, input;
	int jumlaharray = sizeof(mhs) / sizeof(mhs[0]);
	mhs[0].npm = 1;
	mhs[0].ipk = 3.50;
	
	mhs[1].npm = 2;
	mhs[1].ipk = 3.75;
	
	mhs[2].npm = 3;
	mhs[2].ipk = 4.00;
	
	printf("- Tampilkan Data Struct Mahasiswa - \n");
	for(i = 0; i < jumlaharray; i++)
	{
		printf("Mahasiswa dengan NPM [%d] dan IPK [%.2f] \n",  mhs[i].npm, mhs[i].ipk);
	}
	printf("\n\n");
	
	printf("- Tampilkan Data Struct Mahasiswa (REVERSE) - \n");
	for(i = jumlaharray-1; i >= 0; i--)
	{
		printf("Mahasiswa dengan NPM [%d] dan IPK [%.2f] \n",  mhs[i].npm, mhs[i].ipk);
	}
	printf("\n\n");
	
	printf("- Data Pencarian Berdasarkan NPM - \n");
	printf("Masukkan sebuah NPM : ");
	scanf("%d", &input);
	for(i = 0; i < jumlaharray; i++)
	{
		if(mhs[i].npm == input)
		{
			printf("NPM [%d] memiliki IPK [%.2f] ", mhs[i].npm, mhs[i].ipk, i);
		}
	}
	
	return 0;
}
