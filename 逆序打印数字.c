//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ����
#include <stdio.h>
int main()
{
	int num , ge, shi, bai, qian, wan;
	printf("please input a number!\n");
	scanf("%d", &num);
	wan = num/10000;
	qian = num%10000/1000;
	bai = num % 1000/100;
	shi = num % 100/10;
	ge = num % 10;
	if (wan!=0)
	{
		printf("����һ����λ�����������ӡ������Ϊ%d%d%d%d%d\n",ge, shi, bai, qian, wan);
	}else if(qian!=0)
	{
		printf("����һ����λ�����������ӡ������Ϊ%d%d%d%d\n",ge, shi, bai, qian);
	}else if(bai!=0)
	{
		printf("����һ����λ�����������ӡ������Ϊ%d%d%d\n",ge, shi, bai);
	}else if(shi!=0)
	{
		printf("����һ����λ�����������ӡ������Ϊ%d%d\n",ge, shi);
	}else if(ge!= 0)
	{
		printf("����һ��һλ�����������ӡ������Ϊ%d\n",ge);
	}else{
		printf("the number that you input is error! please input another number!\a\n");
		
	}
	system("pause");
	return 0;
	
}