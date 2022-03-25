#include <iostream>

using namespace std;

int main()
{
    string linkedlist = "10 20 30 40 50 60 70 80";
    cout << "List = " << linkedlist << endl;
    string newlist = "";
    int rotates;
    cout << "Enter the number of rotates you want: ";
    cin >> rotates;
    while(rotates > 6 || rotates < 0){
        cout << "Not valid, enter another number of rotates: ";
        cin >> rotates;
    }
    for(int i = rotates*3; i < linkedlist.length()+1; i++){
        newlist += linkedlist[i];
    }
    for(int i = 0; i <= (rotates*3)-1; i++){
        newlist += linkedlist[i];
    }
    cout << "List after rotate = " << newlist;

    system("pause>0");
    return 0;
}
