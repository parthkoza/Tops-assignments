
/*Define a class to represent a bank account. Include the following members: Data Member: -
Name of the depositor - Account Number - Type of Account - Balance amount in the 
account Member Functions - To assign values - To deposited an amount - To withdraw an 
amount after checking balance - To display name and balance.*/


#include<iostream>
using namespace std;

 class bank_account
{
	public:
	string name, type_account;
	int accountnumber,balance;
		void member()
		{
			cout<<"Name of the depositor : ";
			cin>>name;
			cout<<"Account number : ";
			cin>>accountnumber;
			cout<<"Type of Account  : ";
			cin>>type_account;
			cout<<"Balance amount in the account Member: ";
			cin>>balance;
					
		}
		void display()
		{
		cout<<"\n\n\nname is :"<<name<<"\nAccount number is :"<<accountnumber<<"\nType of Account is :"<<type_account<<"\nBalance amount in the account Member is: "<<balance<<endl;			
		}
		void deposit()
		{
			int amt;
			cout<<"Enter the amount to deposit :";
			cin>>amt;
			balance=balance+amt;
			cout<<"Your Amount deposit successfully !!!\nYour new balance is : "<<balance<<endl;
			
		}
		void withdraw()
		{
		int amt1;
			cout<<"\n\n\nEnter the amount you wan to  withdraw :";
			cin>>amt1;
		
			if(balance>=amt1)
			{
				balance=balance-amt1;
				cout<<"\nYour remaining balance is : "<<balance<<endl;
			}
			else
			{
			cout<<"Your bank account does not have sufficiant balance!!"<<endl;	
			}	
		}
};



int main()
{
	int choice;
	bank_account member1;
	member1.member();
	cout<<"\n\n\n1.Your information\n2.Deposit\n3.Withdraw\n\nEnter your choice :";
	cin>>choice;
	if(choice==1) member1.display();
    else if(choice==2)	member1.deposit();
	else if(choice==3)	member1.withdraw();
	return 0;
}
