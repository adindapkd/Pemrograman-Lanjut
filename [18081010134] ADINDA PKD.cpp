#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

	struct alamat{
		char jalan[50];
		char kecamatan[20];
		char kota[20];
		char provinsi[10];
	};
	
	struct tanggal_lahir{
		int tanggal;
		int bulan;
		int tahun;
	};

	struct nasabah{
		char norek[15];
		char bank[10];
		char nama[20];
		tanggal_lahir tl;
		int umur;
		alamat alt;
		int saldo;
	}nr[50];
	
void Input_nasabah();
void lihat_data();
void cek_total();
void cari();
void maxmin();

int main(){
	int pilihan;
	int i=0;
	int pilih;
	int ulang;
	int x;
	
	while(pilihan){
	printf("\n###################################\n");
	printf("         DATA NASABAH\n");
	printf("###################################\n");
	printf("###################################\n");
	printf("1. Input Data Nasabah\n");
	printf("2. Menampilkan Data Nasabah\n");	
	printf("3. Akumulasi Saldo Seluruh Nasabah\n");
	printf("4. Pencarian Data Nasabah\n");
	printf("5. Nilai Saldo Maximal dan Minimal\n");
	printf("6. Keluar\n");
	printf("###################################\n");
	printf (" Pilih : ");
	scanf("%d",&pilihan);
	system("cls");
		
		switch(pilihan){
		case 1: Input_nasabah();
			break;
		case 2: lihat_data();
			break;
		case 3: cek_total();
			break;
		case 4:	cari();
			break;
		case 5: maxmin();
			break;
		case 6:
			return 0;
			break;
		}
	}
}


int i = 0;

