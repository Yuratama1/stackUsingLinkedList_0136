#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(){
            next = NULL;
        }
};

//stack class
class stack{
    private:
        Node *top;// pointer to the top node of the stack

    public:
    stack(){
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation insert an element onto the top the stak
    int push(int value){
        Node *newnode = new Node();//1.alocation memeory for the new node
        newnode->data = value;  //2.assign value
        newnode->next = top; //3. set the next pointer of the new node the current
        top = newnode; //4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

    //IsEmpt operation: check if the stack is empty
    bool isEmpty(){
        return top == NULL; // return true if the top pointer is null, indicating an empty stack
    }

    //Pop operation : remove the topmost element from the stack
    void pop(){
        Node *temp = top; // create a temp pointer to the current top node
        if (isEmpty()){
            cout << "Stack is empty." << endl;
            return; //if the stack is empty, print a masage and return
        }
        cout << "popped value: " << temp->data << endl;
        top = temp->next; // update the top pointer to the next node
        temp = nullptr; //free the memeory of the poped node
    }

    // peek/Top operation : retrieve the value of the topmost elemnt without removing it
    void peek(){
        if (isEmpty()){
            cout << "List is Empty." << endl;
            return; //if the stack is empty, print a massage and return
        }
        else{
            Node *current = top;
            while (current != NULL){
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }//retrun the vale of the top node
    }
};

int main(){
    stack stack;

    int choice = 0;
    int value;

    while(choice != 4){
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice:";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value); //push the entered value onto the stack
                break;
            case 2:
                stack.pop(); // pop the topmost element from the stack
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                cout << "Exiting program." << endl;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
        cout << endl;
    }
    return 0;
}