#include<iostream>
using namespace std;


//------------------- Node implementation -----------
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }
// };

// int main(){
//     Node* node1 = new Node(10);
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;

//     return 0;
// }




// -------------- shradha linked list method ----------------
// class Node{
//     public:
//         int data;
//         Node* node;

//         Node(int val){
//             data = val;
//             node = NULL;
//         }
// };

// class List {
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail= NULL;
//         }        
// };






//------------------ Head :- null part -----------------
// class Node{
//     public:
//         int data;
//         Node* node;

//         Node(int val){
//             data = val;
//             node = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);  // dynamic object jo hamare function ke khatam hone ke baad bhi exist karegi
//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//         }
// };

// int main(){
//     List ll;

//     return 0;
// }







// ---------------- Head:- not null ----------------
// class Node{
//     public:
//         int data;
//         Node* node;

//         Node(int val){
//             data = val;
//             node = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:

//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);
//             if(head = NULL){
//                 head = tail = newnode;
//                 return;
//             }
//             else{
//                 newnode->node = head;
//                 head = newnode;
//             }
//     }
// };

// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
     
//     return 0;
// }





 
//------------- Print a Linked List ------(Print kii time complexity o(n) )------
// class Node{
//     public:
//         int data;
//         Node* node;

//         Node(int val){
//             data = val;
//             node = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:

//         List(){
//             head = tail = NULL;
//         }

//     void push_front(int val){
//         Node* newnode = new Node(val);
//         if(head == NULL){
//             head = tail = newnode;
//             return;
//         }
//         else{
//             newnode->node = head;
//             head = newnode;
//         }
//     }

//     void print(){
//         Node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp = temp->node;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.print();

//     return 0;
// }






// --------- Push Back in Linked list ( Head not null ) ---------- -------
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 newnode->next = head;
//                 head = newnode;
//             }
//         }

//         void push_back(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }

//         void print(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };


// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.push_back(4);
//     ll.push_back(5);

//     ll.print();

//     return 0;
// }







// ---------------- Pop front ----------------
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 newnode->next = head;
//                 head = newnode;
//             }
//         }

//         void push_back(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }

//         void pop_front(){
//             if(head == NULL){
//                 cout<<"Linked list is empty";
//                 return ;
//             }

//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;

//             delete temp;
//         }

//         void print(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };


// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);

//     ll.push_back(4);
//     ll.push_back(5);

//     ll.pop_front();

//     ll.print();

//     return 0;
// }








// ----------------- Pop Back -------------------
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 newnode->next = head;
//                 head = newnode;
//             }
//         }

//         void push_back(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }

//         void pop_front(){
//             if(head == NULL){
//                 cout<<"Linked list is empty";
//                 return ;
//             }

//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;

//             delete temp;
//         }

//         void pop_back(){
//             if(head == NULL){
//                 cout<<"linked list is empty";
//                 return ;
//             }
//             Node* temp = head;
            
//             while(temp->next != tail){
//                 temp = temp->next;
//             }

//             temp->next = NULL;
//             delete tail;
//             tail = temp;
//         }

//         void print(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };


// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.print();

//     ll.push_back(4);
//     ll.push_back(5);
//     ll.print();

//     ll.pop_front();
//     ll.print();

//     ll.pop_back();
//     ll.print();

//     return 0;
// }








// ----------------- Insert in Middle -------------

// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 newnode->next = head;
//                 head = newnode;
//             }
//         }

//         void insert(int val, int pos){
//             if(pos < 0){
//                 cout<<"Invalid pos"<<endl;
//                 return ;
//             }
//             if(pos == 0){
//                 push_front(val);
//                 return ;
//             }

//             Node* temp = head;
//             for(int i=0; i<pos-1; i++){
//                 if(temp == NULL){
//                     cout<<"Invalid position";
//                     return ;
//                 }
//                 temp = temp->next;
//             }

//             Node* newnode = new Node(val);
//             newnode->next = temp->next;
//             temp->next = newnode;
//         }
        

