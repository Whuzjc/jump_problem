#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
int jump_ans(int N){
	if(N==1||N==0) return 1;
	else return jump_ans(N-1)+jump_ans(N-2);
}
int main(void){
	int N,ans;
	cout << "input the number of steps:" <<endl;
	cin >> N;
	ans=jump_ans(N);
	cout << "the methods to reach order "<< N<< " are as follow:"<< ans  <<endl; 
    system("pause");
	return 0;
}