int smallestEvenMultiple(int n){
    int mul=n,nu=0;
    while(nu==0){
        if((mul%2==0) && (mul%n==0)){
            nu+=1;
        }
        mul+=1;
    }
    return mul-1;
    
}

