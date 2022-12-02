#include <iostream>
using namespace std;

int rate=3;
static int nac=1;

class SavingsAccount {
char *name;
int acno;
int balance;

public:
SavingsAccount(char *n="",int b=1000)
{
acno = nac++;
balance = b;
name =n;
}
int getbalance()
{
return balance;
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

int main() { 
SavingsAccount *a[100]; 
for(int i=0;i<100;i++) {

}
}
