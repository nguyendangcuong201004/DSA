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

int demnode(node* root){
    int dem = 0 ;
    queue <node*> q;
    if (root == NULL) return 0;
    q.push(root);
    while (!q.empty()){
        node* tmp = q.front(); q.pop();
        if (tmp->left == NULL && tmp->right == NULL){
            dem++;
        }
        if (tmp->left != NULL){
            q.push(tmp->left);
        }
        if (tmp->right != NULL){
            q.push(tmp->right);
        }
    }
    return dem;
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
    cout << demnode(root) << endl;
}
