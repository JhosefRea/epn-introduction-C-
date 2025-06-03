#include <iostream>
using namespace std;

int main() {
  int i,j,k,l;
  cout<<"Ingrese numero: ";
  cin>>k;
  for(i=1;i<=k;i++){    
      for(j=1;j<=k;j++){
        if(j==1 ||j==k ||i==1 ||i==k)
    cout<<"*";
    else if(i==k/2+1 && j==k/2+1 )
    cout<<"*";
    else     
    cout<<" ";    
    }
    cout<<"\n";
   
  }

return 0;   
}