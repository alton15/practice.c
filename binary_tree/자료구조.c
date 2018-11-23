#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_Would_Size	45		//���� 
#define	Max_Capital_Size	67		//����

typedef struct {
	char would[Max_Would_Size];		//���� �̸��� �ֱ� ���� ���� 
	char capital[Max_Capital_Size];		//���� �̸��� �ֱ� ���� ���� 
} Would;

typedef struct treeNode {		//���� ���� Ʈ���� ��� ����
	Would key;
	struct treeNode * left; 	//���� Ʈ�� 
	struct treeNode * right;	//������ Ʈ�� 
} treeNode;

void InsertNode(treeNode **root, Would x) {	//Would�� x�� �ִ´�. 
	treeNode * newNode;		//�� ��� 
	treeNode * findNode = NULL; 	//������ �ڸ��� ã�� 
	treeNode * parentNode = * root;		//������ ����� �θ��带 ���� 

	while(parentNode != NULL) {		//������ �ڸ��� ã�´�. 
		if(strcmp(x.would, parentNode->key.would) == 0) {		//warning
			printf("\n �̹� ���� Ű�� �ִ�. \n");		//s1 = s2 0��ȯ 
			return;
		}
		findNode = parentNode;		//������ �ڸ��� ã�� ����. 
		if(strcmp(x.would, parentNode->key.would) < 0) {		//s1 < s2 -1��ȯ 
			printf("���� �̵� \n");
			parentNode= parentNode->left;
		}
		else if(strcmp(x.would, parentNode->key.would) > 0) {		//s1 > s2 1��ȯ 
			printf("������ �̵� \n");
			parentNode = parentNode->right;
		} 
	}
	//������ ��� ���� 
	newNode = (treeNode*)malloc(sizeof(treeNode));		//�� ��忡 ���� �Ҵ� 
	newNode->key = x;		//�� ��� key�� x�� ������ �Ҵ� 
	newNode->left = NULL;		//���� ����̱� ������ ���� NULL 
	newNode->right = NULL;		//���� ����̱� ������ �����ʵ� NULL; 
	
	if(findNode != NULL) {		//������ �ڸ��� �θ���� �� ��带 ����. 
		if(strcmp(x.would, findNode->key.would) < 0) {
			printf("���ʿ� ���� \n");
			findNode->left = newNode;
		}
		else if(strcmp(x.would, findNode->key.would) > 0) {
			printf("�����ʿ� ���� \n");
			findNode->right = newNode;
		}
	}
	else {
		*root = newNode;		//����ִٸ� ���θ��� ��带 root��. 
	}
}

