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
    Node *fourth = new Node(14);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = first;

    Node *temp = head;
    Node *dummy = new Node(0);
    while (temp->next != NULL)
    {
        if (temp->next == dummy)
        {
            cout << "Looped" << endl;
            return 0;
        }
        cout << temp->data << endl;
        Node *prev = temp;

        temp = temp->next;
        prev->next = dummy;
    }
}