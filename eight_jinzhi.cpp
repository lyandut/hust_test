/*
 * eight_jinzhi.cpp
 *
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> eightJinzhi(int a){
	vector<int> res;
	while(a>0){
		res.push_back(a%8);
		a/=8;
	}
	return res;
}

//int main(){
//	int a;
//	while(cin>>a){
//		vector<int> res;
//		res = eightJinzhi(a);
//		for(int i=res.size()-1; i>=0; i--)
//			cout<<res[i];
//		cout<<endl;
//	}
//	return 0;
//}




