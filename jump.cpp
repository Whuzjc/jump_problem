#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
int jump_ans(int N){
	vector<int> dp;
	for(int i=0;i<=N;i++){
		if(i==1||i==0) dp.push_back(1);
		else dp.push_back(dp[i-1]+dp[i-2]);  
	}
	return dp[dp.size()-1];
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