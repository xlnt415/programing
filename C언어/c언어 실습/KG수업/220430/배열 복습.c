#include <stdio.h>

int main(void){
	//성적 3번 입력을 받아 평균을 출력하고
	// 합격/불합격 여부를 판단한다. 
	//배열 : 변수의 묶음
	// -> 하나의 이름으로 연관된 값들을 관리한다. 
	int score[3];
	printf("국어, 영어, 수학 성적 입력: ");
	scanf("%d%d%d", &score[0], &score[1], &score[2]]);
	result1 = score[0] + score[1] + score[2];
	result2 = (double)result1 / 3;
	printf("총합: %d점\n", result1);
	printf("평균: %.0f점", result2);
	printf("최종평가 : ");
	if (result2 >= 80) printf("합격\n");
	else printf("불합격\n") 
	return 0;
}