void DeleteNode(treeNode **root, Would x) {
	treeNode * parent = NULL;		//�θ��� 
	treeNode * parentNode = *root;		//���� ��� 
	treeNode * child;		//�ڽ� ��� 
	treeNode * succeed, *succeed_parent;		//�İ��� ��带 ���� ������ 
	//������ ��� ��ġ Ž�� 
	while((parentNode != NULL) && (strcmp(x.would, parentNode->key.would) != 0)) {
		parent = parentNode;
		if(strcmp(x.would, parentNode->key.would) < 0) {
			parentNode = parentNode->left;
		}
		else {
			parentNode = parentNode->right;
		}
	}
	
	if(parentNode == NULL) {		//Ű�� ����. 
		printf("ã�� Ű�� ���� Ʈ���� ����. \n");
		return;
	}
	
	if((parentNode->left == NULL) && (parentNode->right == NULL)) {
		if(parent != NULL) {
			if(parent->left == parentNode) {		//�θ����� ������ ������ ����� ��� 
				parent->left = NULL;
			}
			else {							//�������� ������ ����� �� 
				parent->right = NULL;
			}
		}
		else {			//��ü�� �ϳ��� ��� �θ��尡 ���� �� 
			root = NULL;
		}
	}
	else if((parentNode->left == NULL) || (parentNode->right == NULL)) {	//������ ��尡 �� ���� �ڽ� ��带 ���� ��� 
		if(parentNode->left != NULL) {		//������ ����� ������ �ڽĳ��� ���� 
			child = parentNode->left;
		}
		else {
			child = parentNode->right;		//�������� �ڽ����� 
		}
		if(parent != NULL) {		//�θ��� ���� NULL�� �ƴ� ��� 
			if(parent->left == parentNode) {		//�θ��� ������ ���� ���� �ڽĳ�带 �θ����� ���ʰ� ���� 
				parent->left = child;
			}
			else {		//�������̸� ������ ���� 
				parent->right = child;
			}
		}
		else {		//���� �� ���� ���� �ڽĳ�� �ۿ� ������ root�� ���� 
			*root = child;
		}
	}
	else {		//������ ��尡 �� ���� �ڽ� ��带 ���� ��� 
		succeed_parent = parentNode;		//������ ��� ���� 
		succeed = parentNode->left;		//���� ����Ʈ������ �İ��� ã�� 
		
		while(succeed->right != NULL) {		//�İ��� ã���� ���������� 
			succeed_parent = succeed;		//�� �񱳸� ���� Ž�� ���� ����� �θ𰪵� ���� �̵� 
			succeed = succeed->right; 
		}	//���� ����Ʈ������ ������ ���� ������ ������ ����� ���� ��尡 �İ��ڰ� �ȴ� 
		if(succeed_parent->left == succeed) {
			succeed_parent->left;
		} 
		else {			//���õ� �İ����� �������� NULL�̹Ƿ� ���� ���� �θ��� �����ʿ� ���� 
			succeed_parent->right = succeed->left; 
		}
		parentNode->key = succeed->key;		//�İ����� key���� ������ ����� key�� �־��� 
		parentNode = succeed; 		//ã�� ���� ������ ����� ��ġ�� ���� 
	} 
	free(parentNode);		//��������� �޸� �Ҵ� ���� 
}

treeNode* searchBST(treeNode *root, Would x) {		//Ʈ��Ž�� 
	while(root != NULL) {
		if(strcmp(x.would, root->key.would) == 0) {
			return root;
		}
		else if(strcmp(x.would, root->key.would) < 0) {
			root = root->left;
		}
		else if(strcmp(x.would, root->key.would) > 0) {
			root = root->right;
		}
	}
	printf("ã�� Ű�� ����.");
	return root;		 
}

void Display(treeNode *root) {
	int i;
	if(root != NULL) {
		Display(root->left);
		printf("%s : %s", root->key.would, root->key.capital);
		Display(root->right);
	}
}

void menu() {
	printf("\n************************\n");
	printf("* 1. �Է� \n");
	printf("* 2. ���� \n");
	printf("* 3. Ž�� \n");
	printf("* 4. ��� \n");
	printf("* 5. ���� \n");
	printf("*************************\n");
	printf("�Է�: "); 
}

int main(void) {
	char order, choose;
	Would w;
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	
	while(1) {
		menu();
		choose = getchar();
		fflush(stdin);			//�޴� ���� �� ����� 
		
		switch(choose) {
			case '1' :
				printf("����: ");
				gets(w.would);
				printf("����: ");
				gets(w.capital);
				InsertNode(&root, w);
				break;
			
			case '2' :
				printf("������ ����: ");
				gets(w.would);
				DeleteNode(&root, w);
				break;
				
			case '3' :
				printf("-=���� Ž��=-");
				printf("����: ");
				gets(w.would);
				foundedNode = searchBST(root, w);
				if(foundedNode != NULL) {
					printf("����: %s \n", foundedNode->key.would);
					printf("����: %s \n", foundedNode->key.capital);
				}
				else {
					printf("�ش� ���� ����. \n");
				}
				break;
				
			case '4' :
				printf("���� ��� \n");
				Display(root);
				printf("\n");
				break;
				
			case '5' :
				return 0;
			
			default :
				printf("�߸� �Է��ߴ�. \n");
				break;
		}
	}
}
