#include <stdio.h>

int main(void){
	int num;
	printf("Â¦¼ö´Â È¦¼ö·Î, È¦¼ö´Â Â¦¼ö·Î...");
	scanf("%d", &num);
	if (num % 2 == 0){
		num++;
	} 
	if (num % 2 == 1){
		num++; 
	}
	printf("¹Ù²ï °ª: %d\n", num);
	return 0;
}
