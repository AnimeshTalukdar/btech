#include <iostream>
using namespace std;
void Strcpy (const char *c1, char *c2)
{
int i=0;
while (c1[i]!='\0')
{
c2[i]=c1[i];
i++;
}
}
int main()
{
cout<<"Enter string: ";
char s1[100];
cin>>s1;
char s2[100];
Strcpy(s1,s2);
cout<<endl<<"Copied string : "<<s2<<endl;
return 0;
} 
