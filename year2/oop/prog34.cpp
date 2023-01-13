#include<iostream>
using namespace std;
class IntArray{
int n;
int *arr;
public:
IntArray(int n1 = 0)
{
n = n1;
arr= new int[n];
}
int& operator[] (int position)
{

return arr[position];
}
friend ostream &operator<<(ostream &os, IntArray &f);
};
ostream &operator << (ostream &os, IntArray &f)
{
for(int i = 0; i<f.n;i++)
{
os<< f.arr[i]<<"  ";
}
return os;
}
int main() {
IntArray i(10); 
for(int k = 0; k < 10; k++) 
i[k] = k;
cout << i; 
return 0;
}
