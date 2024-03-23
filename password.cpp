#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string getpass(int l){
    string p="";
    string c="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$_";
    int cl=c.size();
    srand(time(0));
    int ri;
    for(int i=0;i<l;i++){
        ri=rand()%cl;
        p+=c[ri];
    }
    return p;
}
int main(){
    int l;
    cout<<"enter length: ";
    cin>>l;
    string pass=getpass(l);
    cout<<pass;
    return 0;
}