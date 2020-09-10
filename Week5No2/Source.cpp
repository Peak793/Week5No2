#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Palindromiccheck(char* x, char* y);
int main()
{
	char serialNumber[15];
	int i;
	char* begin, * end;
	scanf("%s", serialNumber);
	for (i = 0; i < 15; i++)
	{
		if (serialNumber[i] != '\0')
		{
			if (serialNumber[i] >= '0' && serialNumber[i] <= '9')
			{
				continue;
			}
			else
			{
				printf("Error");
				return 0;
			}
		}
		else
		{
			break;
		}
	}
	begin = serialNumber;
	end = &serialNumber[i-1];
	Palindromiccheck(begin, end);
}
int Palindromiccheck(char* x, char* y)
{
	while (x <= y)
	{
		if (*x != *y)
		{
			printf("This number is not a Palindrome");
			return 1;
		}
		x += 1;
		y -= 1;
	}
	printf("This number is a Palindrome");
	return 0;
}
