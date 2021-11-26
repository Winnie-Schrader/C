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

void Post_Order(struct  node* root)
{
    if(root!=NULL)
    {
        Post_Order(root->left);
        Post_Order(root->right);
        printf("%d ", root->data);
    }
}
int main()
{   int r,n1,n2,n3,n4;
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
   printf("Post-order:\t");
    Post_Order(p);
    return 0;
}