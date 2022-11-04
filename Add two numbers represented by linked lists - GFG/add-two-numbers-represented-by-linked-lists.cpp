//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    Node* reverse(Node* first)
    {
        Node* curr=first;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* f=reverse(first);
        Node* s=reverse(second);
        Node* ans=new Node(-1);
        
        Node* t1=f;
        Node* t2=s;
        int carry=0;
        
        Node* tail=ans;
        
        while(t1!=NULL && t2!=NULL)
        {
            int a=t1->data;
            int b=t2->data;
            int sum=carry+a+b;
            int num=sum%10;
             carry=sum/10;
            t1=t1->next;
            t2=t2->next;
            
            tail->next=new Node(num);
            tail=tail->next;
        }
        while(t1!=NULL)
        {
            int a=t1->data;
            int sum=carry+a;
            int num=sum%10;
             carry=sum/10;
            t1=t1->next;
            tail->next=new Node(num);
            tail=tail->next;
        }
        
        while(t2!=NULL)
        {
            int a=t2->data;
            int sum=carry+a;
            int num=sum%10;
             carry=sum/10;
            t2=t2->next;
            tail->next=new Node(num);
            tail=tail->next;
        }
        
        if(carry==1)
        {    tail->next=new Node(carry);
            tail=tail->next;
        }
        ans=ans->next;
        Node* res=reverse(ans);
        
        return res;
        
            
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends