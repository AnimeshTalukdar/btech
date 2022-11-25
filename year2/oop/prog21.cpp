 class Vector
{
int n;
int cc;
int *arr;
public:
Vector(int n=2147483647)
{
arr= new int [n];
cc=0;
}

int size()
{
return cc;
}
void push(int k)
{
arr[cc++]=k;
}

int get(int i)
{
return arr[i];
}

void set(int i,int k)
{
arr[i]=k;
if(i>cc)cc=i;
}

void add(Vector a,Vector b)
{
for(int i=0;i<b.size();i++)
{
a.set(i,a.get(i)+b.get(i));
}
}

void sub(Vector a,Vector b)
{
for(int i=0;i<b.size();i++)
{
a.set(i,a.get(i)-b.get(i));
}
}

bool equalityy(Vector a,Vector b)
{
bool con=true;
for(int i=0;i<b.size();i++)
{
if(a.get(i)!=b.get(i))
{
con=false;
}
}
return con&&(a.size()==b.size());
}
bool less(Vector a,Vector b)
{
int suma=0,sumb=0;
for(int i=0;i<a.size();i++)
{
suma=suma+a.get(i);
}
for(int i=0;i<b.size();i++)
{
sumb=sumb+b.get(i);
}
return suma<sumb;
}
bool more(Vector a,Vector b)
{
int suma=0,sumb=0;
for(int i=0;i<a.size();i++)
{
suma=suma+a.get(i);
}
for(int i=0;i<b.size();i++)
{
sumb=sumb+b.get(i);
}
return suma>sumb;                         
}


};

