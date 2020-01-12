#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
	FILE *fp;

	int i, j = 0, t = 0;
	int select;
	int spell=0;
	char output[26][100] = { 0 };

	int count = 0;
	char Alphabet[28] = { 'A', 'B', 'C', 'D', 'E', 'F',
						  'G', 'H', 'I', 'J', 'K', 'L',
						  'M', 'N', 'O', 'P', 'Q', 'R',
						  'S', 'T', 'V', 'W', 'X', 'Y',
						  'Z' };

	printf("SELECT  1 or 2\n"
		"1...円周率\n"
		"2...ルート2\n");
	scanf_s("%2d", &select);

		if (select == 1)
		{
			//pi.txt読み込み
			fopen_s(&fp, "pi.txt", "r");
		}
		else
		{
			//route2.txt読み込み
			fopen_s(&fp, "route2.txt", "r");
		}
			
			int input[26] = { 0 };
			while ((input[j] = fgetc(fp)) != EOF)
			{
				input[j] = input[j] - 48;
				printf("%d", input[j]);
				j++;
			}

			printf("\n\n\n");

			for (i = 0; i < 26; i++) // 0 -> 10
			{ 
				if (input[i]==0)
				{
					input[i] = 10;
				}
			}
		
			

			for ( i = 0; i < 100; i++) //1行目表示
			{
				printf("%d", output[0][i]);
			}

			printf("\n");



			while (t< 26)
			{
				if (t==0)
				{
					for (i = 0; i < input[t]; i++)
					{
						output[t][i] = Alphabet[spell];
					}
					count = count + input[t];
				}
				else
				{
					for (i =  count; i <= count+input[t]; i++) {
						output[t][i] = Alphabet[spell];
					}
					count = count + input[t];
				}

				for ( i = 0; i < 100; i++)
				{
					printf("%c",output[t][i]);
				}
				printf("\n");

				if (t%3==0)
				{
					for ( i = count-input[t-2]-input[t-1]; i <= count-input[t-1]; i++)
					{
						output[t][i] = Alphabet[spell+1];
					}
					spell++;
					for ( i = 0; i < 100; i++)
					{
					printf("%c",output[t][i]);
					}
				printf("\n");
				}

				
				spell++;
				t++;
			}
			
}