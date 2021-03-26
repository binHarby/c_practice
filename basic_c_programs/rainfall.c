#include <stdio.h>
#include <stdlib.h>

int main (void){
	double rainfall[5][12]={
				{5.2,6.3,5.6,6.6,10,12.3,22.3,10.3,5.5,11.1,15.6,3.3},
				{2.2,5.8,6.9,4.8,1.3,3.7,9.99,61.2,32,31.1,51.1,2.3},
				{1.2,5.4,6.5,8.6,10.5,9.6,7.8,6.2,6.3,3.31,7.85,12.1},
				{5.2,6.3,5.6,6.6,10,12.3,22.3,10.3,5.5,11.1,15.6,3.3},
				{2.2,5.8,6.9,4.8,1.3,3.7,9.99,61.2,32,31.1,51.1,2.3}
				};
	//get average of each year and each month
			
	double averageY[5];
	double averageM[12];
	int i,k,j;
	double sum;
	for(i=0;i<5;i++){
		sum=0;
		for(j=0;j<12;j++){
			sum+=rainfall[i][j];
			averageM[j]+=rainfall[i][j];
		}
		averageY[i]=sum/12;
	}
	for(k=0;k<12;k++){
		printf("Average for month %d is %f\n",k+1,averageM[k]/5);
	}
	k=0;
	for(k=0;k<5;k++){
		printf("Average for year %d is %f\n",k+1,averageY[k]);
	}

return 0;
}
