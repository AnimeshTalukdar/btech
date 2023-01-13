#include<iostream>
using namespace std;

class Table { 
int rows,columns;
int* table;
public:
Table (int rows,int columns)
{
this->rows = rows;
this->columns=columns;
table = new int [rows*columns];
}


//friend int operator [](Table &t,int i)
 
friend istream& operator >>(istream &is, Table &t)
{
for(int i=0;i<t.rows;i++)
{
for(int j=0;j<t.columns;j++)
{
is>>t.table[i*t.columns+j];
}
}
return is;
}
};


int main()
{
Table t(1,2);
cin>>t;
return 0;
}