//         void print(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };


// int main(){
//     List ll;

//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);

//     ll.print();

//     ll.insert(4, 1);
//     ll.print();

//     return 0;
// }







// --------------- Search in Linked List ---------------
// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);

//             if(head == NULL){
//                 head = tail = newnode;
//                 return ;
//             }
//             else{
//                 newnode->next = head;
//                 head = newnode;
//             }
//         }

//         int search(int key){
//             Node* temp = head;
//             int index = 0;

//             while(temp!=NULL){
//                 if(temp->data == key){
//                     return index;
//                 }

//                 temp = temp->next;
//                 index++;
//             }

//             return -1;
//         }

//         void print(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };


// int main(){
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.print();

//     cout<<ll.search(10)<<endl;


//     return 0;
// }







// -------------- Doubly Linked List structure(Push front) --------------------

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = prev = NULL;
//     }
// };

// class DoublyList{
//     Node* head;
//     Node* tail;

//     public:

//     DoublyList(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }

//     void print(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
// };


// int main(){
//     DoublyList dl;

//     dl.push_front(1);
//     dl.push_front(2);

//     dl.print();

//     return 0;
// }







// ---------------- Doubly linked list (push back) -----------------

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = prev = NULL;
//     }
// };

// class DoublyList{
//     Node* head;
//     Node* tail;

//     public:

