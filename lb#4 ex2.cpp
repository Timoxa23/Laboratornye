#include <stdio.h>

int getListLenght(void);
int getKValue(void);
void getUserListNumber(int arr[]);
void getElementsSums(int arr[], int len);
void checkResult(int s1, int s2, int len, int k);



int main(void)
{
	int userListNumbers[1000];
	getUserListNumber(userListNumbers);
	return 0;
}


int getListLenght(void)
{
	int lenght;

	printf("%s\n", "Vvedite chislo elementov : ");
	scanf("%d", &lenght);

	return lenght;
}


int getKValue(void)
{
	int k;

	printf("%s\n", "Vvedite chislo k (0 < k < chislo elem-ov massiva ):");
	scanf("%d", &k);

	return k;
}


void getUserListNumber(int arr[])
{
	int userNumber, len;
	len = getListLenght();

	printf("%s\n", "Vvedite elementi:");

	for (int i = 0; i < len; ++i)
	{
		scanf("%d", &userNumber);
		arr[i] = userNumber;
	}

	getElementsSums(arr, len);
}


void getElementsSums(int arr[], int len)
{
	int sum1 = 0;
	int sum2 = 0;
	int k = getKValue();

	for (int i = k; i < len; ++i)
	{
		sum1 += arr[i];
	}

	for (int i = 0; i < k; ++i)
	{
		sum2 += arr[i];
	}

	checkResult(sum1, sum2, len, k);
}


void checkResult(int s1, int s2, int len, int k)
{
	if(s1 > s2) printf(" Summa pervix %d elementov bolshe, chem summa %d poslednix elementov\n", k, (len-k));
	else if(s2 > s1) printf("Summa poslednix %d elementov bolshe, chem summa %d pervix elementov\n", (len-k), k);
	else printf("Summa pervix %d elementov ravno summe %d poslednix elementov\n", k, (len-k));
}