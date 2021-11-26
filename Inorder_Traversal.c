#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* Create_Node(int data)
{
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node)); 
    n->data = data; 
    n->left = NULL; 
    n->right = NULL; 
    return n;
}
void In_Order(struct  node* root)
{
    if(root!=NULL)
    {
        In_Order(root->left);
        printf("%d ", root->data);
        In_Order(root->right);
    }
}
int main()
{    int r,n1,n2,n3,n4;
    printf("Enter 5 value of node:\n"); 
    scanf("%d%d%d%d%d",&r,&n1,&n2,&n3,&n4);
    struct node *p = Create_Node(r);
    struct node *p1 = Create_Node(n1);
    struct node *p2 = Create_Node(n2);
    struct node *p3 = Create_Node(n3);
    struct node *p4 = Create_Node(n4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Inroder:\t");
    In_Order(p);
    return 0;
}