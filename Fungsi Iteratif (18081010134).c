#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int p, n, i, hasil;
	
	printf("Masukan bilangan yang akan dipangkatkan: ");
	scanf("%d", &p);
	printf("Masukan bilangan pangkatnya: ");
	scanf("%d", &n);
	
	i=1;
	hasil=1;
	
	for(i=1;i<=n;i++)
	{
		hasil=hasil*p;	
	}
	printf("Hasil dari %d pangkat %d adalah %d ",p,n, hasil);
	return 0;
}


