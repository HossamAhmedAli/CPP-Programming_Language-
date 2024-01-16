#include <iostream>
#include <cstring>
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
    Stack( const Stack &obj)
    {
        this->capacity = obj.capacity;
        // allocate memory for the array ( default size)
        arr= new int[this->capacity];
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
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << "  ";
            }
            cout << endl;
        }
    }//end display()
    friend ostream& operator<<(ostream& out ,const Stack& s);
};//end class stack
ostream& operator<<(ostream& out,const Stack& s)
    {
        out << "Stack Data: \n";
        for (int i=0; i<=s.top; i++)
            out << s.arr[i]<<endl;
        return out;
    }
int main()
{
    // create an object of the class with an initial size of 5
    Stack s(8);
    // push some elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s;

    return 0;
}
