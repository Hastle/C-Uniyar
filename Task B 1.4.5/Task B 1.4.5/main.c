#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	int n,i;
	double x,left,right,sum;
	setlocale(LC_ALL,"RUS");
	printf("Введите x: ");
	if(!scanf("%lf", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	if ((x<=-1)||(1<x)) {
		printf("Введенный x не принадлежит промежутку области сходимости \n");
		return 0;
	}
	printf("Введите n: ");
	if(!scanf("%d", &n)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	if (n<0) {
		printf("Введенное значение n отрицательно \n");
		return 0;
	}
	left=pow((1+x),-0.5);
	sum=1;
	right=1;
	for (i=1;i<n;i++) {
		if (i%2==0) {
			right=right*((i*2-1)*x)/(i*2);
			sum=sum+right;
		} else {
			right=right*((i*2-1)*x)/(i*2);
			sum=sum-right;
		}
		printf("sum %lf; right %lf\n", sum, right);
	}
	printf("\nЗначение функции: %lf", left);
	printf("\nСумма ряда последовательности: %lf", sum);
	printf("\nАбсолютное значение последнего эл-та последовательности: %lf", fabs(right));
	return 0;
}
