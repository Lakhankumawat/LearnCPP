#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/

//function to display the 2-d array
void display(vector<vector<int>>& chess) {
  for (int i = 0; i < chess.size(); i++) {
    for (int j = 0; j < chess.size(); j++) {
      cout << chess[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void printKnightsTour(vector<vector<int>>& chess, int n, int r, int c, int upcomingMove) {
  //base case
  if (r < 0 || c < 0 || r >= n || c >= n || chess[r][c] != 0) {
    return;
  }
  if (upcomingMove == n * n) {
    chess[r][c] = upcomingMove;
    display(chess);
    chess[r][c] = 0;
    return;
  }
  chess[r][c] = upcomingMove;
  printKnightsTour(chess, n, r - 2, c + 1, upcomingMove + 1);
  printKnightsTour(chess, n, r - 1, c + 2, upcomingMove + 1);
  printKnightsTour(chess, n, r + 1, c + 2, upcomingMove + 1);
  printKnightsTour(chess, n, r + 2, c + 1, upcomingMove + 1);
  printKnightsTour(chess, n, r + 2, c - 1, upcomingMove + 1);
  printKnightsTour(chess, n, r + 1, c - 2, upcomingMove + 1);
  printKnightsTour(chess, n, r - 1, c - 2, upcomingMove + 1);
  printKnightsTour(chess, n, r - 2, c - 1, upcomingMove + 1);
  chess[r][c] = 0;
}

int main() {
  int n, r, c;
  cin >> n >> r >> c;
  vector<vector<int>> chess(n, vector<int> (n, 0));
  printKnightsTour(chess, n, r, c, 1);
}