
class fibonnaci
{
public static void main(String args[])
{
int n= Integer.parseInt(args[0]);
int a=0,b=1;
if(n>0)
System.out.print("0 ");
//if(n>1)
//System.out.print("1 ");
for(int i=1;i<n;i++)
{
b=a+b;
System.out.print(b+" ");
int t=a;
a=b;
b=t;
}
System.out.println();
}
}
