# include <iostream>
# include <vector>
using namespace std;



int main()
{
    vector <int> numbers ;

    int number ;

    int sum = 0 ;

    cout<<"Hello User :) " << endl ;

    for (int i = 0 ; i < 5 ; i++)
    {
        cin >> number ;

        numbers.push_back(number) ;

        sum += numbers.at(i) ;
    }

    cout << "The sum is --> " << sum << endl ;

    cout << "Tha average is --> " <<  (static_cast <float> (sum) / 5 ) << endl ;

    return 0;
}
