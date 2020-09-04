#include <bits/stdc++.h>

#define MAX 10
using namespace std;

int cqueue[MAX];
int front = -1;
int rear = -1;

void insert(int data){
    if((front == 0 && rear == MAX-1) || (front == rear+1)){
        cout << "Queue Overflow" << endl;
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
    }
    else{
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear + 1;
    }
    cqueue[rear] = data;
}

void del(){
    if(front == -1){
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Element deleted from queue is : " << cqueue[front] << endl;
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        if(front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}

void display(){
    int front_pos = front;
    int rear_pos = rear;
    if(front == -1){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue element" << endl;
    if(front_pos <= rear_pos){
        while(front_pos <= rear_pos){
            cout << cqueue[front_pos] << endl;
            front_pos = front_pos + 1;
        }
    }
    else
    {
        while(front_pos <= MAX-1){
            cout << cqueue[front_pos] << endl;
            front_pos = front_pos + 1;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            cout << cqueue[front_pos] << endl;
            front_pos++;
        }
    }
    cout << endl;
}
int main()
{
	int choice,item;
	do
	{
		cout << "1.Insert" << endl;
		cout << "2.Delete" << endl;
		cout << "3.Display" << endl;
		cout << "4.Quit" << endl;

		cout << "Enter your choice: " << endl;
		cin  >> choice;

		switch(choice)
		{
			case 1 :
				cout << "Input the element for insertion in queue : " << endl;
				cin >> item;

				insert(item);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				cout << "Wrong Choice" << endl;
		}
	}while(choice!=4);
	
	return 0;
}