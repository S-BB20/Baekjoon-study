#include<stdio.h>

int main()
{
	int t, a[2], i, m[2];

	scanf("%d", &t);

	for (t; t > 0; t--)
	{
		scanf("%d %d", &a[0], &a[1]);


		for (i = 1, m[0] = 500; i <= 6; i++)
		{
			a[0] -= i;

			if (a[0] == -1 && i == 1)
				m[0] = 0;

			//printf("%d\n", i);

			if (a[0] <= 0)
				break;

			if (i < 3)  //�ݾ� ���ϱ�
				m[0] -= (3 - i) * 100;
			else if (i == 3)
				m[0] = 50;
			else if (i > 3 && i <= 6)
				m[0] -= 20;

			//printf("%d\n", m[0]);
		}
		if (a[0] > 0)
			m[0] = 0;


		for (i = 1, m[1] = 512; i <= 16; i <<= 1)
		{
			a[1] -= i;
			//printf("%d\n", i);

			if (a[1] == -1 && i == 1)
				m[1] = 0;

			if (a[1] <= 0)
				break;

			m[1] >>= 1;  //�ݾ� ���ϱ�

			//printf("%d\n", m[1]);
		}
		if (a[1] > 0)
			m[1] = 0;

		//printf("���� : %d %d\n", m[0], m[1]);
		printf("%d\n", (m[0] + m[1]) * 10000);

	}
}
//a[0] == -1 ���ǹ��� ����� ��, i == 1 ������ �Ȱɾ��༭ Ʋ�Ⱦ���. 