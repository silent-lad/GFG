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

Node *findIntersection(Node *head1, Node *head2)
{
    unordered_set<Node *> set;
    Node *temp = head1;
    while (temp->next != NULL)
    {
        set.insert(temp);
        temp = temp->next;
    }
    set.insert(temp);

    Node *temp = head2;
    while (temp->next != NULL)
    {
        if (set.count(temp))
        {
            return temp;
        }
        temp = temp->next;
    }
}

Node *findIntersection(Node *head1, Node *head2)
{
    unordered_set<Node *> set;
    Node *temp = head1;
    while (temp->next != NULL)
    {
        set.insert(temp);
        temp = temp->next;
    }
    set.insert(temp);

    Node *temp = head2;
    while (temp->next != NULL)
    {
        if (set.count(temp))
        {
            return temp;
        }
        temp = temp->next;
    }
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