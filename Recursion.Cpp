#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   if(i<1) return;        // Base condition: stop when i becomes less than 1
   func(i-1,n);           // Recursive call: reduce i
   cout<<i<<endl;         // Print i after all smaller numbers are printed
}
int main(){
  int n = 4;
  func(n,n);
  return 0;
}
