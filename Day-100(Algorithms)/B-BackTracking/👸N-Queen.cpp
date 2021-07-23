#include <iostream>
using namespace std;
bool issafe(int board[][10],int i,int j,int n){
    int x = i;
    int y = j;
    for(int row =0;row<i;row++){
        if(board[row][j] == 1){
            return false;
        }
    }

x = i;
y = j;


    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }

x = i;
y = j;


 while(x>=0 && y<=n){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y++;
    }

return true;

}


bool solvenqueen(int board[][10],int i,int n){
    if(i == n){
        for(int k = 0;k<n;k++){
            for(int m=0;m<n;m++){
                if(board[k][m] == 1){
                    cout<<" Q ";
                }
                if(board[k][m] == 0){
                    cout<<" _ ";
                }
            }
        cout<<endl;

        }
        cout<<endl<<endl;
        return false;

    }

   // cout<<i;
    for(int j=0;j<n;j++){if(issafe(board,i,j,n))
    {
    board[i][j] = 1;
    bool nextqueenrakhpaye = solvenqueen(board,i+1,n);    ///CHANGE.
    if(nextqueenrakhpaye){
        return true;
    }


    }
    board[i][j] = 0;
    }
    return false;




}
int main() {
    int n;
    cout<<"Enter the number of rows in matrix : ";
    cin>>n;
    int board[][10] = {0};
    solvenqueen(board,0,n);


}
