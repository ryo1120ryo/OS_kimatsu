#include "stdio.h"
#include "math.h"
#include "float.h"

int main() {
	FILE* fp;
	int j = 0;
	int select;
	char output[28] = { 0 };

	printf("SELECT  1 or 2\n"
		"1...円周率\n"
		"2...ルート2\n");
	scanf_s("%2d", &select);

		if (select == 1)
		{
			//pi.txt読み込み
			fp = fopen("pi.txt", "r");
		}
		else
		{
			fp = fopen("route2.txt", "r");
		}
			if (fp == NULL)
			{
				printf("ファイルオープン失敗\n");
				return -1;
			}
			// 配列piで読み込み表示
			int input[28] = { 0 };
			while ((input[j] = fgetc(fp)) != EOF)
			{
				input[j] = input[j] - 48;
				printf("%d", input[j]);
				j++;
			}
}