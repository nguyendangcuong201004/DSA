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

void make_Root(node* root, int v, char c){
    if (c == 'L'){
        root->left = new node(v);
    }
    else root->right = new node(v);
}


void insert_Node(node* root, int u, int v, char c){
    if (root == NULL) return;
    if (root->data == u){
        make_Root(root, v, c);
    }
    else {
        insert_Node(root->left, u, v, c);
        insert_Node(root->right, u, v, c);
    }
}

void level_order(node* root){
    queue<node*> q;
    q.push(root);
    while (!q.empty()){
        node* tmp = q.front();
        q.pop();
        node* trai = tmp->left;
        node* phai = tmp->right;
        cout << tmp->data << ' ';
        if (trai != NULL){
            q.push(trai);
        }
        if (phai != NULL){
            q.push(phai);
        }
    }
}

int main(){
    node* root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int u, v; char c; cin >> u >> v >> c;
        if (root == NULL){
            root = new node(u);
            make_Root(root, v, c);
        }
        else {
            insert_Node(root, u, v, c);
        }
    }
    level_order(root);
}
