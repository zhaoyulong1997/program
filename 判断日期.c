/* ��ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������
Ȼ���ټ���5�켴����ĵڼ��죬����
����� �����������·ݴ���3ʱ�迼�Ƕ��һ�� */
#include <stdio.h>
int main()
{
	int year, month, day, sum, runnian;
	printf("���������\n");
	scanf("%d",&year);
	printf("�������·�\n");
	scanf("%d",&month);
	printf("����������\n",&day);
	scanf("%d",&day);
	runnian=year/4;
	switch(month)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=60;break;
		case 4:sum=91;break;
		case 5:sum=121;break;
		case 6:sum=152;break;
		case 7:sum=182;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
		default:printf("your input is error!\n");break;	
	}
	if (runnian*4==year)
	{
		sum=sum+day;
		if(month>3)
		{
			sum++;
		}
		printf("%d",sum);
	}else
	{
		sum=sum+day;
		printf("%d",sum);
	}
	getch();
	return 0;
	
}