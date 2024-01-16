#include <iostream>
#include <cstring>
using namespace std;

// define the class
template <class T>
class Stack
{
    // declare the private attributes
private:
    T* arr; // pointer to an array to store the stack elements
    int top; // variable to mark the top index of the stack
    int capacity; // variable to store the capacity of the array
    // declare the public methods
public:
    // constructor to initialize the stack in case size not passed
    Stack()
    {
        // allocate memory for the array ( default size)
        arr= new T[10];
        // set the top index to -1
        top = -1;
        // set the capacity to the given size
        capacity = 10;

    }
    // copy constructor
    Stack( T &obj)
    {
        this->capacity = obj.capacity;
        // allocate memory for the array ( default size)
        arr= new T[this->capacity];
        for(int iteration=0; iteration<obj.capacity; iteration++)
            arr[iteration]=obj.arr[iteration];
        // set the top index to -1
        this->top =obj.top;
        // set the capacity to the given size


    }


    // constructor to initialize the stack
    Stack(int size)
    {
        // allocate memory for the array
        arr = new T[size];
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
    void push(T x)
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
    T pop()
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
    T peek()
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
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << "  ";
            }
            cout << endl;
        }
    }//end display()
};//end class stack

int main()
{
    // create an object of the class with an initial size of 5
    Stack<int> s(8);
    // push some elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Stack 1 content: ";
    // display the stack
    s.display();
    // creating another stack based on the old stack
    Stack <int> stack_2_(s);

    cout<<"Stack 2 content: ";
    // display the stack
    stack_2_.display();

    cout<<"stack 1 after pushing 100 into stack1 "<<endl;
    s.push(100);
    // display the stack
    s.display();

    cout<<"stack 2 after pushing 100 into stack 1"<<endl;
    // display the stack
    stack_2_.display();

    return 0;
}
