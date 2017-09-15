#include <stdio.h>

int main(void) {

	int kor, math, eng, mean;

	printf("국어 ");
	scanf("%d", &kor);
	printf("수학 ");
	scanf("%d", &math);
	printf("영어 ");
	scanf("%d", &eng);
	mean = kor+math+eng;
	printf("합계 %d\n", mean);
	printf("평균 %.0f\n", (double)(mean) / 3);
	return 0;

}