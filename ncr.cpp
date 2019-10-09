int m=1000000007;
int power(int x, int y){ 	
    int res = 1;
    x = x % m;  
    while (y > 0){ 
        
        if (y & 1){
        	res = (res*x) % m; 
        } 
        y = y>>1;
        x = (x*x) % m; 
    } 
    return res; 
} 
int modular_inverse(int a){
	return power(a,m-2);
}


int ncr(int n,int r){
	if(n<r){
		return 0;
	}
	int fact[n+1];
	fact[0]=1;
	for(int i=1;i<n+1;i++){
		fact[i]=(fact[i-1]*i)%m;
	}
	int ret=(((fact[n]*modular_inverse(fact[r]))%m)*modular_inverse(fact[n-r]))%m;
	return ret;	
}