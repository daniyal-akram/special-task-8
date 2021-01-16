#include<iostream>
using namespace std;
int main()
{
  char ch;
    cout<< "Enter any character: ";
    cin>> ch;

 	if(ch >= 'a' && ch <= 'z')
    {
    cout<<ch<<"is Lowercase alphabet. ";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
    cout<<ch<<" is Uppercase alphabet. ";
    }
}
