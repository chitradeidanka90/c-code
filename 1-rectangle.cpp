#include <iostream>
using namespace std;

int main() {
  int row, col;
  cin >> row >> col;
  // for(int i=0;i<row;i++){
  //   for(int j=0;j<col;j++)
  //     cout<<"*"<<" ";
  //   cout<<endl;
  // }
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      if (i == 1 || i == row || j == 1 || j == col)
        cout << "*" << " ";
      else
        cout << " "<< " ";
    }
    cout << endl;
  }
}