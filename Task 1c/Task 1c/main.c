#include <stdio.h>
#include <locale.h>
int main(){
	int x,y,i,j;
	printf("Введите кол-во строк: ");
	scanf("%d", &x);
	printf("Введите кол-во столбцов: ");
	scanf("%d", &y);
	int A[x][y];
	for (i = 0; i<x; i++) {
		for (j = 0; j<y; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &(A[i][j]));
		}
	}
	for (i = 0; i<x; i++) {
		for (j = 0; j<y; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
