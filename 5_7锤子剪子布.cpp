////https://www.nowcoder.com/pat/6/problem/4044
//
////�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ�����3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣
//#include <iostream>
//using namespace std;
//int main(void){
//	int N;
//	cin >> N;
//	//ʯͷC  ����J  ��B
//	//�� 0ʤ��1ƽ��2����3CӮ�� 4JӮ��  5BӮ��
//	int jia[6]={0,0,0,0,0,0};
//	int yi[6]={0,0,0,0,0,0};
//	char JIA,YI;
//	for(int i=0;i<N;i++){
//		cin >> JIA >> YI;
//		if(JIA=='C'){
//			if(YI=='C'){
//				jia[1]++;
//				yi[1]++;
//			}
//			if(YI=='J'){
//				jia[0]++;
//				yi[2]++;
//				jia[3]++;
//
//			}
//			if(YI=='B'){
//				jia[2]++;
//				yi[0]++;
//				yi[5]++;
//			}
//			
//		}
//		if(JIA=='J'){
//			if(YI=='C'){
//				jia[2]++;
//				yi[0]++;
//				yi[3]++;
//			}
//			if(YI=='J'){
//				jia[1]++;
//				yi[1]++;
//			}
//			if(YI=='B'){
//				jia[0]++;
//				yi[2]++;
//				jia[4]++;
//			}
//			
//		}
//		if(JIA=='B'){
//			if(YI=='C'){
//				jia[0]++;
//				yi[2]++;
//				jia[5]++;
//			}
//			if(YI=='J'){
//				jia[2]++;
//				yi[0]++;
//			}
//			if(YI=='B'){
//				jia[1]++;
//				yi[1]++;
//				yi[5]++;
//			}
//			
//		}
//	}
//	for(int i=0;i<3;i++){
//		if(i!=0){
//			cout << " " << jia[i];
//		}else{
//			cout << jia[i];
//		}
//	}
//	cout << endl;
//	for(int i=0;i<3;i++){
//		if(i!=0){
//			cout << " " << yi[i];
//		}else{
//			cout << yi[i];
//		}
//	}
//	cout << endl;
//	int jia_max=0,yi_max=0;
//	for(int i=3;i<6;i++){
//		if(jia_max<jia[i]){
//			jia_max=jia[i];
//		}
//		if(yi_max<yi[i]){
//			yi_max=yi[i];
//		}
//	}
//	for(int i=3;i<6;i++){
//		bool flag=true;
//		if(jia[5]==jia_max && flag){
//			cout <<'B';flag=false;
//		}else if(jia[3]==jia_max && flag){
//			cout << 'C';flag=false;
//		}else if(jia[4]==jia_max && flag){
//			cout << 'J';flag=false;
//		}
//		if(yi[5]==yi_max){
//			cout << ' '<<'B';break;
//		}else if(yi[3]==yi_max){
//			cout << ' '<<'C';break;
//		}else if(yi[4]==yi_max){
//			cout << ' '<<'J';break;
//		}
//
//
//	}
//
//
//	return 0;
//}