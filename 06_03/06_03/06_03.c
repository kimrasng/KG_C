#include	<stdio.h>

int main(void)
{
	/*
	int i, k;

	for (i = 0; i < 3; i++)	//	�ٱ� for���� �� �� �ݺ��Ѵ�.
	{
		for (k = 0; k < 2; k++)	//	���� for���� �ι� �ݺ��Ѵ�.
		{
			printf("��øfor���Դϴ�. (i�� : %d, k�� : %d) \n", i, k);	//	i�� k ���� �� ����(3x2)�� ����Ѵ�.
		}
	}
	*/

	/*
	int i, k;

	for (i = 1; i <= 9; i++)	//	2~9�ܱ��� �ݺ��Ѵ�.(�ٱ�for��)
	{
		for (k = 1; k <= 9; k++)	//	�� ���� ���ڸ��� 1~9�� �ݺ��Ѵ�. (����for��)
		{
			printf("%d x %d = %2d \n", k, i, i*k);
		}
		printf("\n");	//	���� ������ �� ���� ����.
	}
	*/

	/*
	int i, k;

	for (i = 1; i <= 9; i++)	//	�� ���� ���ڸ���(1~9) . (�ٱ�for��)
	{
		for (k = 2; k <= 9; k++)	//	�� ���� ���ڸ��� 1~9�� �ݺ��Ѵ�. (����for��)
		{
			printf("%d x %d = %2d	", k, i, i * k);	//	���Ŀ��� ����ó���� �Ѵ�.
		}
		printf("\n");	//	�� ���� ������ �� ���� ����.
	}
	*/

	//	�پ��� for���� ����
		//	�ʱ갪�� �ϳ��� �ʿ� ����
		//	�ʱ갪�� ���� ���� ���� �޸�(, )�� ����
		//	�����ĵ� �ϳ� �̻� ��� ����

	/*
	int i, k;	//	�ݺ��� ���� i,k�� �����Ѵ�.

	for (i = 1, k = 1; i <= 9; i++, k++)	//	�ʱ갪�� ������ �� ���̴�.
		printf("%d X %d = %d\n", i, k, i * k);
	*/

	int i;

	i = 0;	//	�ʱ갪

	for (;;)	//	���ѹݺ�(����� ctrl + c)
	{
		printf("%d\n", i);
		i++;	//	������
	}

	//	���ѷ���
		//	for������ �ʱ갪, ���ǽ�, �������� ��� ���� ����
		//	����ڰ� � �۾��� ��� �ݺ��ϰ��� �� �� ���
		//	����ڰ� [cctrl] + [c]�� ������ �ߴܵ�


	return 0;
}