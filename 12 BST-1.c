#include <stdio.h>
#include <stdlib.h>
//Insertion and deletion in Binary Search Tree
struct Node
{
	struct Node* left;
	int data;
	struct Node* right;
};

struct Node* NewNode(int data)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->left = NULL;
	temp->data = data;
	temp->right = NULL;

	return temp;
}

void PostOrder(struct Node* root)
{
	if(root==NULL)
		return;

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ",root->data);
}




void InOrder(struct Node* root)
{
	if(root==NULL)
		return;

	InOrder(root->left);
	printf("%d ",root->data);
	InOrder(root->right);
}

void PreOrder(struct Node* root)
{
	if(root==NULL)
		return;

	printf("%d ",root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

struct Node* insert(struct Node* root,int data)
{
	if(root==NULL)
		root =  NewNode(data);

	else if(data <= root->data)
		root->left = insert(root->left,data);
	
	else root->right = insert(root->right,data);

	return root;

}

void traverse(struct Node* root)
{
	printf("\n\nPreOrder traversal : "); PreOrder(root);
	printf("\nInorder traversal  :   "); InOrder(root);
	printf("\nPostOrder traversal:   "); PostOrder(root);
	//printf("\n Level Order Traversal: ");LevelOrder(root);
}

int main()
{
	struct Node* root = NULL;

	root = insert(root,12);
	root = insert(root,5);
	root = insert(root,8);
	root = insert(root,1);
	root = insert(root,9);
	root = insert(root,7);

	traverse(root);

//	Delete(root,8);

	//traverse(root);

	return 0;
}