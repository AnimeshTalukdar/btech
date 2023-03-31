class sumfactors
{
public static void main(String args[])
{
int n = Integer.parseInt(args[0]);
int sum=0;
for(int i=1;i<n;i++)
{
if (n%i==0)
sum=sum+i;
}
System.out.println("Sum of all factors is "+sum);
if(sum==n)
System.out.println("Perfect Number");
else
System.out.println("Not Perfect Number");
}
}
