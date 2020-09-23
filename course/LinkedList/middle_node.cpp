#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);
    // Node *fourth = new Node(14);

    head->next = first;
    first->next = second;
    second->next = third;
    // third->next = fourth;

    Node *slow, *fast;
    slow = head;
    fast = head;

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next == NULL)
        {
            break;
        }
        else
        {
            fast = fast->next;
        }
    }
    cout << slow->data << endl;
}