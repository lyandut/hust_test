#include <iostream>
using namespace std;

string pre;
string in;
char post[26];

void Post(int prelow,int prehigh,int inlow,int inhigh,int postlow,int posthigh){
	if(postlow > posthigh)
		return;
	post[posthigh] = pre[prelow];
	int len=0;
	for(int i=inlow; i<=inhigh; i++){
		if(in[i] == pre[prelow]){
			len = i-inlow;
			break;
		}
	}
	Post(prelow+1, prelow+len, inlow, inlow+len-1, postlow, postlow+len-1);
	Post(prelow+len+1, prehigh, inlow+len+1, inhigh, postlow+len, posthigh-1);
}

int main(){
	while(cin >> pre >> in){
		int size = pre.size()-1;
		Post(0, size, 0, size, 0, size);
		cout<<post<<endl;
	}
	return 0;
}
