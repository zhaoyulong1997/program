////https://www.nowcoder.com/profile/3484144/codeBookDetail?submissionId=12762416
//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//using namespace std;
//
//struct yuebing{
//	int repertory;//���
//	int sellprice;//�ۼ�
//	float unitprice;//����
//};
//
//int cmp(const void* a, const void* b){
//	return ((struct yuebing *)a)->unitprice>((struct yuebing *)b)->unitprice?-1:1;
//}
//
//int main(void){
	//struct yuebing yb[1000];
	//int N,D; //NΪ���࣬DΪ����
	//cin >> N >> D;
	//for(int i=0;i<N;i++){
	//	cin >> yb[i].repertory;
	//}
//	for(int i=0;i<N;i++){
//		cin >> yb[i].sellprice;
//	}
//	for(int i=0;i<N;i++){
//		yb[i].unitprice=(float)yb[i].sellprice/(float)yb[i].repertory;
//	}
//
//	qsort(yb,N,sizeof(yb[0]),cmp);
//	int kinds=0;
//	int sum=0;
//	for(sum=0,kinds=0;sum<=D;kinds++){
//		sum+=yb[kinds].repertory;
//		if(sum+yb[kinds+1].repertory>D)break;
//	}
//	kinds++;
//	float money=0;
//	for(int j=0;j<kinds;j++){
//		money+=yb[j].sellprice;
//	}
//	money+=(D-sum)*yb[kinds].unitprice;
//	cout <<setiosflags(ios::fixed)<<setprecision(2)<< money << endl;
//	return 0;
//}