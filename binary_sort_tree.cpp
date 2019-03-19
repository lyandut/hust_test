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

//void BuildTree(Node* &root ,int a){
//	if(root == NULL){
//		root = new Node;
//		root->lchild = NULL;
//		root->rchild = NULL;
//		root->val = a;
//	}
//	else if(root->val > a){
//		BuildTree(root->lchild, a);
//		cout<<root->val<<endl;
//	}
//	else if(root->val < a){
//		BuildTree(root->rchild, a);
//		cout<<root->val<<endl;
//	}
//}

//int main(){
//	int num;
//	int a;
//	while(cin >> num){
//		Node* root = new Node;
//		root->lchild = NULL;
//		root->rchild = NULL;
//		root->val = NULL;
//		//Node* root = NULL;
//		while(num--){
//			cin >> a;
//			BuildTree(root, a);
//		}
//	}
//	return 0;
//}
