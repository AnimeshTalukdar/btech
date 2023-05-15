 #include<iostream>
#include<math.h>
using namespace std;
class point{
public: double X,Y,Z;
point ()
{
X=0;
Y=0;
Z=0;
}
point (double x,double y,double z)
{
X=x;
Y=y;
Z=z;
}
 void set (double x,double y,double z)
{
X=x;
Y=y;
Z=z;
}

double distance(point a,point b)
{
return (sqrt((double)((a.X-b.X)*(a.X-b.X)+(a.Y-b.Y)*(a.Y-b.Y)+(a.Z-b.Z)*(a.Z-b.Z))));
}
};






int main()
{
point P;
point Q;
cout<<"Enter the coordinates of first point "<<endl;
double x,y,z;
cin>>x>>y>>z;
P.set(x,y,z);
cout<<"Enter the coordinates of second poitn "<<endl;
cin>>x>>y>>z;
Q.set(x,y,z);
int dis=P.distance(P,Q);
cout<<"Distance is "<<dis<<endl;
return 0;
}
