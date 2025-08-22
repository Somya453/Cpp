#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter a number:";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%5==0){
            cout<<"CocaCola";
        }
        else if(i%3==0){
            cout<<"Coca";
        }
       
        else if(i%5==0){
            cout<<"Cola";
        }
        else{
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}