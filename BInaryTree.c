#include <stdio.h>
#include <stdlib.h>

typedef struct _bTreeNode {
	int data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

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
	
	printf("哭率: %d %d %d\n", GetData(GetLeftSubTree(bt1)), GetData(GetLeftSubTree(GetLeftSubTree(bt1))), GetData(GetLeftSubTree(GetRightSubTree(bt1))));
	printf("坷弗率: %d %d %d\n", GetData(GetRightSubTree(bt1)), GetData(GetRightSubTree(GetLeftSubTree(bt1))), GetData(GetRightSubTree(GetRightSubTree(bt1))));
	
	printf("哭率 林家: %p %p %p\n", GetData(GetLeftSubTree(bt1)), GetData(GetLeftSubTree(GetLeftSubTree(bt1))), GetData(GetLeftSubTree(GetRightSubTree(bt1))));
}
