#include<iostream>
using namespace std;

void tower_of_hanoi(int N, char BEG, char AUX, char END)
{
    if (N == 1)
    {
        cout<<"Move Disk 1 from stick "<<BEG<<" to "<<END<<endl;
        return;
    }
    
    tower_of_hanoi(N - 1, BEG, END, AUX);
    cout<<"Move Disk "<<N<<" from stick "<<BEG<<" to "<<END<<endl;
    tower_of_hanoi(N - 1, AUX, BEG, END);
}

int main()
{
    int N;
    cout<<"Enter the number of disks: ";
    cin>>N;
    cout<<endl;
    printf("\n");
    tower_of_hanoi(N, 'A', 'B', 'C');

    return 0;
}