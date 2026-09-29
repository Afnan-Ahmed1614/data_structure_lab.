
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 11;
    second->data = 12;
    third->data = 13;

    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* current = head;

    cout << "\nList of patients in Waiting: ";

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    cout << "\n" << head->data << " is currently being served.";


    Node* newNode = new Node();

    newNode->data = 14;
    newNode->next = NULL;

    cout <<"\nNew Patient id: "<< newNode->data;

    current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;

    current = head;

    cout << "\nNew Data: ";

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

    current = head;

    cout << "\nUpdated Waiting List: ";

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}

