#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
typedef struct nodestr{
	int data;
	struct nodestr* link;
	} node;
	
int getNoOfNodes(node*);

node* createNode(int key){
	node* t = (node*)malloc(sizeof(node*));
	t->data=key;
	t->link=NULL;
	return t;
	}

node* insert(node* head, int key , char pos){
	if(head==NULL)
		head=createNode(key);
	else{
		node* p = head;
		if(pos=='F'||pos=='f'){
		p=head;
		head=createNode(key);
		head->link=p;}
		else{
		while(p->link!=NULL)
			p=p->link;
		p->link=createNode(key);}
		}
	return head;
	}


node* insertAtPos(node* head, int key , int pos){
	if(head==NULL)
		head=createNode(key);
	else{
		node* p=head;
		pos--;
		while((p->link)!=NULL && pos >0){
			pf("POS: %d",pos);
			p=p->link;
			pos--;
		}
		if(p==head){
			node* t=createNode(key);
			t->link=p;
			head=t;
		}
		else{
			node* t=createNode(key);
			t->link=p->link;
			p->link=t;
		}
	}
	return head;
	}

node* delete(node* head, int key){	//Deletes Key
	node* p = head;
	node* t;
	if(p==NULL)
		return NULL;
	if(p->data==key){
		t=p;
		head=p->link;
		free(t);
		return head;}		
	while((p!=NULL)&&((p->link)->data!=key))
		p=p->link;
	pf("%d\n\n",key);
	t=p->link;
	p->link = (p->link)->link;
	free(t);
	return head;
	}
	
node* removeNode(node* head, char pos){	//Removes the first or the last node
	if(head==NULL)
		return NULL;
	if(pos=='F'||pos=='f'){
		node* t=head;
		head=head->link;
		free(t);
		}
	else if(pos=='R'||pos=='r'){
		node* p=head;
		if(p->link==NULL){
			head=NULL;
			return head;
			}
		while((p->link)->link!=NULL)
			p=p->link;
		free(p->link);
		p->link=NULL;
		}
		return head;
		}


int getValue(node* head, char pos){	//Removes the first or the last node
	int returnval=0;
	if(head==NULL)
		return NULL;
	if(pos=='F'||pos=='f'){
		node* t=head;
		returnval=t->data;
		}
	else if(pos=='R'||pos=='r'){
		node* p=head;
		if(p->link==NULL){
				return NULL;
			}
		while((p->link)->link!=NULL)
			p=p->link;
		returnval=(p->link)->data;
		}
		return returnval;
		}



void traverseList(node* head){
	node* p=head;
	if(p==NULL){
		pf("==MESSAGE BOX==\n\nList is Empty!\n\n===============\n");
		return;
		}
	pf("==MESSAGE BOX==\n\nELEMENTS IN THE LIST: \n");
	while(p!=NULL){
		pf("\t%d\n",p->data);
		p=p->link;
		}
	pf("\nNo of nodes: %d\n===============\n",getNoOfNodes(head));
	}

int getNoOfNodes(node* head){
	int count=0;
	node* p = head;
	while(p!=NULL){
		p=p->link;
		count++;
		}
	return count;
	}
	
node* reverse(node* head){
	if(head==NULL)
		return NULL;
	node* rev=NULL;
	node* p=head;
	while(p!=NULL){
		rev=insert(rev,getValue(p,'F'),'F');
		node* t=p;
		p=p->link;
		free(t);
	}
	head=rev;
	return rev;
	}
	
node* insertSorted(node* head,int key, char order){
	node* p=head;
	if(p==NULL){
	head=createNode(key);
	head->link=NULL;
	return head;
	}
	if(order=='D'||order=='d')
		while(p->link!=NULL && p->data<key)
		p=p->link;
	else
		while(p->link!=NULL && p->data>key)
		p=p->link;
	node* t=createNode(key);
	t->link=p->link;
	p->link=t;
	return head;
	}	

node* sort(node* head, char order){
	node* sorted=NULL;
	node* p = head;
	while(p!=NULL){
		sorted=insertSorted(sorted,p->data,order);
		node* t = p;
		p=p->link;
		free(t);
	}
	head=sorted;
	return head;	
}
		
void clearScreen(){
	pf("\033[2J\033[1;1H");
}

		
int main(void){
	clearScreen();
	node* head=NULL;
	int in=99,elm,pos;
	pf("==MESSAGE BOX==\n\n\n\n===============\n");
	while(in){
		pf("==MENU==\n1. Insert\n2. Delete\n3. Traverse\n4. Remove (first or last)\n5. Reverse\n6. Sort\n0. Exit\nEnter your choice number: ");
		sf("%d",&in);
		switch(in){
			case 1:
				pf("Enter the element to insert: ");
				fflush(stdin);
				sf("%d",&elm);
				pos=11;
				while(pos){
					pf("Location Choice:\n1. Front\n2. Rear\n3. Selective Position\n\nEnter the choice: ");
					sf("%d",&pos);
					switch(pos){
						case 1:
							head=insert(head,elm,'F');
							pos=0;
							break;
						case 2:
							head=insert(head,elm,'R');
							pos=0;
							break;
						case 3:
							pf("Enter the Position number: ");
							sf("%d",&pos);
							head=insertAtPos(head,elm,pos);
							pos=0;
							break;
						default:
							pf("Invalid choice! Try again!");
							pos=11;
							}
						}
				clearScreen();
				pf("==MESSAGE BOX==\n\n%d inserted!\n\n===============\n",elm);
				break;
			case 2:
				pf("Enter the element to delete: ");
				fflush(stdin);
				sf("%d",&elm);
			 	head=delete(head,elm);
				clearScreen();
				pf("==MESSAGE BOX==\n\n%d deleted!\n(if it existed, ignored otherwise)\n===============\n",elm);
			 	break;
			case 3:
				clearScreen();
				traverseList(head);
				break;
			case 4:
				pos=11;
				char c;
				while(pos){
					pf("Location to Delete from Choice:\n1. Front\n2. Rear\n\nEnter the choice: ");
					sf("%d",&pos);
					switch(pos){
						case 1:
							head=removeNode(head,'F');
							pos=0;
							c='F';
							break;
						case 2:
							head=removeNode(head,'R');
							pos=0;
							c='R';
							break;
						default:
							pf("Invalid choice! Try again!");
							pos=11;
							}
						}
				clearScreen();
				pf("==MESSAGE BOX==\n\n%s Node removed!\n\n===============\n",c=='F'?"Front":"Rear");
				break;
			case 5:
				clearScreen();
				head=reverse(head);
				pf("==MESSAGE BOX==\n\n List Reversed!\n\n===============\n");
				break;
			case 6:
				pos=11;
				while(pos){
					pf("Order Choice:\n1. Ascending\n2. Descending\n\nEnter the choice: ");
					sf("%d",&pos);
					switch(pos){
						case 1:
							head=sort(head,'A');
							pos=0;
							break;
						case 2:
							head=sort(head,'D');
							pos=0;
							break;
						default:
							pf("Invalid choice! Try again!");
							pos=11;
							}
						}
				clearScreen();
				pf("==MESSAGE BOX==\n\n List Sorted!\n\n===============\n");
				break;
			case 0:
				break;
			default:
				clearScreen();
				pf("!!!Wrong input, please enter again!!!");
			}
		}
	clearScreen();
	pf("==MESSAGE BOX==\n\nEXECUTION STOPPED, RETURNING EXIT_SUCCESS!\n\n===============\n\n");
	return EXIT_SUCCESS;
	}
