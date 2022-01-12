// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    bool Solve(Node *root,Node* &LCA,int n,int m)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->data==n || root->data==m)
        {
            LCA=root;
            return true;
        }
        bool l=Solve(root->left,LCA,n,m);
        bool r=Solve(root->right,LCA,n,m);
        if(l&&r)
        {
            LCA=root;
            return true;
        }
        if(!l && !r)
        {
            return false;
        }
        return true;
    }
    
    void Solver(Node *root,int n,int level,int &dist)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->data==n)
        {
            dist=level;
            return ;
        }
        Solver(root->left,n,level+1,dist);
        Solver(root->right,n,level+1,dist);
    }
    
    
    int findDist(Node* root, int n, int m) {
        // Your code 
        
        //Step 1 find LCA of n and m
        //Distance of n from LCA + Distance of m from LCA
        Node *LCA=NULL;
        Solve(root,LCA,n,m);
        int dist1=0;
        int dist2=0;
        Solver(LCA,n,0,dist1);
        Solver(LCA,m,0,dist2);
        return dist1+dist2;
    
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
     
    }
    return 0;
}
  // } Driver Code Ends