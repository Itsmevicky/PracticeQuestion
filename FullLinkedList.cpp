//Program of Single Linked list

#include<iostream>
#include<stdlib>

struct Node{
    int data;
    Node *link;
};

Node *createList(Node *head);

int main(){
    Node *head = NULL;
    int choice,data,item,pos;

    while(1){
        cout << "1.Create List\n";
        cout << "2.Display\n";
        cout << "3.Count\n";
        cout << "0.Exit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
                head = createList(head);
                break;
            case 2:
                display(head);
                break;
            case 0:
                exit(1);
            default:
                cout << "Wrong choice!\n";
        }//End of switch
    }//End of while
}//End of main

void display(Node *head){
    Node *temp;
    temp = head;
    if(temp == NULL){
        cout << "Linked list is empty.\n";
        return;
    }
    cout << "List is : ";
    while(temp != NULL){
        cout << temp->data;
        temp = temp->link;
    }
    cout << "\n\n";
}//End of display
