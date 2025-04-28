int gcd(int a, int b){
    int n = 1;
    while(1){
        if(a % n == 0 && b % n == 0){
            ++n;
        }else{
            return n;
        }
    }
}
