#include<stdio.h>
#include<stdlib.h>

typedef struct binary_tree_node {
int data;
struct binary_tree_node* left;
struct binary_tree_node* right;
} Node;

Node* root = NULL;

Node* find(int data)
{
Node* current = root;
while(data != current -> data){
if(current != NULL)
{
if(current -> data > data)
current = current -> left;
else
current = current -> right; 
}
if(current == NULL)
return NULL;
}
return current;
}

void insert_node(int data)
{
Node* new_node = (Node*)malloc(sizeof(Node));
Node* current;
Node* parent;
new_node -> data = data;
new_node -> left = NULL;
new_node -> right = NULL;
if(root == NULL)
{
root = new_node;
}
else
{
current = root;
parent = NULL;
while(1)
{
parent = current;
if(data < parent -> data)
{
current = current -> left;
if(current == NULL)
{
parent->left = new_node;
return;
}
}
else{
current = current -> right;
if(current == NULL)
{
parent -> right = new_node;
return;
} 
}

}
}
}

void pre_order_traverse(Node* root)
{
if(root != NULL)
{
printf("%d ",root-> data);
pre_order_traverse(root->left);
pre_order_traverse(root->right);
}
}

void in_order_traverse(Node* root)
{
if(root != NULL)
{
in_order_traverse(root->left);
printf("%d ",root-> data);
in_order_traverse(root->right);
}
}

void post_order_traverse(Node* root)
{
if(root != NULL)
{
post_order_traverse(root->left);
post_order_traverse(root->right);
printf("%d ",root-> data);
}
}

int main(){
printf("Enter the number of elements in the binary tree.\n");
int n,s;
scanf("%d",&n);
printf("Enter the elements.\n");
while(n--){
scanf("%d",&s);
insert_node(s);
}
int choice;
while(1)
{
printf("1. Perform pre-order-traversal.\n");
printf("2. Perform in-order-traversal.\n");
printf("3. Perform post-order-traversal\n");
printf("4. Quit.\n\n");
printf("Enter your choice.\n");
scanf("%d",&choice);

switch (choice)
{

case 1:
printf("pre-order-traversal : \n");
pre_order_traverse(root);
printf("\n");
break;
case 2:
printf("in-order-traversal : \n");
in_order_traverse(root);
printf("\n");
break;
case 3:
printf("post-order-traversal : \n");
post_order_traverse(root);
printf("\n");
break;
case 4:
printf("Exitting");
exit(0);
default:
break;
}
}

return 0;
}

