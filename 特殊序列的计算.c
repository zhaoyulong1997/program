/* ��Ŀ����һ�������У� 2/1��3/2��5/3��8/5��13/8��21/13...
���������е�ǰ20��֮�͡� */
#include <Stdio.h>
int main()
{
	int fengzi=2, fengmu=1, i=0, t;
	float sum=0;
	while (i<20)
	{
		sum=fengzi/fengmu+sum;
		t=fengzi;
		fengzi=fengmu+fengzi;
		fengmu=t;
		printf("%d/%d\t", fengzi,fengmu);
		i++;
	}
	printf("the sum is %f", sum);
	system("pause");
	return 0;
}