class stack
{
int arr[];
int p;
int size;
stack(int size)
{
p=0;
this.size=size;
arr=new int[size];
//for(int i =0 ;i<size;i++)
//System.out.println(arr[i]);
}
void push(int n)
{
if(p==size)
{
System.out.println("Stack full");
return;
}
arr[p]=n;
p+=1
}
int pop()
{
if (p==0)
{
System.out.println("Empty Stack");
return ;
}
p-=1;

}




public static void main(String args[])
{
stack ob=new stack(12);
}
}
