/*
class Solution {

  public int minEatingSpeed(int[] piles, int h) {

    int start=1;

    int end=piles[0];

    for(int i=1;i<piles.length;i++){

      end=Math.max(end,piles[i]);

    }

    int ans=-1;

    while(start<=end){

      int mid=(start+end)/2;

      if(isPossible(piles,h,mid)){

        ans=mid;

        end=mid-1;

      }else{

        start=mid+1;

      }

    }

    return ans;

  }

 //helper method

  public boolean isPossible(int[] piles,int h,int speed){

    int noOfHours=0;

    for(int i=0;i<piles.length;i++){

      noOfHours+=Math.ceil((piles[i]+0.0)/speed);

    }

    return noOfHours<=h;

  }

}

Problem-2

Given the head of a sorted linked list ,delete all dubplicates such that

each appears only once. return the linked list sorted as well/

//problem-2-from ppt-deleting the element from single linked list

given the head of sorted linked list.delete all duplicate such that each element

appears only one and return the linked list sorted as well.


*/
#include<iostream>

using namespace std;

class Node{

 public:

 int val;

 Node* next;

 Node(int data){

  val=data;

  next=NULL;

 }

};

class LinkedList{

 public:

 Node* head;

 LinkedList(){

  head=NULL;

 }

 void insertAtLast(int value){

  Node* new_node=new Node(value);

  if(head==NULL){

  head=new_node;

  return;

  }

  Node* temp=head;

  while(temp->next!=NULL){

  temp=temp->next;

  }

  //reached at last node

  temp->next=new_node;

 }

 void display(){

  Node* temp=head;

  while(temp!=NULL){

  cout<<temp->val<<"->";

  temp=temp->next;

  }

  cout<<"NULL"<<endl;

 }

};

void deleteDuplicateNodes(Node* &head){

 Node* current_node=head;

 while(current_node!=NULL){

 while(current_node->next!=NULL && current_node->val==current_node->next->val){

  //delete current_node->next

 Node* temp=current_node->next;//node to be deleted

 current_node->next=current_node->next->next;

 free(temp);

 }

 //this loop ends when cureent node and next node value are different

 //or linkedlist ends

 current_node=current_node->next;

 }

 //this loop will end when current node-next pointing to null

}

int main(){

 LinkedList linkedList;

 linkedList.insertAtLast(1);

 linkedList.insertAtLast(2);

 linkedList.insertAtLast(6);

 linkedList.insertAtLast(9);

 linkedList.insertAtLast(4);

 linkedList.display();

 deleteDuplicateNodes(linkedList.head);

 linkedList.display();

 return 0;

}
