#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void make_Root (node* root, int u, int v, char c) {
    if (c == 'L'){
        root->left = new node(v);
    }
    else root->right = new node(v);
}

void insert_Root (node* root, int u, int v, char c){
    if (root == NULL) return;
    if (root->data == u){
        make_Root(root, u, v, c);
    }
    else {
        insert_Root(root->left, u, v, c);
        insert_Root(root->right, u, v, c);
    }
}

void inorder(node* root) {
    if (root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

int main(){
    node* root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int u, v; char c; cin >> u >> v >> c;
        if (root == NULL){
            root = new node (u);
            make_Root(root, u, v, c);
        }
        else {
            insert_Root(root, u, v, c);
        }
    }
    inorder(root);
}
