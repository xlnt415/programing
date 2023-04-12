#include <stdio.h>
//차식 프로그래밍 : 절차를 올바르게 밝아라. 

//�: 자료 -> 처리 -> 정보
//자료는 어떻게 준비할 것인가? -상수/입력 

//준비한 자료는 어디에 보관할 것인가? - 변수 
//자료의 종류는 무엇인가?	- 문자(단일문자/문자열) / 숫자(정수/실수) 

//어떤 처리를 할 것인가?
//처리과정을 저장해서 쓸 것인가?
// -> 연산자에 의해서만 처리가 된다 

//결과물을 출력할 것인가? prinf
//다른 곳으로 전달할 것인가? 전달을 위한 명령어를 이용한다. 
 
int main(void){
	
	char name[100];
	int age;
	char dream[100];
	char blood[100];
	printf("이름 입력\t>> ");
	scnaf("%s", name, sizeof(name));
	printf("나이입력\t>>");
	scanf("%d", &age);
	printf("혈액형 입력\t>>");
	scanf("%s", blood, 100);
	printf("꿈 입력\t\t>> ");
	scanf("%s", dream, 100);
	//gets(dream, 100);
	
		
	return 0;
}


#include <stdio.h>

int main(void){
	int num1; int num2; int num3;
	sum = num1 + num2 + num3;
	
	printf("정수 3개 입력 >>");
	scanf(%d%d%d", &num1, &num2, &num3);
	printf("합 : %d\n", sum);
	printf("평균 : %.4f\n", sum/3.0);
	
	double avg = sum / 3.0;
	printf("정수부 : %d\n", (int)(sum/3.0));
	printf("실수부 : %f\n", avg - (int)avg);
	
	double result = (int)avg * (avg - (int)avg);
	printf("정수부와 실수부의 곱 : %.8f\n", result);
	
	return 0;
}
