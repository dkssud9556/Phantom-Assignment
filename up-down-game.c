#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int nMax, Pick, nRandom, HS;
	srand(time(NULL));
	printf("최대 입력 : ");
	scanf("%d", &nMax);

	system("cls");

	nRandom = rand() % nMax + 1;
	printf("숫자 입력 : ");
	scanf("%d", &Pick);

	system("cls");

	if(Pick == nRandom)
	{
		printf("찍신"); system("pause>Nul");
	}
	else
	{
		for (HS = 1; nRandom != Pick; HS++)
		{

			if (Pick > nRandom)
			{
				printf("%d보다 down\n", Pick);
			}
			else if (Pick < nRandom)
			{
				printf("%d보다 up\n", Pick);
			}
			printf("숫자 입력 : ");
			scanf("%d", &Pick);
			system("cls");
		}
		printf("%d번 만에 정답!!", HS);
		system("pause>Nul");
	}
}
