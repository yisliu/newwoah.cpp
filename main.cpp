#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cal(string str){
  int n = 0;
  int i = 0;
  if(str[1] == 77){
    cout<<"HH";
    if(str.size()<4){
      // cout<<endl<<"(-_-)";
      return -1;
    }
  }
  string str2 = "MOO";
  while(i<str.size()){
    // cout<<"\nLOL";
    if(str[i]!=str2[i]){
      // cout<<"WOAH!!!";
      n++;
      i++;
      continue;
    }
    i++;
    continue;
  }
  // cout<<endl<<n;
  return n;
}

int main() {
  int n = 0;
  cin>>n;
  string str;
  for(int i = 0; i<n; i++){
    cin>>str;
    // cout<<"hello";
    int temp = cal(str);
    // cout<<endl<<str<<endl;
    cout<<temp<<" ";
    // //objective "MOO"
    // //replace first or last letter with opposite
    // //delete first or last letter
    // while(str.size()>2){
      
    // }
  }
  // cout<<char(65+12);
}
/*
3
MOMMOM
MMO
MOO
*/