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
    insert_node(root->left, u, v, c);
    insert_node(root->right, u, v, c);
}

bool search(node* root ,int key){
    if (root != NULL){
        return false;
    }
    if (root->data == key) return true;
    if (root->data > key){
        return search(root->left, key);
    }
    return search(root->right, key);
}

node* insert(node* root, int key){
    if (root == NULL){
        root = new node(key);
    }
    if (root->data > key){
        root->left = insert(root->left, key);
    }
    else if (root->data < key){
        root->right = insert(root->right, key);
    }
    return root;
}

void inOrder(node* root){
    if (root != NULL){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main(){
    int n; cin >> n;
    node* root = NULL;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    for (int x : a){
        root = insert(root, x);
    }
    inOrder(root);
}
