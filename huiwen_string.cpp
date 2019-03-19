/*
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
#include <iostream>
#include <string>
using namespace std;

bool isHuiwen(string str){
	int n = str.size();
	for(int i=0 ;i<n/2; i++){
		if(str[i] != str[n-1-i])
			return false;
	}
	return true;
}

//int main(){
//	string str;
//	while(cin >> str){
//		if(isHuiwen(str))
//			cout<<"Yes!"<<endl;
//		else
//			cout<<"No!"<<endl;
//	}
//	return 0;
//}


