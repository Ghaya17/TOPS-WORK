//Define a class to represent a bank account. Include the following members:
#include<iostream>
#include<string.h>
using namespace std;
class bankaccount {
    private:
string depositername, accounttype;
int accountnum;
double balance;
public:
 void assignValues() {
        cout << "Enter depositor's name: ";
        getline(cin, depositername);
        
        cout << "Enter account number: ";
        cin >> accountnum;
        
        cout << "Enter account type (Savings/Current): ";
        cin >> accounttype;
        
        cout << "Enter initial balance: ";
        cin >> balance;

        cout << "Account successfully created!" << endl;
    }
void deposit(double amount){
if(amount>100){
    balance+=amount;
    cout<<"Deposit successfull. New balace:$"<<balance<<endl;
}

else{
    cout<<"Invalid Amount"<<endl;
}



}

void withdraw(double amount){
if (amount >100 && amount<=balance){
    balance-=amount;
    cout<<"Wthdrawal successfull. Remaining balance:$"<<balance<<endl;
}
else if(amount > balance){
    cout<<"Insufficient funds"<<endl;
}
else{
    cout<<"Invalid amount"<<endl;
}

}
 void display() {
    
        cout << "Depositor Name: " << depositername << endl;
        cout << "Current Balance: $" << balance << endl;
    }

};

int main(){
bankaccount acc;
acc.assignValues();
acc.display();


double depositmoney;
cout<<"Enter amount to deposit:";
cin>>depositmoney;
acc.deposit(depositmoney);

double withdrawmoney;
cout<<"Enter amount to withdraw:";
cin>>withdrawmoney;
acc.withdraw(withdrawmoney);

acc.display();


}