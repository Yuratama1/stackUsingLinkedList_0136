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
    bool isEmpety(){
        return top == NULL; // return true if the top pointer is null, indicating an empty stack
    }
};