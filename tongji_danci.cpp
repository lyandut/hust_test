#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> total_num(string str){
	int i = 0, count = 0;
	vector<int> res;
	while(str[i] != '.'){
		count++;
		if(str[i+1] == ' ' || str[i+1] == '.'){
			res.push_back(count);
			count = 0;
			i++;
		}
		if(str[i] == '.')
			i--;
		i++;
	}
	return res;
}

//int main(){
//	string input;
//	getline(cin, input);
//	vector<int> res;
//	res = total_num(input);
//	for(int i=0; i<res.size()-1; i++)
//		cout << res[i] << " ";
//	cout<<res[res.size()-1]<<endl;
//	return 0;
//}
