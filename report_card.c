#include <stdio.h>

int main(void) {

	int kor, math, eng;

	printf("���� ");
	scanf("%d", &kor);
	printf("���� ");
	scanf("%d", &math);
	printf("���� ");
	scanf("%d", &eng);
	printf("�հ� %d\n", kor + math + eng);
	printf("��� %.0f\n", (double)(kor + math + eng) / 3);

}