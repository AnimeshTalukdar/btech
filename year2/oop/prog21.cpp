#include <iostream>
using namespace std;


class Vector {
public :
int * arr;
int size;

Vector( int k)
{
size =k;
arr= new int [k];
cout<<"Enter the elements of the array : " <<endl;
for ( int i=0;i<k;i++)
cin>>arr[i];
}

Vector addition ( Vector a,Vector b)
{
Vector sum = new Vector(a.size);
sum
