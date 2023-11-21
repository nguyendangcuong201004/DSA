#include<iostream>
#include<string>
using namespace std;

template<class K, class V>
class BinaryTree
{
public:
    class Node;
private:
    Node *root;

public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree()
    {
        // You have to delete all Nodes in BinaryTree. However in this task, you can ignore it.
    }

    class Node
    {
    private:
        K key;
        V value;
        Node *pLeft, *pRight;
        friend class BinaryTree<K, V>;

    public:
        Node(K key, V value) : key(key), value(value), pLeft(NULL), pRight(NULL) {}
        ~Node() {}
    };

    void addNode(string posFromRoot, K key, V value)
    {
        if(posFromRoot == "")
        {
            this->root = new Node(key, value);
            return;
        }

        Node* walker = this->root;
        int l = posFromRoot.length();
        for (int i = 0; i < l-1; i++)
        {
            if (!walker)
                return;
            if (posFromRoot[i] == 'L')
                walker = walker->pLeft;
            if (posFromRoot[i] == 'R')
                walker = walker->pRight;
        }
        if(posFromRoot[l-1] == 'L')
            walker->pLeft = new Node(key, value);
        if(posFromRoot[l-1] == 'R')
            walker->pRight = new Node(key, value);
    }
    //Helping functions

    int helper(Node* node){
        if (node == NULL){
            return 0;
        }
        if (node->pLeft == NULL && node->pRight == NULL){
            return node->value;
        }
        int l = helper(node->pLeft);
        int r = helper(node->pRight);
        return l + r;
    }
    
    int sumOfLeafs(){
        return helper(this->root);
    }

    int getHeightheper(Node* node){
        if (node == NULL){
            return 0;
        }
        return max (getHeightheper(node->pLeft), getHeightheper(node->pRight)) + 1;
    }

    int getHeight(){
        return getHeightheper(this->root);
    }

    void preOrderHelper(Node* node, string &res){
        if (node != NULL){
            res += to_string(node->value);
            res += " ";
            preOrderHelper(node->pLeft, res);        
            preOrderHelper(node->pRight, res);  
        }      
    }

    string preOrder(){
        string res = "";
        preOrderHelper(this->root, res);
        return res;
    }

    void preInderHelper(Node* node, string &res){
        if (node != NULL){
            preInderHelper(node->pLeft, res);    
            res += to_string(node->value);
            res += " ";
            preInderHelper(node->pRight, res);  
        }      
    }

    string inOrder(){
        string res = "";
        preInderHelper(this->root, res);
        return res;
    }

    void postOrderHelper(Node* node, string &res){
        if (node != NULL){
            postOrderHelper(node->pLeft, res);  
            postOrderHelper(node->pRight, res);   
            res += to_string(node->value);
            res += " "; 
        }      
    }

    string postOrder(){
        string res = "";
        postOrderHelper(this->root, res);
        return res;
    }
};

int main(){
     BinaryTree<int, int> binaryTree;
    binaryTree.addNode("", 2, 4); // Add to root
    binaryTree.addNode("L", 3, 6); // Add to root's left node
    binaryTree.addNode("R", 5, 9); // Add to root's right node

    cout << binaryTree.getHeight() << endl;
    cout << binaryTree.preOrder() << endl;
    cout << binaryTree.inOrder() << endl;
    cout << binaryTree.postOrder() << endl;
}
