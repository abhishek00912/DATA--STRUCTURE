#include<iostream>
using namespace std;

class Node{    // linked list node 
    public:
    int val;
    Node*next;
    Node(int val){
       this->val=val;
       this->next=NULL;
    }
};
int main(){

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // cout<<&a<<endl;
    // cout<<a.next;

    // forming linked list
   
    a.next=&b;
    b.next=&c;
    c.next=&d;

    // a->next se b  ka value nikalta hai 
    // d.next=NULL;
    //
    //((a.next)->next->val



//     a.next->val=70;
//    cout<<(a.next)->val<<endl;

//    cout<<(b.next)->val;

// cout<<((a.next)->next)->val;

    //  print karani hia d ki vlaue by a 

    // *(*(*(a.next).next).next).val

//    cout<<(*((*((*(a.next)).next)).next)).val;

//    cout<<(((a.next)->next)->next)->val;

  Node temp = a;
  while(1){
    cout<<temp.val<<" ";
    if(temp.next==NULL) break;
    temp= *(temp.next);
  }


    return 0;
}