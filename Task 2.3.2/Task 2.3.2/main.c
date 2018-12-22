#include <stdio.h>
#include <locale.h>
#define X 100
#define Y 100
int main(){
	int x,y,i,j,q,z,A[X][Y],B[X][Y],C[X][Y],sum = 0;
	setlocale(LC_ALL,"RUS");
	printf("Введите кол-во строк: ");
	if(!scanf("%d", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("Введите кол-во столбцов: ");
	if(!scanf("%d", &y)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &(A[i][j]));
		}
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			for (q=j;q<y;q++)
				sum+=A[i][q];
			printf("sum=%d\n", sum);
			B[i][j]=sum;
            C[i][j]=sum;
			sum=0;
		}
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", B[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			if ((i!=0)&&(j!=y))
				C[i][j]+=C[i-1][j+1];
		}
	 }
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", C[i][j]);
		}
		printf("\n");
	}
	for (i=x; i>0; i--) {
		for (j=y; j>0; j--) {
			if ((i!=0)&&(j!=0))
				C[i-1][j-1]+=B[i][j];
		}
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