//     DoublyList(){
//         head = tail = NULL;
//     }

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void print(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
// };


// int main(){
//     DoublyList dl;

//     dl.push_back(4);
//     dl.push_back(5);
//     dl.push_back(6);

//     dl.print();

//     return 0;
// }









// ------------ POP front at doubly linked list ------------------
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = prev = NULL;
//     }
// };

// class DoublyList{
//     Node* head;
//     Node* tail;

//     public:

//     DoublyList(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }

//     void pop_front(){
//         if(head == NULL){
//             cout<<"Doubly is empty";
//             return ;
//         }
        
//         Node* temp = head;
//         head = head->next;

//         if(head != NULL){
//             head->prev = NULL;
//         }

//         temp->next = NULL;
//         delete temp;
//     }

//     void print(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
// };


// int main(){
//     DoublyList dl;

//     dl.push_front(1);
//     dl.push_front(2);
//     dl.push_front(3);

//     dl.pop_front();

//     dl.print();

//     return 0;
// }








// ------------- Doubly pop back ----------
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         data = val;
//         next = prev = NULL;
//     }
// };

// class DoublyList{
//     Node* head;
//     Node* tail;

//     public:

//     DoublyList(){
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL){
//             head = tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }

//     void pop_back(){
//         if(head == NULL){
//             cout<<"Doubly linked list is empty";
//             return ;
//         }

//         Node* temp = tail;
//         tail = tail->prev;

//         if(tail != NULL){
//             tail->next = NULL;
//         }

//         temp->prev = NULL;
//         delete temp;
//     }

//     void print(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
// };


// int main(){
//     DoublyList dl;

//     dl.push_front(1);
//     dl.push_front(2);
//     dl.push_front(3);

//     dl.pop_back();

//     dl.print();

//     return 0;
// }








// ----------------- Circular Linked List (insert at head) -----------------

// class Node{
//     public:
//         int data;
//         Node* next; 

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class CircularList{
//     Node* head;
//     Node* tail;

//     public:
//         CircularList(){
//             head = tail = NULL;
//         }

//         void insert(int val){
//             Node* newNode = new Node(val);
//             if(head == NULL){
//                 head = tail = newNode;
//                 tail->next = head;
//             }
//             else{
//                 newNode->next = head;
//                 head = newNode;
//                 tail->next = head;
//             }
//         }

//         void print(){
//             if(head == NULL){
//                 return ;
//             }

//             cout<<head->data<<" ";
//             Node* temp = head->next;
//             while(temp!= head){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<temp->data;
//         }

// };

// int main(){
//     CircularList cl;

//     cl.insert(1);
//     cl.insert(2);
//     cl.insert(3);
//     cl.print();

//     return 0;
// }







// ----------------- Circurlar linked list insert at tail ---------------

// class Node{
//     public:
//         int data;
//         Node* next; 

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class CircularList{
//     Node* head;
//     Node* tail;

//     public:
//         CircularList(){
//             head = tail = NULL;
//         }

//         void insertAtTail(int val){
//             Node* newNode = new Node(val);
//             if(head == NULL){
//                 head = tail = newNode;
//                 tail->next = head;
//             }
//             else{
//                 newNode->next = head;
//                 tail->next = newNode;
//                 tail=newNode;
//             }
//         }

//         void print(){
//             if(head == NULL){
//                 return ;
//             }

//             cout<<head->data<<" ";
//             Node* temp = head->next;
//             while(temp!= head){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<temp->data;
//         }

// };

// int main(){
//     CircularList cl;

//     cl.insertAtTail(1);
//     cl.insertAtTail(2);
//     cl.insertAtTail(3);
//     cl.print();

//     return 0;
// }







// ------------------- Circular linked list (delete at head) -------------------
//  class Node{
//     public:
//         int data;
//         Node* next; 

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class CircularList{
//     Node* head;
//     Node* tail;

//     public:
//         CircularList(){
//             head = tail = NULL;
//         }

//         void insert(int val){
//             Node* newNode = new Node(val);
//             if(head == NULL){
//                 head = tail = newNode;
//                 tail->next = head;
//             }
//             else{
//                 newNode->next = head;
//                 head = newNode;
//                 tail->next = head;
//             }
//         }

//         void deleteList(){
//             if(head == NULL){
//                 return ;
//             }
//             else if(head == tail){
//                 delete head;
//                 head = tail = NULL;
//             }
//             else{
//                 Node* temp = head;
//                 head = head->next;
//                 tail->next = head;

//                 temp->next = NULL;
//                 delete temp;
//             }
//         }

//         void print(){
//             if(head == NULL){
//                 return ;
//             }

//             cout<<head->data<<" ";
//             Node* temp = head->next;
//             while(temp!= head){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<temp->data;
//         }

// };

// int main(){
//     CircularList cl;

//     cl.insert(1);
//     cl.insert(2);
//     cl.insert(3);
//     cl.print();
//     cout<<endl;
//     cl.deleteList();
//     cl.print();

//     return 0;
// }








// --------------------------- Circular List (Delete at tail) -----------------------------

//  class Node{
//     public:
//         int data;
//         Node* next; 

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class CircularList{
//     Node* head;
//     Node* tail;

//     public:
//         CircularList(){
//             head = tail = NULL;
//         }

//         void insert(int val){
//             Node* newNode = new Node(val);
//             if(head == NULL){
//                 head = tail = newNode;
//                 tail->next = head;
//             }
//             else{
//                 newNode->next = head;
//                 head = newNode;
//                 tail->next = head;
//             }
//         }

//         void deleteAtTail(){
//            if(head == NULL){
//                 return ;
//            }
//            else if(head == tail){
//                 delete head;
//                 head = tail = NULL;
//            }
//            else{
//             Node* temp = tail;
//             Node* prev = head;
//             while(prev->next != tail){
//                 prev = prev->next;
//             }
//             tail = prev;
//             tail->next = head;
             
//             temp->next = NULL;
//             delete temp;
//            }
//         }

//         void print(){
//             if(head == NULL){
//                 return ;
//             }

//             cout<<head->data<<" ";
//             Node* temp = head->next;
//             while(temp!= head){
//                 cout<<temp->data<<" ";
//                 temp = temp->next;
//             }
//             cout<<temp->data;
//         }

// };

// int main(){
//     CircularList cl;

//     cl.insert(1);
//     cl.insert(2);
//     cl.insert(3);
//     cl.print();
//     cout<<endl;
//     cl.deleteAtTail();
//     cl.print();

//     return 0;
// }

