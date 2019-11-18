#include <stdio.h>
#include <conio.h>

int main() {
	system("color 2");
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[5] = {1,2,3,4,5};
		float ipk[5] = {3.55,3.89,3.98,3.52,3.76};
	
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan data dari atas \n2. Tampilkan data dari bawah \n3. Mencari data\n");
		printf("Masukkan input an : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<5; i++){
				printf("NPM : %d\n", npm[i]);
				printf("IPK : %f\n\n", ipk[i]);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa : \n\n");
			for(i = 4 ; i>=0; i--){
				printf("NPM : %d\n", npm[i]);
				printf("IPK : %f\n\n", ipk[i]);	
		}	
		
		} else if (pilih == 3){
			printf("Masukkan data yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<5; i++){
				if(npm[i] != cari){
					printf("NPM : %d\n", npm[i]);
					printf("IPK : %f\n\n", ipk[i]);
					break;
				}
			}			
		} else {
			printf("Inputan Salah");
	}
	}
	
	return 0;
}
