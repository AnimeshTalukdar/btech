#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

static int k=1;
class point{
public: double X,Y,Z;
point ()
{
cin>>X>>Y>>Z;
}

double distance(point a,point b)
{
return (sqrt((double)((a.X-b.X)*(a.X-b.X)+(a.Y-b.Y)*(a.Y-b.Y)+(a.Z-b.Z)*(a.Z-b.Z))));
}
};

class wd 
{
public:
point *p;
int uid ;
int range;
wd()
{
cout<<"Enter the location of wireless device "<<k++<<" in x y z  format:"<<endl;
p= new point ();
cout<<"Enter uid:"<<endl;
cin>>uid;
cout<<"Enter Range:"<<endl;
cin>>range;
}
double distance ( wd a,wd b)
{
return a.p->distance(*a.p,*b.p);
}
};

int main()
{
wd arr[10];
float a[10][10];
for(int i=0;i<10;i++)
{
for(int j=0;j<10;j++)
{
a[i][j]=0;
}
}
for(int i=0;i<10;i++)
{
for(int j=0;j<10;j++)
{
int k=arr[i].distance(arr[i],arr[j]);
if(k <arr[i].range&&k<arr[j].range)
{
a[i][j]=1;
}
}
}

for(int i=0;i<10;i++)
{
cout<<"Neighbors of "<<arr[i].uid<<" : "<<endl;
for(int j=0;j<10;j++)
{
if(a[i][j]==1&&i!=j)
cout<<arr[j].uid<<endl;
}
}
return 0;
}
