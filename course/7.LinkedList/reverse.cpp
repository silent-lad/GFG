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

Node *reverse(Node *head)
{
    Node *iter = head;
    Node *prev = NULL;
    Node *curr = head;
    while (iter->next == NULL)
    {
        iter = curr->next;
        curr->next = prev;
        prev = curr;
        curr = iter;
    }
    // iter->next = prev;
    return iter;
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);
    Node *fourth = new Node(14);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    head = reverse(head);
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}