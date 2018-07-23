#include <iostream>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    int val;
};

void buildTree(Node* &root, int a){
    if(root==NULL){
        root = new Node;
        root->left = NULL;
        root->right = NULL;
        root->val = a;
    }
    else if(root->val > a){
        buildTree(root->left, a);
    }
    else if(root->val < a){
        buildTree(root->right, a);
    }
}

void preOrder(Node* root){
    if(!root)
        return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(!root)
        return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(!root)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}

//int main(){
//    int n;
//    while(cin >> n){
//        int num;
//        Node* root = nullptr;
//        for(int i=0; i<n; i++){
//            cin >> num;
//            buildTree(root, num);
//        }
//        preOrder(root);cout<<endl;
//        inOrder(root);cout<<endl;
//        postOrder(root);cout<<endl;
//    }
//    return 0;
//}
