#include<iostream>
using namespace std;
#include<windows.h>
void goto_row_colum(int row, int colum)
 {
     COORD c;
     c.X = colum;
     c.Y = row;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
 }


int  main (void)
{
  int row;
  int colum;
  int size ;
  int val;
  int k ;

  do
  {
      cout<<"please enter odd number : ";
      cin>>size;
  } while (size%2==0);

  row = 1 ;
  colum =(size + 1)/2 ;
  val= 1;
  do
  {
     goto_row_colum(row,colum*4);
     cout<<"   "<<val<<endl;
     for(k=1;k<=50000000;k++);
     if(val%size==0)
     {
         row++;
     }
     else{
        row--;
        colum--;
        if(row==0)row=size ;
        if(colum==0) colum=size;
     }
     val++ ;

  }while(val<=size*size);

}





