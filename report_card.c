#include <stdio.h>

int main(void) {

	int kor, math, eng, mean;

	printf("���� ");
	scanf("%d", &kor);
	printf("���� ");
	scanf("%d", &math);
	printf("���� ");
	scanf("%d", &eng);
	mean = kor+math+eng;
	printf("�հ� %d\n", mean);
	printf("��� %.0f\n", (double)(mean) / 3);
	return 0;

}