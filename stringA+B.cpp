/*
 * stringA+B.cpp
 *
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
#include <iostream>
using namespace std;

int stringToInt(string str){
	int len = str.size();
	int res = 0;
	for(int i=0; i<len; i++){
		if(str[i]=='-' || str[i]==',')
			continue;
		res = res*10 + (str[i]-'0');
	}
	if(str[0]=='-')
		return -res;
	return res;
}

//int main(){
//	string a,b;
//	while(cin>>a>>b){
//		int ia = stringToInt(a);
//		int ib = stringToInt(b);
//		cout<<ia+ib<<endl;
//	}
//	return 0;
//}



