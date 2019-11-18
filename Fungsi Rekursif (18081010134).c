#include <stdio.h>
#include <stdlib.h>

int pangkat (int p, int n)
{
	if(n==0){
		return 1;
	}
	else{
		return p*pangkat(p,n-1);
	}
	else 
}

int main() 
{
	int p,n;
	printf("Masukan bilangan yang akan dipangkatkan: ");
	scanf("%d",&p);
	printf("Masukan bilangan pemangkatnya: ");
	scanf("%d", &n);
	printf("Hasil %d dipangkat %d adalah %d\n",p,n,pangkat(p,n));
	return 0;
}
