/*
 * juzhen_nizhi.cpp
 *
 *  Created on: 2018年7月16日
 *      Author: liyan
 */
#include <iostream>
using namespace std;


int* juzhenNizhi(int num, int* arr){
	int nizhiarr[101*101];
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			nizhiarr[j*num+i] = arr[i*num+j];
		}
	}
	return nizhiarr;
}


//int main(){
//	int num;
//	cin >> num;
//	int arr[101*101];
//	for(int i=0; i<num*num; i++)
//		cin >> arr[i];
//	int* result = juzhenNizhi(num, arr);
//	for(int j=0; j<num; j++){
//		for(int k=0; k<num; k++)
//			cout << result[j*num+k] << ' ';
//		cout << endl;
//	}
//	return 0;
//}

