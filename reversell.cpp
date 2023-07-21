// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
    struct node
    {
        int data;
        struct node* next;

        node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution
{
public:
    void rev(node *start, node *end)
    {
        node *p = NULL, *curr = start, *n = start->next;
        while (p != end)
        {
            curr->next = p;
            p = curr;
            curr = n;
            if (n != NULL)
                n = n->next;
        }
    }
    struct node *reverse(struct node *head, int k)
    {
        // Complete this method
        if (head == NULL || head->next == NULL || k == 1)
            return head;
        node *dummy = new node(-1);
        dummy->next = head;
        node *bs = dummy, *e = head;
        int i = 0;
        while (e != NULL)
        {
            i++;
            if (i % k == 0 || e->next == NULL)
            {
                node *s = bs->next, *temp = e->next;
                rev(s, e);
                bs->next = e;
                s->next = temp;
                bs = s;
                e = temp;
            }
            else
                e = e->next;
        }
        return dummy->next;
    }
};

//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        struct node *head = NULL;
        struct node *temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            if (i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }

    return (0);
}

// } Driver Code Ends