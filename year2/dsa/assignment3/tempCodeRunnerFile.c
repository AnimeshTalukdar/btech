#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node {
int data;
struct tree_node* left;
struct tree_node* right;
} Node;

Node* root = NULL;

Node * create_new_node(int value) {
Node* temp = (Node*)malloc(sizeof(Node));
temp -> data = value;
temp -> left = NULL;
temp -> right = NULL;
return temp;
}

Node* construct_tree(int preOrder[], int start, int end, int inOrder[], int *pIndex) {
if(start>end) return NULL;
Node* new_node = create_new_node(preOrder[(*pIndex)++]);
int i;
for(i = start; i<=end;i++) {
if(inOrder[i]== new_node->data) break;
}
new_node -> left = construct_tree(preOrder, start, i-1,inOrder,pIndex);
new_node -> right = construct_tree(preOrder, i+1, end,inOrder,pIndex);
return new_node;
}

Node* build_BST(int inOrder[], int preOrder[], int n) {
int pIndex =0;
return construct_tree(preOrder,0,n-1,inOrder,&pIndex);
}

void traverse_postorder(Node* root) {
if(root != NULL) {
traverse_postorder(root->left);
traverse_postorder(root->right);
printf("%d ",root-> data);
}
}
int COUNT = 10;
void printthetree( Node* root, int space)
{

if (root == NULL)
return;


space += COUNT;


printthetree(root->right, space);



printf("\n");
for (int i = COUNT; i < space; i++)
printf(" ");
printf("%d\n", root->data);


printthetree(root->left, space);
}
int main(){
int elements;
printf("Enter the number of elements in the tree.\n");
scanf("%d",&elements);
int preOrder[elements], inOrder[elements];
printf("Enter the pre-order-traversal.\n");
int i;
for(i=0;i<elements;i++) scanf("%d",&preOrder[i]);
printf("Enter the in-order-traversal.\n");
for(i=0;i<elements;i++) scanf("%d",&inOrder[i]);

root = build_BST(inOrder,preOrder,elements);

printf("Post-order-traversal.\n");
traverse_postorder(root);
printf("\n");
printthetree(root,0);
return 0;
}
