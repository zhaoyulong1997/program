//��һ��3*3����Խ���Ԫ��֮��
#include <stdio.h>
int main(void)
{
	int a[3][3], sum = 0;
	int i , j ;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("�������[%d , %d]��Ԫ��:" , i ,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t" , a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
		sum=sum+a[i][i];
	printf("the sum is %d\n", sum);
	system("pause");
	return 0;
}