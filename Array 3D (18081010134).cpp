#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float jrk1, jrk2;
	int a[3], a2[3], b1[3], b2[3], c1[3], c2[3];
	int X[3], Y[3], Z[3];
	float garis[3][3][3]=
	{
		{
			{1,9,-1}, {6,-4,6}, {-7,3,-7}
		},
		{
			{-2,8,2}, {-5,5,-5}, {8,-2,8}
		},
		{
			{3,7,-3}, {4,-6,4}, {-9,1,-9}
		}	
	};

	for	(int i=0; i<3; i++){
		jrk2 = 0;
		for	(int j=0; j<3; j++){
			jrk1 = 0;
			for	(int k=0; k<3; k++){
				printf("%f\t", garis[i][j][k]);
				if	(j<2){
					jrk1 = jrk1 + pow(garis[i][j][k]-garis[i][j+1][k],2);		
				}
			}
			printf("\n");
			jrk1 = sqrt(jrk1);
			jrk2 = jrk2 + jrk1;
		}
		printf("Panjang Lintasan ke-%d = %e\n", i+1, jrk2);
	};
	return 0;
}
