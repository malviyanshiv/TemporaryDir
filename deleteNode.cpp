
/*
https://practice.geeksforgeeks.org/problems/delete-nodes-greater-than-k/1

*/

void inOrder(Node * root)
{
    if(root==NULL)
    return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node * BST(Node * root,int val)
{
    Node * node=NULL;
    node->data=val;
    node->left=NULL;
    node->right=NULL;
    if(root==NULL)
    return node;
    if(root->data>val)
    root->left=BST(root->left,val);
    else if(root->data<val)
    root->right=BST(root->right,val);
    return root;
}
void inorder(Node * root,vector<int > vect,int key)
{
    if(root==NULL)
    return ;
    inorder(root->left,vect,key);
    if(root->data<key)
    vect.push_back(root->data);
    inorder(root->right,vect,key);
}
Node* outerFun(Node * root ,int key)
{
    vector<int > vect;
    vector<int >:: iterator itr;
    inorder(root,vect,key);
    Node * node=NULL;
    for(itr=vect.begin();itr!=vect.end();itr++)
    node = BST(node ,*itr);
    return node;
}
