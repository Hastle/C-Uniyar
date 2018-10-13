#include <stdio.h>
#include <locale.h>
#define X 20
#define Y 20

struct Word {
	char l[X];
	int kl;
};

struct Sentence {
	struct Word w[Y];
	int kw;
} sent;

void push(struct Sentence *s) {
	if (s->kw <= Y){
		printf("\nВведите ваше слово.\n\n");
		scanf("%s", s->w[s->kw++].l);
		printf("\n\n");
		return;
	}
	else{
		printf("\nСтек заполнен. Добавление нового слова невозможно.\n");
		return;
	}
}

void show(struct Sentence *s) {
	int i=s->kw-1;
	printf("\n");
	while (i>=0) {
		printf(" %s\n", s->w[i].l);
		i--;
	}
	printf("\n\n");
}

void delete(struct Sentence *s) {
	s->kw--;
	printf("\n\n");
}

struct Sentence *s;

int main() {
	setlocale(LC_ALL,"RUS");
	s = &sent;
	while (1){
		printf(" Нажмите:\n '1' для ввода нового слова;\n '2' для удаления последнего;\n '3' показать стек.\n Затем нажмите 'Enter'.\n\n");
		switch (getchar()){
			case '1':
				push(s);
				break;
			case '2':
				delete(s);
				break;
			case '3':
				show(s);
				break;
			default:
				break;
		}
		//fflush(stdin);
	}
}
