#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int re(int*);

int main()
{
	char words[20][20] = { {"another"}, {"notebook"}, {"possible"}, {"quickly"}, {"without"}, {"yourselves"}, {"girlfriend"}, {"bodyfriend"}, {"neighbor"}, {"medicine"}, {"cancer"}, {"toothbrush"}, {"buddhist"}, {"vegetables"}, {"climb"}, {"phantom"}, {"grateful"}, {"cabbage"}, {"hamburger"}, {"microwave"} };
	char korean[20][40] = { {"�� �ٸ�"}, {"��å"}, {"������"}, {"������"}, {"����"}, {"��� �ڽŵ�"}, {"����ģ��"}, {"����ģ��"}, {"�̿�"}, {"��"}, {"��"}, {"ĩ��"}, {"�ұ���"}, {"��ä"}, {"������"}, {"����"}, {"������"}, {"�����"}, {"�ܹ���"}, {"���ڷ�����"} };
	char input[20] = { 0 };
	int check = 1, select, i;
	srand(time(NULL));
	while (check)
	{
		select = rand() % 20;
		printf("%s\n", words[select]);
		scanf("%s", input);
		if (strcmp(words[select], input) == 0)
		{
			system("cls");
			printf("�¾ҽ��ϴ�.\n��: %s", korean[select]);
			system("pause>Nul");
			system("cls");
			re(&check);
		}
		else
		{
			system("cls");
			printf("Ʋ�Ƚ��ϴ�.\n��: %s", korean[select]);
			system("pause>Nul");
			system("cls");
			re(&check);
		}
	}
}

int re(int* check)
{
	printf("�ٽ��ҰŸ� 1, ���ҰŸ� 0\n1 or 0 : ");
	scanf("%d", check);
	system("cls");
}
