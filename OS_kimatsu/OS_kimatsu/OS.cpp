#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
	FILE *fp;

	int i, j = 0, t = 0;
	int select;
	char output[26][100] = { 0 };
	char spell;

	int count = 0;
	char Alphabet[26];

	printf("SELECT  1 or 2\n"
		"1...円周率\n"
		"2...ルート2\n");
	scanf_s("%2d", &select);

		if (select == 1)
		{
			//pi.txt読み込み
			fopen_s(&fp , "pi.txt", "r");
			if (fp == NULL)
			{
				printf("ファイルオープン失敗\n");
				return -1;
			}
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
		
			for (spell = 'A'; spell <= 'W'; spell++)
				{
					Alphabet[j] = spell;
					printf("%c", Alphabet[j]);
				}
				printf("\n");

			for ( i = 0; i < 100; i++) //1行目表示
			{
				printf("%d", output[0][i]);
			}

			printf("\n");

			t = 0;

			while (t< 26)
			{
				t++;
				printf("\n\n");

				count = input[t];

				
					for (i = 0; i < count; i++) {
						output[t][i] = Alphabet[t];
						printf("%c", output[t][i]);
					 }

				
				for (i = count; i < 100; i++)
				{
					printf("0", output[t][i]);
				}
			}
			fclose(fp);
}