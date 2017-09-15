#include <stdio.h>

int main(void) {

	int kor, math, eng;

	printf("국어 ");
	scanf("%d", &kor);
	printf("수학 ");
	scanf("%d", &math);
	printf("영어 ");
	scanf("%d", &eng);
	printf("합계 %d\n", kor + math + eng);
	printf("평균 %.0f\n", (double)(kor + math + eng) / 3);

}