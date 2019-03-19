/*
 * a+b.cpp
 *
 *  Created on: 2018年7月16日
 *      Author: liyan
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> add(string a, string b){
	int alength = a.size()-1;
	int blength = b.size()-1;
	vector<int> res;
	int c = 0;
	while(alength>=0 && blength>=0){
		int temp = a[alength]-'0' + b[blength]-'0' + c;
		if(temp >= 10){
			res.push_back(temp % 10);
			c = 1;
		}
		else{
			res.push_back(temp);
			c = 0;
		}
		alength--;
		blength--;
	}
	while(alength>=0){
		int temp = a[alength]-'0' + c;
		if(temp >= 10){
			res.push_back(temp % 10);
			c = 1;
		}
		else{
			res.push_back(temp);
			c = 0;
		}
		alength--;
	}
	while(blength>=0){
		int temp = b[blength]-'0' + c;
		if(temp >= 10){
			res.push_back(temp % 10);
			c = 1;
		}
		else{
			res.push_back(temp);
			c = 0;
		}
		blength--;
	}
	if(c==1)
		res.push_back(1);
	return res;
}

//int main(){
//	string a, b;
//	while(cin >> a >> b){
//
//		vector<int> res;
//		res = add(a, b);
//		for(int i=res.size()-1; i>=0; i--){
//			cout<<res[i];
//		}
//		cout<<endl;
//	}
//	return 0;
//}



