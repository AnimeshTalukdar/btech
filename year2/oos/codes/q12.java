import java.util.Scanner;
class Account{
    int accountNumber;
    String holderName;
    double balance;
    Account(int acno,String hname,double b){
        accountNumber = acno;
        holderName = hname;
        balance = b;
    }
    int getAccountNumber(){
        return accountNumber;
    }
    String get_holder_name (){
        return holderName;
    }
    double get_balance(){
        return balance;
    }
    void set_balance(int balance){
        this.balance= balance;
    }
    void print_details(){
        System.out.println("Account Number: " + getAccountNumber());
        System.out.println("Holder Name: " + get_holder_name());
        System.out.println("Balance: " + get_balance());
    }

}
class SavingsAccount extends Account{ 
    double interestRate;
    SavingsAccount(int acno,String hname,double b,double interestrate){
        super(acno,hname,b);
        this.interestRate=interestrate;
    }
    double calculateYearlyInterest(){
        return balance*interestRate/100;
    }
    void print_details(){
        System.out.println("Account Type: " + "Savings Account");
        super.print_details();
        System.out.println("Interest Rate: " + interestRate);
        System.out.println("Yearly Interest: " + calculateYearlyInterest());
    }
}
class CurrentAccount extends Account{
    CurrentAccount(int acno,String hname,double b){
        super(acno,hname,b);

    }
    void print_details(){
        System.out.println("Account Type: " + "Current Account");
        super.print_details();
    }
}
class Manager{
    Account[] list_account = new Account[1000];
    int index = 0;
    void add_savings_account(int acno,String hname,double b,double interestrate){
        list_account[index]= new SavingsAccount(acno,hname,b,interestrate);
        index+=1;
    }
    void add_current_account(int acno , String hname,double b){
        list_account[index]= new CurrentAccount(acno,hname,b);
        index+=1;
    }
}
public class q12{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        Manager mn = new Manager(); 
        int t;
        System.out.println("Enter number of account");
        t = sc.nextInt();
        for(int i = 0 ;i< t;i++){
            System.out.println("Enter type of account 1 Savings 2 Current");
            int type = sc.nextInt();
            System.out.println("Enter acno, holdername, balance");
            int acno = sc.nextInt();
            String hn = sc.nextLine();
            sc.nextLine();
            double bal = sc.nextDouble();

            if(type == 1){
                System.out.println("Enter interest Rate");
                double ir = sc.nextDouble();
                mn.add_savings_account(acno,hn,bal,ir);
            }
            else{
                mn.add_current_account(acno,hn,bal);
            }

        }
        System.out.println("Printing Details");
        for(int i = 0 ;i< t;i++){
            mn.list_account[i].print_details();
        }

    }


}
