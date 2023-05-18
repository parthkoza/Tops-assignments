/*Assume that a bank maintains two kinds of accounts for customer, one called as saving account and other as current accounts 
the savings account provides Simple interest and withdraw facilities but no cheque book facility. 
The current account provides cheque book facility but no interest. 
Current account holders should maintain a minimum balance and if the balance falls below this level a service charges is imposed 
Create a class account that stores customer name, account number and type of account. 
From this derive classes curr_acc and sav_acct to make them more specific to their requirements 
Include necessary member functions in order to achieve the following tasks 
a. Accepts deposit from a customer and update balance. b. Display the balance. c. Compute and deposit interest. 
d. Permit withdraws and updates the balance. e. Check for the minimum balance, impose penalty, necessary and update the balance.*/

#include<iostream>
using namespace std;

class account
{
	public:
		string cus_name;
		int acc_num,acc_type,balance,amt;
		void get_cus()
		{
		cout<<"\nEnter the name of customer: ";
		cin>>cus_name;
		cout<<"Enter account number: ";
		cin>>acc_num;
		cout<<"Enter the type of account:1 for Savings account and 2 for Current account\n";
		cin>>acc_type;
		cout<<"Enter your balance:";
		cin>>balance;
		}
		void set_cus()
		{
			cout<<"\nCustomer Name: "<<cus_name<<"\nAccount Number: "<<acc_num<<endl;
			if(acc_type==1)
			{
				cout<<"Account type = Savings Account"<<endl;
			}
			else
			{
				cout<<"Account type = Current Account"<<endl;
			}
		}
		void display()
		{
			cout<<"Your account balance is = "<<balance<<endl;
		}
		void deposit()
		{
			cout<<"\nEnter amount to be deposited: ";
			cin>>amt;
			balance=balance+amt;
			display();
		}
		void withdraw()
		{
			cout<<"\nEnter amount you want to withdraw: ";
			cin>>amt;
			if(amt<balance)
			{
			balance=balance-amt;
			}
			else
			{
				cout<<"Insufficient balance!!"<<endl;
			}
			display();
		}
		
 }; 
 class curr_acc: public account
 {
 	public:
		void panelty()
		{
			if(balance<200 && acc_type==2)
				{
					balance=balance-20;
					cout<<"Your account balance is too low, so panelty is imposed"<<endl;
					display();
				}
			else
			{
				cout<<"No panelty"<<endl;
			}
		}
 };
class sav_acc: public account
{
	public:
		int time;
		void interest()
		{
			cout<<"Enter the time interval in years: ";
			cin>>time;
			balance=balance+(balance*5*time/100);
			display();
		}
};
int main()
{
	sav_acc hjp;
	curr_acc hjp1;
	hjp.get_cus();
	hjp.set_cus();
	hjp.deposit();
	hjp.interest();
	hjp1.get_cus();
	hjp1.set_cus();
	hjp1.withdraw();
	hjp1.panelty();
	return 0;
}
