// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void moveZeroes(struct Node **head);

// function to displaying nodes
void display(struct Node *head) {
    while (head != NULL) {
	    cout << head->data << " ";
	    head = head->next;
    }
    cout <<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        struct Node *Head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>q;
            push(&Head,q);
        }
        moveZeroes(&Head);
        display(Head);

    }
}
// } Driver Code Ends


//User function Template for C++
/* Linked List Node structure
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    //Your code here
    vector<int> v;
    Node *p=*head;
    while(p!=NULL)
    {
        v.push_back(p->data);
        p=p->next;
    }
    int count0=0;
    vector<int> num2;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0) count0++;
        else num2.push_back(v[i]);
    }
    
    p=*head;
    int k=0;
    while(p!=NULL)
    {
        if(count0!=0){
            p->data=0;
            count0--;
        }        
        else{
            p->data=num2[k++];
        }
        p=p->next;
    }
}