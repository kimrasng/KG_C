#include	<stdio.h>
#include	<malloc.h>	//	�޸� ���� �Լ��� ���ڿ� ���� �Լ��� ����ϱ� ���� �ʿ��ϴ�.
#include	<string.h>

int main()
{
	//char data[3][100];	//	3�� 100���� 2���� �迭�� �����Ѵ�.
	//int i;
	//
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d��° ���ڿ� : ", i + 1);	//	�� �� �ݺ��Ѵ�.
	//	gets(data[i]);	//	�� �࿡ �ִ� 99���� ���ڸ� �Է��Ѵ�.
	//}

	//for (i = 2; i >= 0; i--)	//	2��, 1��, 0���� ������ ������ ����� ����Ѵ�.
	//{
	//	printf("%d : %s\n", i + 1, data[i]);
	//}

	/*
	���� ���� ���ڿ� ó�� : 2���� �迭
		���� �ϳ��� ���� : char

		�� ���� ���ڿ� ���� : �迭 �Ǵ� ������ ���� ���
			char s[10] �Ǵ� char * p �� ������ �� ������ ������ �ּ� ����

		���� ���� ���ڿ� ���� : ������ �迭
			char s[3][10] : �� �ٿ� �ִ� 10�ڷ� �̷���� 3���� ���ڿ� ���� ����
	*/

	char* p[3];	//	�� ĭ�� ������ �迭�� �����Ѵ�.
	char imsi[100];	//	�Է°��� ������ �ӽ� ���� �迭
	int i, size;
	
	for (i = 0; i < 3; i++)
	{
		printf("%d��° ���ڿ� : ", i + 1);
		gets(imsi);	//	�ӽ� ������ ���ڿ��� �Է��Ѵ�.

		size = strlen(imsi);	//	�Է��� ���ڿ��� ���̸� ����Ѵ�.
		p[i] = (char*)malloc((sizeof(char) * size) + 1);	//	----'�Է��� ���� + 1(�ι���)' ũ���� �޸𸮸� Ȯ���Ѵ�.
		strcpy_s(p[i], size + 1, imsi);	//	�Է��� ���ڿ�(imsi)�� ������ �޸𸮸� Ȯ���� ������ �����Ѵ�. srcpy_s(p[i], size + 1, imsi
	}

	printf("\n �Է°� �ݴ�� ���(������)\n");

	for (i = 2; i >= 0; i--);
	{
		printf("%d : %s\n", i + 1, p[i]);	//	������ �迭�� ����� ���ڿ��� ����Ѵ�.
	}

	for (i = 0; i < 3; i++)	//	�Ҵ��ߴ� �޸� 3���� �ü���� �ݳ��Ѵ�.
	{
		free(p[i]);
	}

	return 0;
}