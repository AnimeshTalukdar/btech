#include <iostream>
using namespace std;

static int nac=1;

class SavingsAccount {
char *name;
int acno;
int balance;
SavingsAccount(char *n="",int b=1000)
{
acno = nac++;
balance = b;
name =n;
}
void withdraw(int amount)
{
if(balance - amount <1000)
{
cout<<"Insufficient balance"<<endl;
}
else
{
balance = balance - amount;
cout<<"Withrawal successful"<<endl;
}
}
void deposit(int amount)
{
cout<<"Deposit successful"<<endl;
balance = amount + balance;
}

};
