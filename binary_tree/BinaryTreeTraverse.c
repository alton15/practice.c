#include <stdio.h>
#include <stdlib.h>

typedef struct _bTreeNode {
	int data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

void Inorder(BTreeNode * bt) {
	printf("중위 순회: ");
	InorderTraverse(bt);
	printf("\n"); 
}

void Preorder(BTreeNode * bt) {
	printf("전위 순회: ");
	PreorderTraverse(bt);
	printf("\n"); 
}

void Postorder(BTreeNode * bt) {
	printf("후위 순회: ");
	PostorderTraverse(bt);
	printf("\n"); 
}

void InorderTraverse(BTreeNode * bt) {
	if(bt == NULL) {
		return;
	}
	InorderTraverse(bt -> left);
	printf("%d ", bt -> data);
	InorderTraverse(bt -> right);
}

void PreorderTraverse(BTreeNode * bt) {
	if(bt == NULL) {
		return;
	}
	printf("%d ", bt -> data);
	PreorderTraverse(bt -> left);
	PreorderTraverse(bt -> right);
}

void PostorderTraverse(BTreeNode * bt) {
	if(bt == NULL) {
		return;
	}
	PostorderTraverse(bt -> left);
	PostorderTraverse(bt -> right);
	printf("%d ", bt -> data);
}

BTreeNode * MakeBTreeNode(void) {
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

int GetData(BTreeNode * bt) {
	return bt->data;
}

int SetData(BTreeNode * bt, int data) {
	bt->data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt) {
	return bt->left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt) {
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub) {
	if(main->left != NULL) {
		free(main->left);
	}
	main->left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub) {
	if(main->right != NULL) {
		free(main->right);
	}
	main->right = sub;
}

int main(void) {
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();
	BTreeNode * bt5 = MakeBTreeNode();
	BTreeNode * bt6 = MakeBTreeNode();
	BTreeNode * bt7 = MakeBTreeNode();
	
	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);
	SetData(bt7, 7);
	
	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	MakeRightSubTree(bt2, bt5);
	MakeLeftSubTree(bt3, bt6);
	MakeRightSubTree(bt3, bt7);
	
	Inorder(bt1);
	Preorder(bt1);
	Postorder(bt1); 
}
