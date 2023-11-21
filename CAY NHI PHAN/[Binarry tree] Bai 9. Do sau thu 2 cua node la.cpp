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

void helper(BTNode* root, int depth, int &s1, int &s2){
    if (root == NULL){
        return;
    }
    if (root->left == NULL && root->right == NULL){
        if (depth > s1){
            s2 = s1;
            s1 = depth;
        }
        else if (depth > s2 && depth < s1){
            s2 = depth;
        }
        return;
    }
    helper(root->left, depth + 1, s1, s2);
    helper(root->right, depth + 1, s1, s2);
}

int secondDeepest(BTNode* root) {
    int s1 = -1;
    int s2 = - 1;
    helper(root, 0, s1, s2);
    return s2;
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
    cout << secondDeepest(root) << endl;
}
