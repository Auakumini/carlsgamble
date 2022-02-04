#include <math.h>
#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int nummer = rand() % 10 +1;

	int svar;
	int tries = 0;
	
	while (true) {
		printf("gaet et tal:\n");
		scanf_s("%d", &svar);

		if (svar == nummer)
		{
			printf("tillykke, du har vundet et spejlæg fra Carl \nSvaret var %d\n", nummer);

			return false;
		}
		else
		{
			printf("Forkert!\n\n");
		}

		tries += 1;
		if (tries >= 3) return printf("Du har ikke flere forsoeg, du skylder Carl et dobblet spejlæg \nNummeret var %d\n", nummer);
	}
}