#include <stdio.h>
#include <locale.h>

int findCharInString(char[102], char);


int main(void)
{
	setlocale(LC_ALL, "Russian");

	char userString[102] = {};
	char userChar;

	printf("%s\n", "Vvedite stroky ne bolee 100 simvolov: ");
	fgets(userString, sizeof(userString), stdin);

	printf("%s\n", "Vvedite simvol: ");
	userChar = getchar();

	printf("Simvol %c povtoryaetsy %d raz(à)\n", userChar, findCharInString(userString, userChar));

	return 0;
}


int findCharInString(char string[102], char sumbol)
{
	int count = 0;
	for (int i = 0; i < (sizeof(char)*102/sizeof(char)); ++i)
	{
		if ((int)string[i] == (int)sumbol)
		{
			count++;
		}
	}

	return count;
}