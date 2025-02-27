#include<iostream>
using namespace std;

class A(){
	public:

Node* flatten(Node* head){
	
	Node* temp=head;
	while(temp!=NULL){
		
		if(temp->child!=NULL){
			
			Node* next;
			next=temp->next;
			temp->next=flatten(temp->next);
			temp->next->prev=temp;
			temp->child=NULL;
			
			while(temp->next!=tail){
				temp=temp->next;
			}
			
		if(next!=NULL){
			temp->next=next;
			next->prev=temp;
			}
			
		}
		
		temp=temp->next;
		
	}
}
};
