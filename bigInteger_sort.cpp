/*
 * bigInteger_sort.cpp
 *
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
#include <iostream>
#include <string>
using namespace std;

void swap(string &a, string &b){
	string temp = a;
	a = b;
	b = temp;
}

void Sort(string *strs, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strs[i].size() > strs[j].size()){
				swap(strs[i], strs[j]);
			}
			if(strs[i].size() == strs[j].size()){
				if(strs[i] > strs[j])
					swap(strs[i], strs[j]);
			}
		}
	}
}

//int main(){
//	int n;
//	while(cin >> n){
//		string strs[100];
//		for(int i=0; i<n; i++){
//			cin >> strs[i];
//		}
//		Sort(strs, n);
//		for(int j=0; j<n; j++)
//			cout<<strs[j]<<endl;
//	}
//	return 0;
//}

