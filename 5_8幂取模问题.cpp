////  a ^ b, mod c����  ������ȡģ�㷨
////https://blog.csdn.net/dbc_121/article/details/77646508
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int function(int a, int b,int c){
//	int sum=1;
//	a=a%c;
//	while(c>0){
//		b/=2;
//		a=(a*a)%c;
//		if(b%2==1){
//			sum=(sum*a)%c;
//		}
//	}
//	return sum;
//}
//
//
//long long Mode(long long a, long long b, long long c)  
//{  
//    long long sum = 1;  
//    a = a % c;  
//      
//    while (b > 0) {  
//        if (b % 2 == 1)     //�ж��Ƿ����������������Ļ���������������ȳ���sum  
//            sum = (sum * a) % c;  
//      
//        b /= 2;  
//        a = (a * a) % c;// ���ϵ������ϲ���ȡģ����Сa��b�Ĺ�ģ  
//    }  
//    return sum;  
//}  
//
//int function2(int a,int b,int c){
//	return int(pow(a,b))%c;
//}
//
//
//
//int main(void){
//	cout << function(2,9,11)<<endl;
//	cout << function2(2,9,11)<<endl;
//
//	return 0;
//}