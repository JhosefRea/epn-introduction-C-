void numeros(){
  double p,q,r,s,t,u;
  for(int i=100;i<=999;i++){ 
    t=i/100;   
    p=floor(t);
    r=i-(p*100);
    u=r/10;
    q=floor(u);
    s=r-(q*10);
    if((pow(p,3)+pow(q,3)+pow(s,3))==i){
      cout<<i<<"\t";
    }
  }
}