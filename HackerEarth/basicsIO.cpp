#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
string inputstring;
cin.ignore(); /*|| can use */ getc(stdin);
getline(cin,inputstring);
cout<<num*2;
cout<<"\n"<<inputstring;
    return 0;
}
// errror in inputiing string after inputting int 
// maybe clear using some fucntin cin.ignore() or sometihmg like that