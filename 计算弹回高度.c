/* һ���100�׸߶��������£�ÿ����غ�����ԭ�߶�
��һ�룻�����£�������
��10�����ʱ�������������ף���10�η������ */
#include <stdio.h>
int main(void)
{
	float high=100.0, sum=0;
	int i=1;
	for (i=1; i<11;i++)
	{
		sum=sum+high;
		high = high / 2;
		sum=sum+high;
		printf("%f\t%f", high, sum);
	}
	printf("high=%f, sum=%f", high, sum);
	system("pause");
	return 0;
}