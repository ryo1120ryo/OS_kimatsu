#include "stdio.h"
#include "math.h"
#include "float.h"

int main() {
	FILE* fp;
	
	int i, j = 0, t = 0;
	int select;
	char output[28] = { 0 };

	int count;
	char Alphabet;

	printf("SELECT  1 or 2\n"
		"1...�~����\n"
		"2...���[�g2\n");
	scanf_s("%2d", &select);

		if (select == 1)
		{
			//pi.txt�ǂݍ���
			fp = fopen("pi.txt", "r");
		}else{
			fp = fopen("route2.txt", "r");
		}

			if (fp == NULL)
			{
				printf("�t�@�C���I�[�v�����s\n");
				return -1;
			}
		
			// �z��pi�œǂݍ��ݕ\��
			int input[28] = { 0 };
			while ((input[j] = fgetc(fp)) != EOF)
			{
				input[j] = input[j] - 48;
				printf("%d", input[j]);
				j++;
			}

			while (t=28)
			{
				for (j = 0; j < 28; j++)
				{
					count = input[j];
				}
				for (Alphabet = 'A'; Alphabet <= 'W'; Alphabet++) {
					for (i = 0; i <= count; i++) {
						output[i] = Alphabet;
					 }
				}
				t++;
			}
}