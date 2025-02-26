#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		
	Node(int val){
		data = val;
		next=prev=NULL;
	}
		
};

class Doubly_List{
	
	Node* head;
	Node* tail;
	public:
		
		Doubly_List(){
			head=tail=NULL;
				}
	
	
	void push_front(int val){
		
		
		Node* newNode = new Node(val);
		if(head==NULL){
			head=tail=newNode;
		}
		
		else{
			newNode->next=head;
			head->prev=newNode;
			head=newNode;
			
		}
		
	}
	
	
	void push_back(int val){
		
		Node* newNode = new Node(val);
		if(head==NULL){
			head=newNode=tail;
		}
		
		else{
			tail->next=newNode;
			newNode->prev=tail;
			tail=newNode;
		}
	}
	
	
	void pop_front(){
		
		if(head==NULL){
			cout<<"Linked list is empty";
			return;
		}
		
		else if(head==tail){
			delete head;
			head=tail=NULL;
			return;
		}
		
		else{
			Node* temp=head;
			head=head->next;
			head->prev=NULL;
			temp->next=NULL;
			delete temp;
			
			
			
			
		}
	}
	
	
	
	void pop_back(){
		if(head==NULL){
			cout<<"Linked list is empty";
			return;
			
		}
		
		else if(head==tail){
			head->next=NULL;
			head=tail=NULL;
			return;
			
		}
		
		
		else{
		Node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		temp->next=NULL;
		tail->prev=NULL;
		delete tail;
		tail=temp;
		
			
		}
	}
	
	void print_Dll(){
		
		Node* temp;
		temp=head;
		while(temp!=NULL){
			cout<< temp->data << "<=>";
			temp=temp->next;
		}
		cout<<"NULL";
		cout<<endl;
	} 
	
				
};

int main(){
	Doubly_List d1;
	d1.push_front(3);
//	d1.push_front(2);
//	d1.push_front(1);
//	d1.push_back(4);
//    d1.push_back(5);
	//d1.push_back(6);
	//d1.push_back(7);
	//d1.pop_front();
//	d1.pop_back();
	//d1.pop_back();
	
	d1.print_Dll();
	return 0;
}
