#include <stdio.h>
#include <locale.h>
#define N 100
int main() {
	int A[N],n,i,srdn=0;
	setlocale(LC_ALL,"RUS");
	printf("Введите размер массива: ");
	if(!scanf("%d", &n)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	if (n<3) {
		printf("Размер массива меньше 3, введите заново \n");
		return 0;
	}
	printf("Введите элементы массива: ");
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Полученный результат: ");
	for (i=0;i<n-2;i++) {
		srdn=(A[i]+A[i+2])/2;
		if (A[i+1]!=srdn)
			printf("%d ",A[i+1]);
	}
	printf("\n\n");
	return 0;
}

// 7
// 2 5 8 3 1 7 13
