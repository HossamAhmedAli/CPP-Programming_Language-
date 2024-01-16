/*
    - Can you make the methods push and pop private methods? why?
    Ans:No.. it does not make any sense because these two methods are used as an interface to deal with the stack.

    - Can you make the methods isEmpty and isFull private methods? Why ?
    Ans: yes, this is a good practice since the user/developer must not use them in the main code.
         only the methods inside class should to use them.
*/
#include <iostream>
using namespace std;

// define the class
class Stack {
  // declare the private attributes
  private:
    int arr[10]; // array to store the stack elements
    int top;  // variable to mark the top index of the stack
  // declare the public methods
  public:
    // constructor to initialize the stack
    Stack() {
      top = -1; // set the top index to -1
    }
    // method to push an element to the stack
    void push(int x) {
      // check if the stack is full
      if (top == 9) {
        // print a message
        cout << "Stack Overflow" << endl;
      }
      else {
        // increment the top index
        top++;
        // store the element in the array
        arr[top] = x;
      }
    }
    // method to pop an element from the stack
    int pop() {
      // check if the stack is empty
      if (top == -1) {
        // print a message
        cout << "Stack Underflow" << endl;
        // return -1 to indicate an error
        return -1;
      }
      else {
        // store the top element in a variable
        int temp = arr[top];
        // decrement the top index
        top--;
        // return the top element
        return temp;
      }
    }
    // method to peek the top element of the stack
    int peek() {
      // check if the stack is empty
      if (top == -1) {
        // return -1 to indicate an error
        return -1;
      }
      else {
        // return the top element
        return arr[top];
      }
    }
    // method to check if the stack is empty
    bool isEmpty() {
      // return true if the top index is -1, false otherwise
      return (top == -1);
    }
    // method to display the stack elements
    void display() {
      // check if the stack is empty
      if (top == -1) {
        // print a message
        cout << "Stack is empty" << endl;
      }
      else {
        // print the stack elements from top to bottom
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
          cout << arr[i] << " ";
        }
        cout << endl;
      }
    }
};



// main function
int main() {
  // create an object of the class
  Stack s;
  // push some elements to the stack
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
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
}//end main()
