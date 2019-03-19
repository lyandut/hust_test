/*
 * binarytree_bianli_build.cpp
 *
 *  Created on: 2018年7月22日
 *      Author: liyan
 */
 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;

struct Node{
    char val;
    Node* lchild;
    Node* rchild;
};

void rebuildTree(Node* &root, char* pre, char* in, int len){
    if(len<=0)
        return;
    root = new Node;
    root->lchild = NULL;
    root->rchild = NULL;
    root->val = *pre;
    int index = 0;
    while(index<len && *pre!=*(in+index))
        index++;
    rebuildTree(root->lchild, pre+1, in, index);
    rebuildTree(root->rchild, pre+index+1, in+index+1, len-index-1);
}

void postTravese(Node* root){
    if(root==NULL)
        return;
    postTravese(root->lchild);
    postTravese(root->rchild);
    cout<<root->val;
}


//int main(){
//    char pre[26];
//    char in[26];
//    while(scanf("%s", pre)!=EOF){
//        scanf("%s", in);
//        Node* root;
//        int length = strlen(pre);
//        rebuildTree(root, pre, in, length);
//        postTravese(root);
//        cout<<endl;
//    }
//    return 0;
//}
