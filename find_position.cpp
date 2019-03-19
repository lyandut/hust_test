#include <iostream>
#include <string>
#include <vector>
using namespace std;

void findPosition(string str){
	int n = str.size();
	int index[100] = {0};
	for(int i=0; i<n-1; i++){
		if(index[i]!=1){
			vector<int> vec;
			vec.push_back(i);
			index[i] = 1;
			for(int j=i+1; j<n; j++){
				if(str[i]==str[j]){
					vec.push_back(j);
					index[j] = 1;
				}
			}
			if(vec.size()>1){
				for(int k=0; k<vec.size()-1; k++)
					cout<<str[i]<<":"<<vec[k]<<",";
				cout<<str[i]<<":"<<vec[vec.size()-1]<<endl;
			}
		}
	}
}


int main(){
	string str;
	while(cin >> str)
	//while(getline(cin, str))
		findPosition(str);
	return 0;
}
