#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int nMax, Pick, nRandom, HS;
	srand(time(NULL));
	printf("�ִ� �Է� : ");
	scanf("%d", &nMax);

	system("cls");

	nRandom = rand() % nMax + 1;
	printf("���� �Է� : ");
	scanf("%d", &Pick);

	system("cls");

	if(Pick == nRandom)
	{
		printf("���"); system("pause>Nul");
	}
	else
	{
		for (HS = 1; nRandom != Pick; HS++)
		{

			if (Pick > nRandom)
			{
				printf("%d���� down\n", Pick);
			}
			else if (Pick < nRandom)
			{
				printf("%d���� up\n", Pick);
			}
			printf("���� �Է� : ");
			scanf("%d", &Pick);
			system("cls");
		}
		printf("%d�� ���� ����!!", HS);
		system("pause>Nul");
	}
}
