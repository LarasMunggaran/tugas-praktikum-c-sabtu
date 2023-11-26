#include <stdio.h>

int main(void)
{
	printf("## Program Deret Angka ## \n");
	printf("========================= \n\n");
	
	int jd, i;
	
	printf("Jumlah deret yang diinginkan: ");
	scanf("%d", &jd);
	
	for (i=1; i<=jd; i++) {
		printf("%d ", i*10);
	}
	printf("\n");
	
	return 0;
}
