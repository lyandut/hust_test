/*
 * IPAddress.cpp
 *
 *  Created on: 2018年7月16日
 *      Author: liyan
 */
#include <iostream>
using namespace std;

bool isIP(int ip){
	if(ip<=255 && ip>=0)
		return true;
	else
		return false;
}

//int main(){
//	int a, b, c, d;
//	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
//	if(isIP(a)&&isIP(b)&&isIP(c)&&isIP(d))
//		cout<<"Yes!"<<endl;
//	else
//		cout<<"No!"<<endl;
//	return 0;
//}



