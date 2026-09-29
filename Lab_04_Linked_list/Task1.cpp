
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

    head->data = 253;
    second->data = 254;
    third->data = 255;

    head->next = second;
    second->next = third;
    third->next = NULL;

    Node* current = head;

    cout << "\nStudents Initial Data: ";

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }


    Node* newNode = new Node();
    
	newNode->data = 257;
	cout<<"\nNew Student Roll Number:"<<newNode->data ;
    newNode->next = NULL;

    current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;

    current = head;

    cout << "\nNEW DATA ";

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    
    
    
    int sv = 257;
    current = head;
    bool f = false;
    
    while (current != NULL){
    	if(current->data == sv){
    		f = true;
    		break;
		}
		current = current->next;
    	
	}
	
	if (f){
		cout<<"\n\n"<<sv<<" is found in the data.";
	}
	else
		cout<<"\n\nData not found.";
    

    return 0;
}


