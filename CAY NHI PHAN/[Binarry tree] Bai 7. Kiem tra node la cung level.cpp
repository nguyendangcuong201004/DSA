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

set <int> se;

void check(node* root, int cnt){
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        se.insert(cnt);
    }
    check(root->left, cnt + 1);
    check(root->right, cnt + 1);
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
    check(root, 0);
    if (se.size() == 1) cout << "YES\n";
    else cout << "NO\n";
}
