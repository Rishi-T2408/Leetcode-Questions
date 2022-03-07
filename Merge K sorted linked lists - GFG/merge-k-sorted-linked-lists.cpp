// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node *Merge(Node *head1,Node *head2)
    {
        Node *head3=NULL;
        Node *last=NULL;
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->data<head2->data)
            {
                if(head3==NULL)
                {
                    head3=head1;
                    last=head1;
                    head1=head1->next;
                }
                else{
                    last->next=head1;
                    last=head1;
                    head1=head1->next;
                }
            }
            else{
                if(head3==NULL)
                {
                    head3=head2;
                    last=head2;
                    head2=head2->next;
                }
                else{
                    last->next=head2;
                    last=head2;
                    head2=head2->next;
                }
            }
        }
        if(head1==NULL) last->next=head2;
        else last->next=head1;
        
        return head3;
    }
    
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           for(int i=0;i<k-1;i++)
           {
               arr[i+1]=Merge(arr[i],arr[i+1]);
           }
           return arr[k-1];
    }
    
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends