#include<iostream>
using namespace std;
class Text
{
private:
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
    string get_text_style()
    {
        return this->font_style;
    }
    int get_text_size()
    {
        return this->size;
    }
    string get_text_color()
    {
        return this->color;
    }
    string get_text_data()
    {
        return this->data;
    }
    void set_text_style( string text_style)
    {
        this->font_style=text_style;
    }
    void set_text_size( int text_size)
    {
       this->size=text_size;
    }
    void set_text_color( string text_color)
    {
       this->color=text_color;
    }
    void set_text_data(string text_data)
    {
        this->data=text_data;
    }
};//end class Text


class Box
{
private:
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
    void set_box_width(int box_width)
    {
        this->width=box_width;
    }
    void set_box_height(int box_height)
    {
        this->height=box_height;
    }
    void set_box_border_color( string box_border_color)
    {
        this->border_color=box_border_color;
    }
    int get_box_width()
    {
        return this->width;
    }
    int get_box_height()
    {
        return this->height;
    }
    string get_box_border_color()
    {
        return this->border_color;
    }
};//end class Box

class TextBox
{
protected:
    Text text;
    Box box;
public:
    TextBox(Text rec_text, Box rec_box)
    {
        text=rec_text;
        box=rec_box;
    }
   /* TextBox(string f_style, int text_size, string text_color, string data, int b_width, int b_height, string b_color, Text rec_text, Box rec_box)
    :Text(f_style,text_size,text_color,data), Box(b_width, b_height, b_color)
    {
        text=rec_text;
        box=rec_box;
    } */
    void setTextBox(string f_style, int text_size, string text_color, string data, int b_width, int b_height, string b_color)
    {
        text.set_text_style(f_style);
        text.set_text_size(text_size);
        text.set_text_color(text_color);
        text.set_text_data(data);
        box.set_box_width(b_width);
        box.set_box_height(b_height);
        box.set_box_border_color(b_color);
    }//end setTextBox
    void printTextBox()
    {
        cout<<"Text Box has the following properties"<<endl;
        cout<<"Font Style: "<<text.get_text_style()<<endl;
        cout<<"Font Size: "<<text.get_text_size()<<endl;
        cout<<"Font Data: "<<text.get_text_data()<<endl;
        cout<<"Box width: "<<box.get_box_height()<<endl;
        cout<<"Box height: "<<box.get_box_height()<<endl;
        cout<<"Box Border Color : "<<box.get_box_border_color()<<endl;
    }//end printTextBox()


};//end

int main(void)
{
    Text text;
    Box box;
    TextBox textbox(text,box);
    textbox.printTextBox();

    return 0;
}
