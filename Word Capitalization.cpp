#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
string name;
cin>>name;
name.front()=toupper(name.front());
cout<<name;

}