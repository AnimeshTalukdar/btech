class reversenumber{
static String reversenum(int n)
{
if (n!=0)
return Integer.toString(n%10)+reversenum(n/10);
return "";
}
public static void main(String args[])
{
int n = Integer.parseInt(args[0]);
String s=reversenum(n);
System.out.println(s);
}
}
