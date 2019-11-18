#include <stdio.h>

int main() {
	int i, j, nilai, jmlsmt, jmlmk, sks[20][30], jumlahnilai, skssmt[14], jumlahsks, totalsks=0;
  	char mk[30], nilaihuruf[20][30], matkul[30][30][30],nama[50],NPM[20];
  	float ipk,nr[14], totalnr=0;
  
  	printf("==============================================\n");
  	printf("\tProgram Menghitung IPK Mahasiswa\n");
  	printf("==============================================\n");
  	
	printf("Nama Lengkap	: ");
	gets(nama); 
	printf("\nNPM		: ");
	gets(NPM);
		
	
  		printf("\nJumlah semester: ");
  		scanf("%d", &jmlsmt);
  		
	if (jmlsmt < 1 || jmlsmt > 14) {
  	
    	printf("\nJumlah semester salah!\n");
    	return 0;
	}
	else {
    for (i = 0; i < jmlsmt; i++) {
      jumlahnilai = 0;
      jumlahsks = 0;
      
      	printf("\njumlah mata kuliah %d: ", i + 1);
      	scanf("%d", &jmlmk);
      
    if (jmlmk < 4) {
    	
        printf("Jumlah matakuliah kurang dari 4 setiap semester\n");
        return 0;
    }
    else {
    for (j = 0; j < jmlmk; j++) {
        	
        printf("\nMata kuliah ke %d\n", j + 1);
        printf("\nNama matkul: ");
        scanf(" %s", matkul[i][j]);
        printf("\njumlah sks matkul: ");
        scanf("%d", &sks[i][j]);
        printf("\nNilai matkul: ");
        scanf(" %c", &nilaihuruf[i][j]);
    
        printf("--------------------------------------------\n");
          
          if (nilaihuruf[i][j] == 'A') {
            nilai = 4 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'B') {
            nilai = 3 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'C') {
            nilai = 2 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='D') {
            nilai = 1 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='E') {
            nilai = 0 * sks[i][j];
          }
          else {
            printf("Input salah!\n");
            return 0;
          }
          jumlahnilai = jumlahnilai + nilai;
          jumlahsks = jumlahsks + sks[i][j];
        }
        if(jumlahsks > 24){
          printf("Jumlah SKS semester lebih dari 24\n");
          return 0;
        } else {
          skssmt[i] = jumlahsks;
          nr[i] = jumlahnilai / jumlahsks;
        }   
      }
    }
  }
  printf("==============================================\n");
  printf("\t\tOutput Nilai\n");
  printf("==============================================\n");
  
  
  	printf("\nNama Mahasiswa :");
  	printf(nama,"");
    printf("\nNPM Mahasiswa  :");
    printf(NPM,"");
    
  for(i = 0; i < jmlsmt; i++){
    printf("\nHasil Semester %d :\n", i+1);
    printf("\n%12s%12s%12s","Mata Kuliah", "SKS", "   \n");
    for(j = 0; j < jmlmk; j++){
      printf("%12s%12d%12c\n",matkul[i][j],sks[i][j],nilaihuruf[i][j]);
    }
    printf("\nSKS\t: %d\n", skssmt[i]);
    printf("NR\t: %.3f\n", nr[i]);
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr + nr[i];
    printf("--------------------------------------------\n");
  }
  ipk = totalnr/jmlsmt;
  printf("\nTotal SKS\t: %d\n", totalsks);
  printf("IPK\t\t: %.3f\n", ipk);
  printf("==============================================\n");
  return 0;
}

