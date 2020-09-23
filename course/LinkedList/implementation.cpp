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

    head->next = first;
    first->next = second;

    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}