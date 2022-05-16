

//------------------------------------PROBLEM : Subsequence with K sum ----------------------------------

#include<iostream>
#include<vector>
using namespace std;

void generate(vector<int> arr, vector<int> output, int index, int sum, int tempSum)
{
    if (index >= arr.size())
    {
        if (tempSum == sum)
        {
            //printing all subsequences
            for (int i = 0; i < output.size(); i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    output.push_back(arr[index]);
    tempSum += arr[index];
    generate(arr, output, index + 1, sum, tempSum);
    output.pop_back();
    tempSum -= arr[index];
    generate(arr, output, index + 1, sum, tempSum);
}

int main()
{

    vector<int> arr;
    int n, sum;

    cout << "Enter the total number of elements in the array/vector : " << endl;
    cin >> n;

    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter the subsequence sum : " << endl;
    cin >> sum;
    cout << "The subsequences are as follows : " << endl;

    int tempSum = 0;
    vector<int> output;
    int index = 0;

    //this prints all the subsequences
    generate(arr, output, index, sum, tempSum);
    //It is also possible to store all the subsequences in a 2D vector by passing it as a reference in the 'generate' function
    return 0;
    
}

