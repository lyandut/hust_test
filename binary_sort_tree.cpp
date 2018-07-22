#include <iostream>
//#include <cstdio>
using namespace std;

struct Node{
	Node* lchild;
	Node* rchild;
	int val;
};

void BuildTree(Node* root, int a){
	if(root->val==NULL){
		root->val = a;
		cout<<-1<<endl;
	}
	else if(a > root->val){
		if(root->rchild == NULL){
			root->rchild = new Node;
			root->rchild->val = a;
			cout << root->val<<endl;
		}
		else
			BuildTree(root->rchild, a);
	}
	else if(a < root->val){
		if(root->lchild == NULL){
			root->lchild = new Node;
			root->lchild->val = a;
			cout << root->val<<endl;
		}
		else
			BuildTree(root->lchild, a);
	}
}


//int main(){
//	int num;
//	int a;
//	while(cin >> num){
//		Node* root = new Node;
//		root->lchild = NULL;
//		root->rchild = NULL;
//		root->val = NULL;
//		while(num--){
//			cin >> a;
//			BuildTree(root, a);
//		}
//	}
//	return 0;
//}
