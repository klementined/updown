#include <stdio.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int n = rand() % 100 + 1; // % 100 = 0 ~ 99 | % 100 + 1 = 1 ~ 100

	int answer = 0; //answer we are answering
	int chance = 5; // chance we have
	while (chance > 0)
	{
		printf("%d\n", n);
		printf("chances left: %d\n", chance--);
		printf("guess the number (1 ~ 100): \n\n");
		scanf_s("%d", &answer);

		if (answer > 100 || answer < 0)
		{
			printf("please enter a number between 1 ~ 100\n");
		}

		if (answer < n)
		{
			printf("UP\n");
		}

		else if (answer > n)
		{
			printf("DOWN\n");
		}

		else if (answer == n)
		{
			printf("you got the answer right!\n");
			break;
		}

		else
		{
			printf("unknown error occured\n");
		}

		if (chance == 0)
		{
			printf("you used all your chances! YOU LOSE \n");
			printf("the number was: %d!\n", n);
			break;
		}
	}


	return 0;
}
