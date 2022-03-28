#include <bits/stdc++.h>
using namespace std;
int main() {
    int number,sum;
    cout<<"enter a number:";
    cin>>number;
    int i=0;
    sum=0;
    while(i<=number){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;















    /*int number,sum;
    cout<<"enter a  number:";
    cin>>number;
    int i=1;
    while (i<=number){
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;*/

   // ------------------
    /*int number,sum;
    cout<<"enter a  number:";
    cin>>number;
    sum= pow((number/2),2);
    cout<<sum<<endl;
    cin>>number;*/
    //----------------------
    /*int number;
    cout<<"enter a number"<<endl;
    cin>>number;*/
    //----------------------------
    /*int multiplier;

    cout << "Welcome to multiplication table program\n";
    cout << "Please enter a +ve int: ";
    cin >> multiplier;

    cout << setfill('-');
    cout << setw(18) << "" << endl;
    cout << "| n" << " | " << "n * " << multiplier << "     | " << endl;
    cout << setw(18) << "" << endl;
    cout << setfill(' ');


    for (int n = 1; n <= 12; n++)
    {
        cout << "| " << setw(2) << right << n << "| " << setw(10) << n * multiplier << " | \n";
    }
    cout << setw(18) << setfill('-') << "" << endl << setfill(' ');*/
    //-----------------------------------------------------------

    /*int num, i;
    cout << "Enter the Number to Print the Table: ";
    cin >> num;
    cout << "-------+------+\n";
    cout << "|" << setw(3) << num << "   |      | \n";;
    cout << "-------+------+\n";

    for ( i = 1; i <= 12; i++)
    {
        cout << "x " << setw(4) << i << " | ";
        cout << setw(4) << num* i << " | \n";
    }
    cout << "-------+------+\n";*/

}