#include <iostream>
#include <math.h>
using namespace std;
int main() {
int i,j=1,k,l=1,n,o,q,z,y,cont,a,c;
cout <<"Ingrese tamaño de cuadro: ";
cin>>k;
if(k%2==0)
k=k+1;
else
k=k;
z=floor(k/2);
if(z%2==0)
z=z+1;
else
z=z;
a=z/2;
c=(z-2)/2;
y=z-2;
z=(k-z-2)/2;
if(k==1)
cout<<"*\n";
else{
for(n=1;n<=k;n++){
  cout<<"* ";}
  cout<<"\n";
  for(q=1;q<=z;q++){
    for(o=1;o<=k;o++){
      if(o==1 || o==k){
      cout<<"* ";
      }
else{
  cout<<"  ";
}}
cout<<"\n";
}
for(j=1;j<=k;j++){
  cout<<"* ";
  if(j==1 || j==k-1-z){
    for(i=1;i<=z;i++){  
      cout<<"  ";
      j++;}
  }  
}
if(k<=7 && k>=5){
  cout<<"\n";
  for(j=1;j<=k;j++){
    cout<<"* ";      
    if(j==1 || j==k-1-z){
      for(i=1;i<=z;i++){
        cout<<"  ";
        j++;}
    }  
  }
}
else{
for(cont=1;cont<=y-1;cont++){
  if(cont==(a)){
    cout<<endl;
    for(l=1;l<=k;l++){      
      if(l==1 ||  l==z+c+c || l==k){
      cout<<"* ";    
        for(i=1;i<=z;i++) {  
        cout<<"  ";
        }
      }
      else if(l==z || l==z+c ){
        cout<<"* ";    
        for(i=1;i<=c;i++) {  
        cout<<"  ";
        }
      }       
    } if(k==9)
cout<<"* ";
  }
cout<<"\n* ";
for(j=1;j<=k-4;j++){
  cout<<"  ";
  if(j==1 || j==y+1 ){
    for(i=1;i<=z-1;i++){ 
    cout<<"  ";
    j++;
    }  
  cout<<"* ";
  }  
}
cout<<"* ";
}
}
if(k>=4){
cout<<"\n";
for(j=1;j<=k;j++){
  cout<<"* ";
  if(j==1 || j==k-1-z){
  for(i=1;i<=z;i++){  
  cout<<"  ";
  j++;}
  }
}
}
cout<<"\n";
for(q=1;q<=z;q++){
  for(o=1;o<=k;o++){
    if(o==1 || o==k){
    cout<<"* ";
    }
else{
  cout<<"  ";
}}
cout<<"\n";
}
for(n=1;n<=k;n++){
cout<<"* ";}
cout<<endl;
}
return 0;
}