#include <stdio.h>
#include <stdlib.h>

//adinda pkd (18081010134)
int main(){
	
	char namapanjang[50], namapanggilan[50], ttl[50], alamat[100], hobi[100], jurusan[100], npm[50], fakultas [50], univ[50], notelp[100], kembali;
	
		input:
		printf("\n-------SELAMAT DATANG DI----------\n");
		printf("\n----------BIODATA DIRI----------\n");
		printf("\n------------MAHASISWA-----------\n");
		printf("\nTolong isi dengan baik dan benar\n");
		
		printf("Nama				: ");
		gets(namapanjang);
		
		printf("Nama Panggilan			: ");
		gets(namapanggilan);
		
		printf("Tempat, Tanggal lahir		: ");
		gets(ttl);
		
		printf("Alamat				: ");
		gets(alamat);
		
		printf("Hobi				: ");
		gets(hobi);
		
		printf("Jurusan				: ");
		gets(jurusan);
		
		printf("Npm				: ");
		gets(npm);
		
		printf("Fakultas		 	: ");
		gets(fakultas);
		
		printf("Universitas	 		: ");
		gets(univ);
		
		printf("Nomer Telepon	 		: ");
		gets(notelp);
		
		printf("\n\n-----Biodata Mahasiswa-----\n\n");
		printf("Nama Panjang					: %s \n",namapanjang);
		printf("Nama Panggilan					: %s \n",namapanggilan);
		printf("Tempat, Tanggal Lahir 				: %s \n",ttl);
		printf("Alamat						: %s \n",alamat);
		printf("Hobi 						: %s \n",hobi);
		printf("Jurusan						: %s \n",jurusan);
		printf("NPM 						: %s \n",npm);
		printf("Fakultas 					: %s \n",fakultas);
		printf("Universitas 					: %s \n",univ);
		printf("Nomer telepon 					: %s \n",notelp);
		
	return 0;
}
