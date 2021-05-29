#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
struct tree{
    Node* root=NULL;
    Node* insert(Node* root, int data){
        if(root==NULL){
            root = new Node;
            root->data = data;
            root->left=NULL;
            root->right=NULL;
        }
        else{
            if(data<=root->data){
                root->left= insert(root->left,data);
            }
            else{
                root->right=insert(root->right, data);
            }
        }
        return root;
    }
    void levelOrderTraversal(Node* root){
        if(root==NULL){
            return;
        }
        queue<Node*> que;
        que.push(root);
        //while there is at least one discovered node
	while(!que.empty()) {
		Node* current = que.front();
		que.pop(); // removing the element at front
		cout<<current->data<<" ";
		if(current->left != NULL) que.push(current->left);
		if(current->right != NULL) que.push(current->right);
        }
    }
};
int main() {
	/*Code To Test the logic
	  Creating an example tree
	            1
			   / \
			  2   3
			 / \   \
			4   5   6
    */
	Node* root= NULL;
    tree tree;
    root= tree.insert(root,1);
    root=tree.insert(root,2);
    root=tree.insert(root,3);
    root=tree.insert(root,4);
    root=tree.insert(root,5);
    root=tree.insert(root,6);

    //Print Nodes in Level Order. 
	tree.levelOrderTraversal(root);

    return 0;
}