#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;
class account
{
        int accountnumber;
        char name[50];
        int deposit;
        char type;
public:
        void create_account();
        void show_account();
        void modify_account();
        void deposit_funds(int);
        void draw_funds(int);  
        void get_report();
        int get_accountnumber();    
        int get_funds();       
        char get_accounttype();
};       
 
void account::create_account()
{
        cout<<"\nEnter The account Number: ";
        cin>>accountnumber;
        cout<<"\nEnter The Name of The account Holder : ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"\nEnter account type (enter s - saving or c - credit): ";
        cin>>type;
        type=toupper(type);
        cout<<"\nEnter The Initial amount(500 or more for Saving and 1000 or more for current ): ";
        cin>>deposit;
        cout<<"\n\n\nAccount Created Successfully...";
}
 
void account::show_account()
{
        cout<<"\nAccount Number: "<<accountnumber;
        cout<<"\nAccount Holder Name: "<<name;
        cout<<"\nType of Account: "<<type;
        cout<<"\nBalance amount: "<<deposit;
}
 
void account::modify_account()
{
        cout<<"\nAccount Number: "<<accountnumber;
        cout<<"\nModify Account Holder Name: ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"\nModify Type of Account: ";
        cin>>type;
        type=toupper(type);
        cout<<"\nModify Balance amount: ";
        cin>>deposit;
}
 
void account::deposit_funds(int x)
{
        deposit+=x;
}     
 
void account::draw_funds(int x)
{
        deposit-=x;
}       
 
void account::get_report()
{
        cout<<accountnumber<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}
 
int account::get_accountnumber()
{
        return accountnumber;
}
 
int account::get_funds()
{
        return deposit;
}
 
char account::get_accounttype()
{
        return type;
}
 
void write_account();  
void display_sp(int);  
void modify_account(int);
void delete_account(int);
void display_all();            
void deposit_withdraw(int, int);
 
 
int main()
{
        char opt;
        int num;
        for(;;)
        {
                system("color 05");
                system("cls");
                 cout<<"\t\t\t\t*\t*";
 
  cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t*\t*";
 
 cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
                cout<<"\n\t\tPress 1 to Create New Account";
                cout<<"\n\t\tPress 2 to Deposit Funds";
                cout<<"\n\t\tPress 3 to Withdraw Funds";
                cout<<"\n\t\tPress 4 to Check Balance";
                cout<<"\n\t\tPress 5 to View All Account Holder";
                cout<<"\n\t\tPress 6 to Close an Account";
                cout<<"\n\t\tPress 7 to Modify an Account";
                cout<<"\n\t\tPress 8 to Exit the Program";
 cout<<"\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                cout<<"\n\t\tOption: ";
                cin>>opt;
                system("cls");
                switch(opt)
                {
                case '1':
                system("color 02");
                        write_account();
                        break;
                case '2':
                system("color 03");
                        cout<<"\n\n\tEnter The account No. : "; cin>>num;
                        deposit_withdraw(num, 1);
                        break;
                case '3':
                system("color 06");
                        cout<<"\n\n\tEnter The account No. : "; cin>>num;
                        deposit_withdraw(num, 2);
                        break;
                case '4':
                system("color 08");
                        cout<<"\n\n\tEnter The account No. : "; cin>>num;
                        display_sp(num);
                        break;
                case '5':
                system("color 9");
                        display_all();
                        break;
                case '6':
                system("color 10");
                        cout<<"\n\n\tEnter The account No. : "; cin>>num;
                        delete_account(num);
                        break;
                 case '7':
                 system("color 11");
                        cout<<"\n\n\tEnter The account No. : "; cin>>num;
                        modify_account(num);
                        break;
                 case '8':
                 system("color 04");
                        cout<<"\n\n\tThanks for using Bank Managemnt System";
                        break;
                 default :cout<<"Invalid Option\n";
                }
                cin.ignore();
                cin.get();             
                if(opt=='8')
                break;
        }
        return 0;
}
 
void write_account()
{
        account ac;
        ofstream outFile;
        outFile.open("account.dat",ios::binary|ios::app);
        ac.create_account();
        outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
        outFile.close();
}
 
