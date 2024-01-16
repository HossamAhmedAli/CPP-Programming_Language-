#include<iostream>
using namespace std;
class Text
{
protected:
    string font_style;
    int size;
    string color;
    string data;
public:
    Text()
    {
        this->font_style="Arial";
        this->size=1;
        this->color="Black";
        this->data="Unknown!";
    }
    Text(string f_style, int text_size, string text_color, string data)
    {
        this->font_style=f_style;
        this->size=text_size;
        this->color=text_color;
        this->data=data;
    }//end constructor
};//end class Text

class Box
{
protected:
    int width;
    int height;
    string border_color;
public:
    Box()
    {
        this->width=0;
        this->height=0;
        this->border_color="Black";
    }
    Box(int b_width, int b_height, string b_color)
    {
        this->width=b_width;
        this->height=b_height;
        this->border_color=b_color;
    }
};//end class Box

class TextBox: public Text, public Box
{
public:
    TextBox():Text(),Box()
    {

    }
    TextBox(string f_style, int text_size, string text_color, string data, int b_width, int b_height, string b_color)
    :Text(f_style,text_size,text_color,data), Box(b_width, b_height, b_color)
    {

    }
    void setTextBox(string f_style, int text_size, string text_color, string data, int b_width, int b_height, string b_color)
    {
        this->font_style=f_style;
        this->size=text_size;
        this->color=text_color;
        this->data=data;
        this->width=b_width;
        this->height=b_height;
        this->color=b_color;
    }//end setTextBox
    void PrintTextBox()
    {
        cout<<"Text Box has the following properties"<<endl;
        cout<<"Font Style: "<<this->font_style;
        cout<<"     Font Size: "<<this->size;
        cout<<"     Font Data: "<<this->data<<endl;
        cout<<"Box width: "<<this->width;
        cout<<"          Box height: "<<this->height;
        cout<<"    Box Border Color : "<<this->color<<endl;
    }

};//end class TextBox
int main(void)
{
    TextBox ob;
    cout<<"result of Constructor values :"<<endl;
    ob.PrintTextBox();
    ob. setTextBox("Times New Roman", 4, "Green", "Hello World!!!", 20, 8, "Yellow");
    cout<<"result after entering data :"<<endl;
    ob.PrintTextBox();


    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    return 0;

}

