int fast_exp(int base , int power){
          int res = 1;
          while(power>0){
            if(power&1){
              res = (res*base)%M;
            }
            power/=2;
            base = base*base;
          }
          return res;

}
