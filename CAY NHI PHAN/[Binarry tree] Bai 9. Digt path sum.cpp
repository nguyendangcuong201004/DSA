#include<bits/stdc++.h>

using namespace std;

class BTNode {
    public: 
        int val; 
        BTNode *left; 
        BTNode *right; 
        BTNode() {
            this->left = this->right = NULL;
        } 
        BTNode(int val) {
            this->val = val;
            this->left = this->right = NULL;
        } 
        BTNode(int val, BTNode*& left, BTNode*& right) {
            this->val = val;
            this->left = left;
            this->right = right;
        } 
};

void make_root(BTNode* root, int v, char c){
    if (c == 'L'){
        root->left = new BTNode(v);
    }
    else root->right = new BTNode(v);
}

void insert_node(BTNode* root, int u, int v, char c){
    if (root == NULL) return;
    if (root->val == u){
        make_root(root, v, c);
    }
    else {
        insert_node(root->left, u, v, c);
        insert_node(root->right, u, v, c);
    }
}

int MOD = 27022001;

int helper(BTNode* root, int res){
    if (root == NULL){
        return 0;
    }
    res = (res * 10 + root->val) % MOD;

    if (root->left == NULL && root->right == NULL){
        return res;
    }

    int l = helper(root->left, res);
    int r = helper(root->right, res);
    return (l + r) % MOD;
}

int sumDigitPath(BTNode* root){
    return helper(root, 0);
}

int main(){
    BTNode* root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int u, v; char c; cin >> u >> v >> c;
        if (root == NULL){
            root = new BTNode(u);
            make_root(root, v, c);
        }
        else {
            insert_node(root, u, v, c);
        }
    }
    cout << sumDigitPath(root);
}