void maxmin(){
	int max = nr[0].saldo;
	int min = nr[0].saldo;
	int j;

	for(j=0;j<i;j++){
		if(max < nr[j].saldo){
			max = nr[j].saldo;
			max=max;
		}
	}

	for(j=0;j<i;j++){
		if(min > nr[j].saldo){
			min = nr[j].saldo;
		}
	}
	
	for(j=0;j<i;j++){
		if(nr[j].saldo==min){
			printf("\n\n Nasabah %s dengan saldo minimal",nr[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nr[j].norek);
    		printf("\n Nama           : %s", nr[j].nama);
	        printf("\n Bank           : %s", nr[j].bank);
	        printf("\n Saldo          : %d",nr[j].saldo);
	    	printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		if(nr[j].saldo==max){
			printf("\n\n Nasabah %s dengan saldo maksimal",nr[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nr[j].norek);
    		printf("\n Nama           : %s", nr[j].nama);
	        printf("\n Bank           : %s", nr[j].bank);
	        printf("\n Saldo          : %d",nr[j].saldo);
	    	printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		
	}
		if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
		getch();
		system("cls");
	
}

void Input_nasabah(){
	
	int pilih;
	int ulang;
	
	printf("\n===========================================================================\n");
	printf("Masukkan Nama : ");
	scanf("%s",&nr[i].nama);
	fflush(stdin);
	printf("\n===========================================================================");
	while(ulang==0);
	printf("\nPilih Bank\n");
	printf("1. BNI\n");
	printf("2. BRI\n");
	printf("3. BCA\n");
	printf("Masukkan Pilihan : ");
	scanf("%d",&pilih);
				
				switch(pilih){
					case 1:
						{
							strcpy(nr[i].bank,"BNI");
							printf("\nBank BNI terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&nr[i].norek);
						}
						break;
					case 2:
						{
							strcpy(nr[i].bank,"BRI");
							printf("Bank BRI terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&nr[i].norek);	
						}
						break;
					case 3:
						{
							strcpy(nr[i].bank,"BCA");
							printf("Bank BCA terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&nr[i].norek);
						}
						break;
					default :
						printf("Pilihan Tidak Ada");
						ulang == 0;
				}
				printf("==========================================================\n");
				printf("Masukkan umur			: ");
				scanf("%d",&nr[i].umur);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Tanggal lahir\n");
				printf("Masukkan tanggal lahir		: ");
				scanf("%d",&nr[i].tl.tanggal);
				fflush(stdin);
				printf("Masukkan bulan lahir		: ");
				scanf("%d",&nr[i].tl.bulan);
				fflush(stdin);
				printf("Masukkan tahun lahir		: ");
				scanf("%d",&nr[i].tl.tahun);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Alamat\n");
				printf("Masukkan nama jalan		: ");
				gets(nr[i].alt.jalan);
				fflush(stdin);
				printf("Masukkan nama kecamatan		: ");
				gets(nr[i].alt.kecamatan);
				fflush(stdin);
				printf("Masukkan nama kota		: ");
				gets(nr[i].alt.kota);
				fflush(stdin);
				printf("Masukkan nama provinsi		: ");
				gets(nr[i].alt.provinsi);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Saldo\n");
				printf("Masukkan jumlah saldo		: ");
				scanf("%d",&nr[i].saldo);
				fflush(stdin);
				printf("==========================================================\n");
				printf("\n\n Tekan untuk kembali ke menu!");
				i++;	
				getch();
				system("cls");
}

void lihat_data(){
	int j = 0;
	if(i!=0){
    	printf("\nData Semua Nasabah");
		while(j<i){
			printf("\n\n| Nasabah %s",nr[j].nama);
			printf("\n");
	    	printf("\n No rekening    : %s",nr[j].norek);
	        printf("\n Nama           : %s", nr[j].nama);
	        printf("\n Bank           : %s", nr[j].bank);
	        printf("\n umur           : %d", nr[j].umur);
	        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	        printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        printf("\n Saldo          : %d",nr[j].saldo);
	        printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
	        j++;
	    }
		
	}
	
	else if(i==0){
		printf("Input data dulu");
		printf("\n\n Tekan untuk kembali ke menu!");
	}
	getch();
	system("cls");
}


void cek_total(){
	int j;
	int jumlah=0;
	
	for(j=0;j<i;j++){
		jumlah = jumlah + nr[j].saldo;
	}
	printf("\n=====================================================");
	printf("\nTotal saldo dari %d nasabah : %d",i,jumlah);
	printf("\n=====================================================");
	printf("\n\n Tekan untuk kembali ke menu!");
	getch();
	system("cls");
	
}


void cari(){
	int memilih;
	int loop;
	int j = 0;
	
	while(loop==0);
	printf("\n=====================================================");
	printf("\n 			Menu Cari");
	printf("\n=====================================================");
	printf("\n1. Cari dengan nama");
	printf("\n2. Cari dengan kecamatan");
	printf("\n3. Cari dengan kota");
	printf("\n4. Cari dengan provinsi");
	printf("\n5. Cari dengan umur");
	printf("\n=====================================================");
	fflush(stdin);
	printf("\nPilih : ");
	scanf("%d",&memilih);
	system("cls");
	
	switch(memilih){
		case 1:
			char nama[20];
			printf("\n=====================================================");
			printf("\n						Cari Nama						");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama nasabah : ");
			gets(nama);
			system("cls");
			while(j<i){
				if(strcmp(nr[j].nama,nama)==0);
					printf("\n\n| Nasabah %s",nr[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nr[j].norek);
	    		    printf("\n Nama           : %s", nr[j].nama);
	        		printf("\n Bank           : %s", nr[j].bank);
	        		printf("\n umur           : %d", nr[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        		printf("\n Saldo          : %d",nr[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
	        		
				j++;
			}
			if(i == 0){
				printf("Data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 2:
			char kecamatan[20];
			printf("\n=====================================================");
			printf("\nCari kecamatan		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama kecamatan : ");
			gets(kecamatan);
			system("cls");
			while(j<i){
				if(strcmp(nr[j].alt.kecamatan,kecamatan)==0);
					printf("\n\n| Nasabah %s",nr[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nr[j].norek);
	    		    printf("\n Nama           : %s", nr[j].nama);
	        		printf("\n Bank           : %s", nr[j].bank);
	        		printf("\n umur           : %d", nr[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        		printf("\n Saldo          : %d",nr[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
	        	
				j++;
			}
			if(i == 0){
				printf("Data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 3:
			char kota[20];
			
			printf("\n=====================================================");
			printf("\nCari kota		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama kota : ");
			gets(kota);
			system("cls");
			while(j<i){
				if(strcmp(nr[j].alt.kota,kota)==0);
					i++;
					printf("\n\n| Nasabah %s",nr[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nr[j].norek);
	    		    printf("\n Nama           : %s", nr[j].nama);
	        		printf("\n Bank           : %s", nr[j].bank);
	        		printf("\n umur           : %d", nr[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        		printf("\n Saldo          : %d",nr[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
	        	
				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 4:
			char provinsi[50];
			printf("\n=====================================================");
			printf("\nCari provinsi		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama provinsi : ");
			gets(provinsi);
			system("cls");
			while(j<i){
				if(strcmp(nr[j].alt.provinsi,provinsi)==0);
					printf("\n\n| Nasabah %s",nr[j].nama);
					printf("\n");
			    	printf("\n No rekening    : %s",nr[j].norek);
	    		    printf("\n Nama           : %s", nr[j].nama);
	        		printf("\n Bank           : %s", nr[j].bank);
	        		printf("\n umur           : %d", nr[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        		printf("\n Saldo          : %d",nr[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 5:
			int umurmax,umurmin;
			int sekarang;
			int umur1,umur2;
			int umur;

			printf("\n=====================================================");
			printf("\nCari dengan rentan umur		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan umur kurang dari : ");
			scanf("%d",&umurmax);
			printf("\nMasukkan umur lebih  dari : ");
			scanf("%d",&umurmin);
		
			while(j<i){
				if(nr[j].umur <= umurmax && umurmin <= nr[j].umur){
					printf("\n\n| Nasabah dengan umur antara %d dan %d", umurmin,umurmax);
					printf("\n");
			    	printf("\n No rekening    : %s",nr[j].norek);
	    		    printf("\n Nama           : %s", nr[j].nama);
	        		printf("\n Bank           : %s", nr[j].bank);
	        		printf("\n umur           : %d", nr[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", nr[j].tl.tanggal,nr[j].tl.bulan,nr[j].tl.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",nr[j].alt.jalan,nr[j].alt.kecamatan,nr[j].alt.kota,nr[j].alt.provinsi);
	        		printf("\n Saldo          : %d",nr[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
				}	
			j++;
		}
			
			if(i == 0){
				printf("Data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}

			getch();
			system("cls");
			break;
	}
}
