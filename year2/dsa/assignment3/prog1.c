#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} node;
node *create(int val)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
node *createTree()
{
    int choice;
    node *temp;
    int data;
    temp = (node *)malloc(sizeof(node));
    printf("0: Add NULL\n1: Add Value\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        temp = NULL;
        return temp;
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        temp->data = data;
        printf("\nEnter the left child of %d\n", data);
        temp->left = createTree();
        printf("\nEnter the right child of %d\n", data);
        temp->right = createTree();
        return temp;
    }
}
void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        printf("d> ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    int c;
    node *root;
    printf("Create a Binary Tree:\n");
    root = createTree();
    while (1)
    {
        printf("\n1: Inorder Traversal\n2: Preorder Traversal\n3: Postorder Traversal\n4: Exit\nEnter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            inOrder(root);
            break;
        case 2:
            preOrder(root);
            break;
        case 3:
            postOrder(root);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("WRONG CHOICE!!\n");
            break;
        }
    }
}

