/* Ŀ��������������x,y,z���������������С���������
1.���������������취����С�����ŵ�x�ϣ��Ƚ�x��y��
�бȽϣ����x��y��x��y��ֵ���н�����
Ȼ������x��z���бȽϣ� ���x��z��x��z
��ֵ���н�����������ʹx��С�� */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1,num2,num3,i;
	printf("please input three number!\n");
	scanf("%d , %d ,%d",&num1,&num2,&num3);
	if (num1>num2)
	{
		i=num1 ;
		num1=num2;
		num2=i;
		
	}
	if (num2>num3)
	{
		i=num2;
		num2=num3;
		num3=i;
	}
	if (num1>num3);
	{
		i=num1;
		num1=num3;
		num3=i;
	}

	printf("%d<%d<%d", num1, num2, num3);
	getch();
	return 0;
}