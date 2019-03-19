#include <iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
};

void insertNode(Node* &head, int num){
	Node* toinsert = new Node;
	toinsert->next = NULL;
	toinsert->val = num;
	if(head==NULL){
		head = toinsert;
	}
	else{
		Node* p = head;
		while(p->next){
			if(p->next->val > num)
				break;
			p = p->next;
		}
		toinsert->next = p->next;
		p->next = toinsert;
	}
}

void searchList(Node* list){
	Node* p = list;
	while(p){
		cout<<p->val<<" ";
		p = p->next;
	}
	cout<<endl;
}

//int main(){
//	int n;
//	while(cin >> n){
//		int num;
//		Node* head = NULL;
//		insertNode(head, 0);
//		for(int i=0; i<n; i++){
//			cin >> num;
//			insertNode(head, num);
//		}
//		searchList(head->next);
//	}
//	return 0;
//}

