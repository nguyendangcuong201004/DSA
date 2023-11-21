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

void make_root(node* root, int v, char c){
    if (c == 'L'){
        root->left = new node(v);
    }
    else root->right = new node(v);
}

void insert_node(node* root, int u, int v, char c){
    if (root == NULL) return;
    if (root->data == u){
        make_root(root, v, c);
    }
    else {
        insert_node(root->left, u, v, c);
        insert_node(root->right, u, v, c);
    }
}

int height(node* root){
    if (root == NULL) return -1;
    return max (height(root->left) + 1, height(root->right) + 1);
}

int main(){
    node* root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; ++i){    
        int u, v; char c; cin >> u >> v >> c;
        if (root == NULL){
            root = new node(u);
            make_root(root, v, c);
        }
        else {
            insert_node(root, u, v , c);
        }
    }
    cout << height(root) << endl;
}
