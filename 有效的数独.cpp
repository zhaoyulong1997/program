////https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/30/
////��Ч������
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//bool isValidSudoku(vector<vector<char>>& board) {
//	
//	int colN = (sizeof(board)/sizeof(char))/(sizeof(board[0])/sizeof(char));
//	int rowN = (sizeof(board[0])/sizeof(char));
//	//�ж�ÿһ����
//	for(int i=0;i<colN;i++){
//		bool same[10]={false};
//		for(vector<char>::iterator it=board[i].begin();it!=board[i].end();it++){
//			if(*it!='.'){
//				if(same[*it]==false){
//					same[*it]=true;
//				}else{
//					return false;
//				}
//			}
//		}
//	}
//	//�ж�ÿһ����
//	for(int x=0;x<rowN;x++){
//		bool same[10]={false};
//		for(int y=0;y<colN;y++){
//			if(board[x][y]!='.'){
//				if(same[board[x][y]]==false){
//					same[board[x][y]]=true;
//				}else{
//					return false;
//				}
//			}
//		}
//	}
//	//�ж�ÿһ�Ź���
//	for(int y=0;y<rowN;y+=3){
//		for(int x=0;x<colN;x+=3){
//
//
//		}
//
//	}
//
//
//
//}
//
//
//int main(void){
//
//
//
//	return 0;
//}