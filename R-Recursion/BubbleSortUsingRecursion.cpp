#include <iostream>
#include <vector>

using namespace std;

void recursiveBubbleSort(vector<int>& temp, int n)
{
    if(n == 1)
    {
        return;
    }
    int iteration = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(temp[i] > temp[i+1])
        {
            int temp1 = temp[i];
            temp[i] = temp[i+1];
            temp[i+1] = temp1;
            iteration++;
        }
    }
    if(iteration == 0)
    {
        return;
    }
    recursiveBubbleSort(temp, n-1);
}
void display(vector<int> temp)
{
    for(int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << endl;
    }
}
int main()
{
    vector<int> vInt;
    vInt.push_back(3);
    vInt.push_back(99);
    vInt.push_back(299);
    vInt.push_back(1);
    vInt.push_back(18);
    cout << "Vector prior to sorting: " << endl;
    display(vInt);
    int n = vInt.size();
    recursiveBubbleSort(vInt, n);
    cout << "Vector after sorting: " << endl;
    display(vInt);
    return 0;
}
