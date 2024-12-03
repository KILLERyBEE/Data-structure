#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left,*right;
};

struct node *createn(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void bst(struct node **root,int data)
{
    struct node *newn = createn(data);
    struct node *temp = *root;
    if(temp == NULL)
    {
        *root=newn;
    }
    else
    {
        if(newn->data<=(*root)->data)
        {
            while(temp->left!=NULL)
            {
                temp=temp->left;
            }
            temp->left=newn;
        }
        else if(newn->data>=(*root)->data)
        {
            while(temp->right!=NULL)
            {
                temp=temp->right;
            }
            temp->right=newn;
        }
    }
}

void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}

int main()
{
    struct node *root=NULL;
    bst(&root,2);
    bst(&root,7);
    bst(&root,0);
    bst(&root,1);
    bst(&root,4);
    bst(&root,-1);
    inorder(root);
    return 0;
}