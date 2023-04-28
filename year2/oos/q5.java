import java.util.*;

class BankAccount
{
int AccountNumber;
double balance;
String ownerName;
BankAccount(int acno,double bl,String nae)
{
AccountNumber=acno;
balance=bl;
ownerName=nae;
}
void print()
{
System.out.println("ACno:"+AccountNumber+"    Balance:" + balance+"     Name: "+ownerName);
}

double add(double amt)
{
System.out.println("Adding "+amt);
balance=balance+amt;
return balance;
}

double subtract(double amt)
{
if (amt>balance){
System.out.println("Insufficient balance");
return balance;
}
balance-=amt;
return balance;
}



}

class AccountManager
{
BankAccount arr[]= new BankAccount[1000];
int p=-1;
int create(double amt,String name)
{
p+=1;
arr[p]=new BankAccount(p+1,amt,name);
return p+1;
}

void delete(int acno)
{
arr[acno-1]=null;
}

int deposit(int acno, double amt)
{
if (arr[acno-1]==null)
{
System.out.println("No account with this acno"+acno);
return -1;
}
arr[acno-1].add(amt);
return 0;
}
void printdetails() 
{ 
for(int i=0;i<1000;i++)
{
if(arr[i]!=null)
{
arr[i].print();
}
}
}
}

class Bank
{

public static void main(String args[]){
AccountManager ob = new AccountManager();
ob.create(1222,"a");
ob.create(212,"b");
ob.create(32342,"c");
ob.create(45323,"d");
ob.create(342423,"e");
ob.printdetails();
}

}
