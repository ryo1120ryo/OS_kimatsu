#include "stdio.h"
#include "math.h"
#include "float.h"

int main() {
	FILE* fp;
	
	int i, j = 0, t = 0;
	int select;
	int flag;
	char output[100] = { 0 };//メモリ

	int kioku;
	int count_zero;
	int count = 0;
	char Alphabet[30] = { 'A', 'B', 'C', 'D', 'E', 'F',
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
			 fopen_s(&fp,"pi.txt", "r");
		}else{
			fopen_s(&fp,"route2.txt", "r");
		}

			if (fp == NULL)
			{
				printf("ファイルオープン失敗\n");
				return -1;
			}
		
			// 配列piで読み込み表示
			int input[27] = { 0 };
			while ((input[j] = fgetc(fp)) != EOF)
			{
				input[j] = input[j] - 48;
				printf("%d", input[j]);
				j++;
			}


			for ( i = 0; i < 27; i++)
			{
				if (input[i]==0)
				{
					input[i] = 10;
				}
			}
			printf("\n");

			int spell=0;

		for ( t = 0; t < 27; t+3)
		{
			for ( i = 0; i < 101; i++)
			{
				if (output[i] == 0){
					count_zero++;
				}
				else
				{
					count_zero = 0;
				}

				if (count_zero == input[t])
				{
					for ( j = input[t]-1; j >= 0; j--)
					{
						output[i-j] = Alphabet[t];
					}
				}
			}
			
			
			for (i = 0; i < 101; i++)
			{
				if (output[i] == 0){
					count_zero++;
				}
				else
				{
					count_zero = 0;
				}

				if (count_zero == input[t+1])
				{
					kioku = i;
					for (j = input[t+1] - 1; j >= 0; j--)
					{
						output[i - j] = Alphabet[t+1];
					}
				}
			}


			for (i = 0; i < 101; i++)
			{
				if (output[i] == 0){
					count_zero++;
				}
				else
				{
					count_zero = 0;
				}

				if (count_zero == input[t+2])
				{
					for (j = input[t+2] - 1; j >= 0; j--)
					{
						output[i - j] = Alphabet[t+2];
					}
				}
			}

			for (j = input[t + 1] - 1; j >= 0; j--)
			{
				output[kioku - j] = Alphabet[t + 1];
			}

		}
		
}