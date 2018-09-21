#include <stdio.h>
#include <locale.h>
int main(){
	int x,y,i,j,q,max = 0,sum = 0;
	printf("Введите кол-во строк: ");
	if(!scanf("%d", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("Введите кол-во столбцов: ");
	if(!scanf("%d", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("\n");
	int A[x][y];
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &(A[i][j]));
		}
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d   ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			if((i==0)&&(j!=0)) {
				sum=sum+A[i][j-1];
			} else if (j==0) {
				for (q=i;q>0;q--)
					sum=sum+A[i-q][j];
			} else {
				sum=sum+A[i][j-1];
				for (q=i;q>0;q--)
					sum=sum+A[i-q][j];
			}
			printf("sum A[%d][%d] = %d\n", i, j, sum);
			if (sum>max)
				max=sum;
		}
		sum=0;
	}
	printf("\n");
	printf("max = %d", max);
	printf("\n\n");
	return 0;
}
