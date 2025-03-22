#include <iostream>
using namespace std;
int main()
{
    int c=0;
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<"Number is pime"<<endl;
    }
    else
    {
        cout<<"Not a prime"<<endl;
    }
}

