#include "stdio.h"
#include "math.h"
#include "float.h"

int main() {
	FILE* fp;
	int j = 0;
	int select;
	char output[28] = { 0 };

	printf("SELECT  1 or 2\n"
		"1...�~����\n"
		"2...���[�g2\n");
	scanf_s("%2d", &select);

		if (select == 1)
		{
			//pi.txt�ǂݍ���
			fp = fopen("pi.txt", "r");
		}
		else
		{
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
}