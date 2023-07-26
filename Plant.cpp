#include <iostream>
using namespace std;int main(){
cout<<"Provide the tree machine with the number of leaves"<<endl;
int n;cin>>n;
 cin.ignore();string tree="";
 tree+="  (|)\n   |\n";
 n--;if(!n)tree+="___|___\n";
 else tree+="   |\n";
 int ok=0;
 while(n){if(ok%2==0){tree+="(|)|\n --+\n";}
 else{tree+="   |(|)\n   +--\n";}
 if(n>1)tree+="   |\n";else{tree+="___|___\n";}n--;ok=1-ok;}
tree+="\\     /\n \\___/\n";cout<<tree;
}
