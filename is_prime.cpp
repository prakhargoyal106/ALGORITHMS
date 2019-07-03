bool isprime(n){

     if(n<=1)
     return false;

     for(int i=1;i<sqrt(n)+1;i++){
       if(n%i==0)
       return false;
     }
     return true; 



     }
}
