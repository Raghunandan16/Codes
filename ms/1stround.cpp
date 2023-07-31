#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////////////////CODE////////////////////////////////////////////////////////////////////////
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        next = NULL;
        data = val;
    }
};
/* void printLL(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->next;
    }
    cout << "\n";
} */
void solve()
{
    int n;
    cin >> n;
    Node *head = new Node(10);
    Node *node = head;
    node->next = new Node(11);
    cout << head->next->data;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}
