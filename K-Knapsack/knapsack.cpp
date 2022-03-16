


#include <cstring>
#include <iostream>
using namespace std;



int knapsack(int* weights, int* values, int n, int maxWeight){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
  */

	int *s = new int[maxWeight+1]();
        int *s1 = new int [maxWeight+1]();
        for(int i=0;i<n;i++){
            for(int w = 1;w<maxWeight+1;w++){
                if(weights[i]>w)
                    s1[w]=s[w];
                else
                s1[w]=max(s[w - weights[i]]+ values[i],s[w]);
            }
            for(int i1=1;i1<maxWeight+1;i1++)
            {
                s[i1]=s1[i1];
            }
        }
        return s1[maxWeight];
}


int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}