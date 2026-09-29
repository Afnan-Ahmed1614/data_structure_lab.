
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

    cout << "\nShopping Cart: ";

    
    while (current != NULL)
    {
        cout << "P" << current->data << " ";
        current = current->next;
    }

    Node* newNode = new Node();

    newNode->data = 14;
    cout <<"\nNew Product: "<< newNode->data;
    newNode->next = NULL;

    current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;

    current = head;

    cout << "\n\nAfter Adding Product: ";

    while (current != NULL)
    {
        cout << "P" << current->data << " ";
        current = current->next;
    }

    int removeID = 13;

    cout << "\nRemove Product: P" << removeID;


    if (head->data == removeID)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        current = head;

        while (current->next != NULL && current->next->data != removeID)
        {
            current = current->next;
        }

        if (current->next != NULL)
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    current = head;

    cout << "\nUpdated Cart: ";

    while (current != NULL)
    {
        cout << "P" << current->data << " ";
        current = current->next;
    }


    return 0;
}