void display_sp(int n)
{
        account ac;
        bool flag=false;
        ifstream inFile;
        inFile.open("account.dat",ios::binary);
        if(!inFile)
        {
                cout<<"File could not be open !! Press any Key...";
                return;
        }
        cout<<"\nBALANCE DETAILS\n";
 
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
        {
                if(ac.get_accountnumber()==n)
                {
                       ac.show_account();
                        flag=true;
                }
        }
        inFile.close();
        if(flag==false)
                cout<<"\n\nAccount number does not exist";
}
 
void modify_account(int n)
{
        bool found=false;
        account ac;
        fstream File;
        File.open("account.dat",ios::binary|ios::in|ios::out);
        if(!File)
        {
                cout<<"File could not be open !! Press any Key...";
                return;
        }
        while(!File.eof() && found==false)
        {
                File.read(reinterpret_cast<char *> (&ac), sizeof(account));
                if(ac.get_accountnumber()==n)
                {
                        ac.show_account();
                        cout<<"\n\nEnter The New Details of account: "<<endl;
                        ac.modify_account();
                        int pos=(-1)*static_cast<int>(sizeof(account));
                        File.seekp(pos,ios::cur);
                        File.write(reinterpret_cast<char *> (&ac), sizeof(account));
                        cout<<"\n\n\t Record Updated...";
                        found=true;
                  }
        }
        File.close();
        if(found==false)
                cout<<"\n\n Record Not Found ";
}
 
void delete_account(int n)
{
        account ac;
        ifstream inFile;
        ofstream outFile;
        inFile.open("account.dat",ios::binary);
        if(!inFile)
        {
                cout<<"File could not be open !! Press any Key...";
                return;
        }
        outFile.open("Temp.dat",ios::binary);
        inFile.seekg(0,ios::beg);
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
        {
                if(ac.get_accountnumber()!=n)
                {
                        outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
                }
        }
 
        inFile.close();
        outFile.close();
        remove("account.dat");
        rename("Temp.dat","account.dat");
        cout<<"\n\n\tRecord Deleted...";
}
 
void display_all()
{
        account ac;
        ifstream inFile;
        inFile.open("account.dat",ios::binary);
        if(!inFile)
        {
                cout<<"File could not be open !! Press any Key...";
                return;
        }
 
        cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
        cout<<"====================================================\n";
        cout<<"Account No.      Name           Type Balance\n";
        cout<<"====================================================\n";
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
        {
                ac.get_report();
        }
        inFile.close();
}
 
void deposit_withdraw(int n, int option)
{
        int amt;
        bool found=false;
        account ac;
        fstream File;
        File.open("account.dat", ios::binary|ios::in|ios::out);
        if(!File)
        {
                cout<<"File could not be open !! Press any Key...";
                return;
        }
        while(!File.eof() && found==false)
        {
                File.read(reinterpret_cast<char *> (&ac), sizeof(account));
                if(ac.get_accountnumber()==n)
                {
                       ac.show_account();
                        if(option==1)
                        {
                                cout<<"\n\n\tTO DEPOSITE AMOUNT ";
                                cout<<"\n\nEnter The amount to be deposited: ";
                                cin>>amt;
                                ac.deposit_funds(amt);
                        }
                        if(option==2)
                        {
                                cout<<"\n\n\tTO WITHDRAW AMOUNT ";
                                cout<<"\n\nEnter The amount to be withdraw: ";
                                cin>>amt;
                                int bal=ac.get_funds()-amt;
                                if((bal<500 && ac.get_accounttype()=='S') || (bal<1000 && ac.get_accounttype()=='C'))
                                        cout<<"Insufficience balance";
                                else
                                        ac.draw_funds(amt);
                        }
                        int pos=(-1)*static_cast<int>(sizeof(ac));
                        File.seekp(pos,ios::cur);
                        File.write(reinterpret_cast<char *> (&ac), sizeof(account));
                        cout<<"\n\n\t Record Updated";
                        found=true;
               }
         }
        File.close();
        if(found==false)
                cout<<"\n\n Record Not Found ";
}