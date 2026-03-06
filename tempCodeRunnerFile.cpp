#include <bits/stdc++.h>
using namespace std;
 
struct Node{
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=NULL;
    }
};

Node* convert(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
        temp=temp->next;
    }
    return head->next;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* temp=convert(arr);
    Node* head=temp;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}