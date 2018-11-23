#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_Would_Size	45		//나라 
#define	Max_Capital_Size	67		//수도

typedef struct {
	char would[Max_Would_Size];		//나라 이름을 넣기 위한 공간 
	char capital[Max_Capital_Size];		//수도 이름을 넣기 위한 공간 
} Would;

typedef struct treeNode {		//사전 이진 트리의 노드 구조
	Would key;
	struct treeNode * left; 	//왼쪽 트리 
	struct treeNode * right;	//오른쪽 트리 
} treeNode;

void InsertNode(treeNode **root, Would x) {	//Would형 x를 넣는다. 
	treeNode * newNode;		//새 노드 
	treeNode * findNode = NULL; 	//삽입할 자리를 찾음 
	treeNode * parentNode = * root;		//삽입할 노드의 부모노드를 저장 

	while(parentNode != NULL) {		//삽입할 자리를 찾는다. 
		if(strcmp(x.would, parentNode->key.would) == 0) {		//warning
			printf("\n 이미 같은 키가 있다. \n");		//s1 = s2 0반환 
			return;
		}
		findNode = parentNode;		//삽입할 자리를 찾기 위해. 
		if(strcmp(x.would, parentNode->key.would) < 0) {		//s1 < s2 -1반환 
			printf("왼쪽 이동 \n");
			parentNode= parentNode->left;
		}
		else if(strcmp(x.would, parentNode->key.would) > 0) {		//s1 > s2 1반환 
			printf("오른쪽 이동 \n");
			parentNode = parentNode->right;
		} 
	}
	//삽입할 노드 생성 
	newNode = (treeNode*)malloc(sizeof(treeNode));		//새 노드에 공간 할당 
	newNode->key = x;		//새 노드 key를 x의 값으로 할당 
	newNode->left = NULL;		//최초 노드이기 때문에 왼쪽 NULL 
	newNode->right = NULL;		//최초 노드이기 때문에 오른쪽도 NULL; 
	
	if(findNode != NULL) {		//삽입할 자리의 부모노드와 비교 노드를 연결. 
		if(strcmp(x.would, findNode->key.would) < 0) {
			printf("왼쪽에 저장 \n");
			findNode->left = newNode;
		}
		else if(strcmp(x.would, findNode->key.would) > 0) {
			printf("오른쪽에 저장 \n");
			findNode->right = newNode;
		}
	}
	else {
		*root = newNode;		//비어있다면 새로만든 노드를 root로. 
	}
}

void DeleteNode(treeNode **root, Would x) {
	treeNode * parent = NULL;		//부모노드 
	treeNode * parentNode = *root;		//현재 노드 
	treeNode * child;		//자식 노드 
	treeNode * succeed, *succeed_parent;		//후계자 노드를 구할 포인터 
	//삭제할 노드 위치 탐색 
	while((parentNode != NULL) && (strcmp(x.would, parentNode->key.would) != 0)) {
		parent = parentNode;
		if(strcmp(x.would, parentNode->key.would) < 0) {
			parentNode = parentNode->left;
		}
		else {
			parentNode = parentNode->right;
		}
	}
	
	if(parentNode == NULL) {		//키가 없다. 
		printf("찾는 키가 이진 트리에 없다. \n");
		return;
	}
	
	if((parentNode->left == NULL) && (parentNode->right == NULL)) {
		if(parent != NULL) {
			if(parent->left == parentNode) {		//부모노드의 왼쪽이 삭제할 노드인 경우 
				parent->left = NULL;
			}
			else {							//오른쪽이 삭제할 노드일 때 
				parent->right = NULL;
			}
		}
		else {			//전체가 하나일 경우 부모노드가 없을 때 
			root = NULL;
		}
	}
	else if((parentNode->left == NULL) || (parentNode->right == NULL)) {	//삭제할 노드가 한 개의 자식 노드를 가진 경우 
		if(parentNode->left != NULL) {		//삭제할 노드의 왼쪽을 자식노드로 연결 
			child = parentNode->left;
		}
		else {
			child = parentNode->right;		//오른쪽을 자식으로 
		}
		if(parent != NULL) {		//부모노드 값이 NULL이 아닐 경우 
			if(parent->left == parentNode) {		//부모노드 왼쪽이 삭제 노드면 자식노드를 부모노드의 왼쪽과 연결 
				parent->left = child;
			}
			else {		//오른쪽이면 오른쪽 연결 
				parent->right = child;
			}
		}
		else {		//삭제 후 남은 값이 자식노드 밖에 없으면 root로 지정 
			*root = child;
		}
	}
	else {		//삭제할 노드가 두 개의 자식 노드를 가진 경우 
		succeed_parent = parentNode;		//삭제할 노드 설정 
		succeed = parentNode->left;		//왼쪽 서브트리에서 후계자 찾음 
		
		while(succeed->right != NULL) {		//후계자 찾으러 오른쪽으로 
			succeed_parent = succeed;		//값 비교를 위해 탐색 중인 노드의 부모값도 같이 이동 
			succeed = succeed->right; 
		}	//왼쪽 서브트리에서 오른쪽 값이 없으면 삭제할 노드의 왼쪽 노드가 후계자가 된다 
		if(succeed_parent->left == succeed) {
			succeed_parent->left;
		} 
		else {			//선택된 후계자의 오른쪽이 NULL이므로 왼쪽 값을 부모노드 오른쪽에 연결 
			succeed_parent->right = succeed->left; 
		}
		parentNode->key = succeed->key;		//후계자의 key값을 삭제할 노드의 key로 넣어줌 
		parentNode = succeed; 		//찾은 값을 삭제할 노드의 위치로 변경 
	} 
	free(parentNode);		//삭제노드의 메모리 할당 해제 
}

treeNode* searchBST(treeNode *root, Would x) {		//트리탐색 
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
	printf("찾는 키가 없다.");
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
	printf("* 1. 입력 \n");
	printf("* 2. 삭제 \n");
	printf("* 3. 탐색 \n");
	printf("* 4. 출력 \n");
	printf("* 5. 종료 \n");
	printf("*************************\n");
	printf("입력: "); 
}

int main(void) {
	char order, choose;
	Would w;
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	
	while(1) {
		menu();
		choose = getchar();
		fflush(stdin);			//메뉴 선택 값 비워줌 
		
		switch(choose) {
			case '1' :
				printf("나라: ");
				gets(w.would);
				printf("수도: ");
				gets(w.capital);
				InsertNode(&root, w);
				break;
			
			case '2' :
				printf("삭제할 나라: ");
				gets(w.would);
				DeleteNode(&root, w);
				break;
				
			case '3' :
				printf("-=사전 탐색=-");
				printf("나라: ");
				gets(w.would);
				foundedNode = searchBST(root, w);
				if(foundedNode != NULL) {
					printf("나라: %s \n", foundedNode->key.would);
					printf("수도: %s \n", foundedNode->key.capital);
				}
				else {
					printf("해당 나라가 없다. \n");
				}
				break;
				
			case '4' :
				printf("사전 출력 \n");
				Display(root);
				printf("\n");
				break;
				
			case '5' :
				return 0;
			
			default :
				printf("잘못 입력했다. \n");
				break;
		}
	}
}
