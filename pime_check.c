#include<stdbool.h>
int count = 0;
int prime_check(int n){
        for(int i = 1; i <= n; ++i){
            if(n % i == 0){
                count++;
            }
        }
        if(count == 2){
            return true;
        }else{
            return false;
        }
}
