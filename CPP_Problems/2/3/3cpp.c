#include <iostream>
using namespace std;

// define the class
class Stack
{
    // declare the private attributes
private:
    int* arr; // pointer to an array to store the stack elements
    int top; // variable to mark the top index of the stack
    int capacity; // variable to store the capacity of the array
    // declare the public methods
public:
    // constructor to initialize the stack in case size not passed
    Stack()
    {
        // allocate memory for the array ( default size)
        arr= new int[10];
        // set the top index to -1
        top = -1;
        // set the capacity to the given size
        capacity = 10;

    }
    // copy constructor
    Stack( Stack obj)
    {
        this->capacity = obj.capacity();
        // allocate memory for the array ( default size)
        arr= new int[this->capacity];
        strcpy(this->arr, obj.arr);
        // set the top index to -1
        this->top =obj.top;
        // set the capacity to the given size


    }


    // constructor to initialize the stack
    Stack(int size)
    {
        // allocate memory for the array
        arr = new int[size];
        // set the top index to -1
        top = -1;
        // set the capacity to the given size
        capacity = size;
    }
    // destructor to delete the stack
    ~Stack()
    {
        // delete the array
        delete[] arr;
    }
    // method to push an element to the stack
    void push(int x)
    {
        // check if the stack is full
        if (top == capacity - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            // increment the top index
            top++;
            // store the element in the array
            arr[top] = x;
        }//end else

    }//end push
    // method to pop an element from the stack
    int pop()
    {
        // check if the stack is empty
        if (top == -1)
        {
            // print a message
            cout << "Stack Underflow" << endl;
            // return -1 to indicate an error
            return -1;
        }
        else
        {
            // store the top element in a variable
            int temp = arr[top];
            // decrement the top index
            top--;
            // return the top element
            return temp;
        }
    }
    // method to peek the top element of the stack
    int peek()
    {
        // check if the stack is empty
        if (top == -1)
        {
            // return -1 to indicate an error
            return -1;
        }
        else
        {
            // return the top element
            return arr[top];
        }
    }
    // method to check if the stack is empty
    bool isEmpty()
    {
        // return true if the top index is -1, false otherwise
        return (top == -1);
    }
    // method to display the stack elements
    void display()
    {
        // check if the stack is empty
        if (top == -1)
        {
            // print a message
            cout << "Stack is empty" << endl;
        }
        else
        {
            // print the stack elements from top to bottom
            cout << "Stack: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }//end display()
};//end class stack

int main()
{
    // get the size of stack by user
    int user_input;
    cout<<"Enter size of stack: ";
    cin>>user_input;
    // create an object of the class with an initial size of 5
    Stack s(user_input);
    // push some elements to the stack
    while(1)
    {

    }
    // display the stack
    s.display();
    // push another element to the stack
    s.push(60);
    // display the stack
    s.display();
    // pop some elements from the stack
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;
    // display the stack
    s.display();
    // peek the top element of the stack
    cout << "Top element: " << s.peek() << endl;
    // check if the stack is empty
    cout << "Is the stack empty? " << s.isEmpty() << endl;
    return 0;
}
