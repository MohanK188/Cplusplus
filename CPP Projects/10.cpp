#include<iostream>
using namespace std;
class Tree
{
        public:
                int data;
                Tree *left,*right;
                Tree()
                {
                        this->left=NULL;
                        this->right=NULL;
                }
                Tree(int d)
                {
                        this->data=d;
                        this->left=NULL;
                        this->right=NULL;
                }
                Tree* insert(Tree *root,int x)
                {
                        if(root==NULL)
                                return new Tree(x);
                        else if(x < root->data)
                                root->left=insert(root->left,x);
                        else
                                root->right=insert(root->right,x);
                        return root;

                }
                void  inorder(Tree* root)
                {
                        if(root==NULL)
                                return;
                        inorder(root->left);
                        cout<<root->data<<" ";
                        inorder(root->right);
                }
                void preorder(Tree* root)
                {
                        if(root==NULL)
                                return;
                        cout<<root->data<<" ";
                        preorder(root->left);
                        preorder(root->right);
                }
                void postorder(Tree* root)
                {
                        if(root==NULL)
                                return;
                         postorder(root->left);
                        postorder(root->right);
                        cout<<root->data<<" ";
                }
                int search(Tree* root,int key)
                {
                        if(root==NULL)
                                return 0;
                        else if(root->data==key)
                                return root->data;
                        else if(key < root->data)
                                return (search(root->left,key));
                        else if(key > root->data)
                                return (search(root->right,key));
                        else{
                                cout<<"Data Not Found"<<endl;
                                return 1;}


                }
                Tree* deleteNode(Tree* root,int key)
                {
                    if(root==NULL)
                        return root;
                    else if(key < root->data)
                    {
                        root->left=deleteNode(root->left,key);
                        return root;
                    }
                    else if(key > root->data)
                    {
                        root->right=deleteNode(root->right,key);
                        return root;
                    }
                    if(root->left==NULL)
                    {
                        Tree* temp=root->right;
                        delete root;
                        return temp;
                    }
                    else if(root->right==NULL)
                    {
                        Tree* temp=root->left;
                        delete root;
                        return temp;
                    }
                    else{
                        Tree *sup=root;
                        Tree* su=root->right;
                        while (su->left!=NULL)
                        {
                            sup=su;
                            su=su->left;
                        }
                        if(sup!=root)
                        {
                            sup->left=sup->right;
                        }
                        else
                        {
                            sup->right=sup->left;
                        }
                        root->data=su->data;
                        delete su;
                        return root;
                        
                        
                    }


                }
};
int main()
{
        Tree t,*r=NULL,*p;
        int a;
        r=t.insert(r,27);
        t.insert(r,17);
        t.insert(r,3);
        t.insert(r,16);
        t.insert(r,13);
        t.insert(r,10);
        t.insert(r,1);
        t.insert(r,5);
        t.insert(r,7);
        t.insert(r,12);
        t.insert(r,4);
        t.insert(r,8);
        cout<<"Inorder of Tree:"<<endl;
        t.inorder(r);
        cout<<"\nPostorder of Tree:"<<endl;
        t.postorder(r);
        cout<<"\nPreOrder of Tree:"<<endl;
        t.preorder(r);
        p=t.deleteNode(r,10);
        cout<<endl;
        t.inorder(r);

        return 0;
}                                                                                      