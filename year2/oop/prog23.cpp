#include <string>
#include <iostream>

using namespace std;
class SavingsAccount {
private:
static int nextAccountNumber;
static double interestRate;
string name;
int accountNumber;
double balance;

public:
SavingsAccount()
{}
SavingsAccount(string name, double balance) :
name(name), accountNumber(nextAccountNumber++), balance(balance)
{
if (balance < 1000) {
cout << "Error: Minimum balance must be Rs. 1000" << endl;
exit(1);
}
}

static void setInterestRate(double rate) {
interestRate = rate;
}

void deposit(double amount) {
balance += amount;
}

void withdraw(double amount) {
if (balance - amount < 1000) {
cout << "Error: Minimum balance must be maintained" << endl;
return;
}
balance -= amount;
}

void addInterest() {
balance += balance * interestRate;
}

string getName() { return name; }
int getAccountNumber() { return accountNumber; }
double getBalance() { return balance; }
};

int SavingsAccount::nextAccountNumber = 1;
double SavingsAccount::interestRate = 0.03;

int main() {



SavingsAccount accounts[100];
for (int i = 0; i < 100; i++) {
accounts[i] = SavingsAccount(to_string(i+1), rand()%100000+1000);
}


SavingsAccount::setInterestRate(0.03);

double totalInterest = 0;
for (int i = 0; i < 100; i++) {
accounts[i].addInterest();
double interest = accounts[i].getBalance() * 0.03;
totalInterest += interest;
}

cout << "Total interest to be paid to all accounts in one year: Rs. " << totalInterest << endl;
return 0;
}
