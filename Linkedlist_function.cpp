#include<bits/stdc++.h>
class Linklist_function
{
public:
	int data;
	Node* next; 
	Node(int x){
		data = x; 
		next = NULL; 
	}

	void display(Node* head){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}

	void insertFront(Node* head,int x){
		Node* new_Node= new Node(x);
		new_Node->next= head;
		head=new_Node;
	}

	void insertEnd(Node* head,int x){
		Node* new_Node= new Node(x);
		if(head==NULL){
			head=new_Node;
			return;
		}
		Node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new_Node;
	}

	void deleteFront(Node* head,int x){
		if(head==NULL){
			return;
		}
		Node* temp=head;
		head=head->next;
		delete temp;
	}

	void deleteBack(Node* head,int x){
		if(head==NULL){
			return;
		}
		Node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		delete temp;
	}

	bool Find(Node* head,int x){
		Node* temp=head;
		while(temp != NULL){
			if(temp->data==x){
				return true;
			}
			temp=temp->next;
		}
		return false;
	}

	void insertPosition(Node* head,int x,int pos){
		
		if(pos==0){
			Node* temp=new Node(x);
			temp->next=head;
			head=temp;
			return;
		}
		Node* temp=head;
		for(int i=0;i<pos-1 && temp!=NULL;i++){
			temp=temp->next;
		}
		Node* new_Node=new Node(x);
		new_Node->next=temp->next;
		temp->next=new_Node;
	}

	void deletePosition(Node* head,int x,int pos){
		
		if(pos==1){
			head=head->next;
			return;			
		}
		Node* temp=head;
		for(int i=0;i<pos-1 && temp!=NULL;i++){
			temp=temp->next;
		}
		if(temp->next==NULL){
			return;
		}
		Node* node= temp->next;
		temp->next=node->next;
		delete temp;
	}
};
