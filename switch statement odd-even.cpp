#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any Alpabet\n";
	cin>>ch; 

    switch(ch){
    case 'a':
    cout<<ch<<" is a vowel";
    break;

    case 'e':
    cout<<ch<<" is a vowel";
    break;

    case 'i':
    cout<<ch<<" is a vowel";
    break;

    case 'o':
    cout<<ch<<" is a vowel";
    break;

    case 'u':
    cout<<ch<<" is a vowel";
    break;

    default:
    cout<<ch<<" is a consonant";
    break;
    }
  

    return 0;
    }
