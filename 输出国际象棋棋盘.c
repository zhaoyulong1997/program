/* Ҫ����������������̡�
1.�����������i�����У�j�������У�����i+j�ĺ͵ı仯
����������ڷ��񣬻��ǰ׷��� */
#include <stdio.h>
int main()
{
	int i=0, j=0;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if ((i+j)%2==0)
			{
				printf("  ");
			}
			else{
				printf("��");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
	
}