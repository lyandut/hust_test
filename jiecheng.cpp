/*
 * jiecheng.cpp
 *
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
#include <iostream>
using namespace std;

int jiecheng(int a){
	int res = 1;
	for(int i=a; i>0; i--)
		res *= i;
	return res;
}

void sum(int a){
	int sum1=0, sum2=0;
	for(int i=1; i<=a; i+=2){
		sum1 += jiecheng(i);
	}
	cout<<sum1<<" ";
	for(int j=2; j<=a; j+=2){
		sum2 += jiecheng(j);
	}
	cout<<sum2<<endl;
}

//int main(){
//	int a;
//	while(cin >> a)
//		sum(a);
//	return 0;
//}



