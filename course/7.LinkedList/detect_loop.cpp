#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    int data;
    Node *next;
    bool visited;
    Node(int x)
    {
        data = x;
        next = NULL;
        visited = false;
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
    third->next = fourth;

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->visited)
        {
            cout << "Looped" << endl;
            return 0;
        }
        temp->visited = true;
        cout << temp->data << endl;
        temp = temp->next;
    }
}