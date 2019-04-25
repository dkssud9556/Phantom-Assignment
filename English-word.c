#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int re(int*);

int main()
{
	char words[20][20] = { {"another"}, {"notebook"}, {"possible"}, {"quickly"}, {"without"}, {"yourselves"}, {"girlfriend"}, {"bodyfriend"}, {"neighbor"}, {"medicine"}, {"cancer"}, {"toothbrush"}, {"buddhist"}, {"vegetables"}, {"climb"}, {"phantom"}, {"grateful"}, {"cabbage"}, {"hamburger"}, {"microwave"} };
	char korean[20][40] = { {"또 다른"}, {"공책"}, {"가능한"}, {"빠르게"}, {"없이"}, {"당신 자신들"}, {"여자친구"}, {"남자친구"}, {"이웃"}, {"약"}, {"암"}, {"칫솔"}, {"불교의"}, {"야채"}, {"오르다"}, {"팬텀"}, {"감사한"}, {"양배추"}, {"햄버거"}, {"전자레인지"} };
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
			printf("맞았습니다.\n뜻: %s", korean[select]);
			system("pause>Nul");
			system("cls");
			re(&check);
		}
		else
		{
			system("cls");
			printf("틀렸습니다.\n뜻: %s", korean[select]);
			system("pause>Nul");
			system("cls");
			re(&check);
		}
	}
}

int re(int* check)
{
	printf("다시할거면 1, 안할거면 0\n1 or 0 : ");
	scanf("%d", check);
	system("cls");
}
