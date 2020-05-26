int m=1000000007;
int power(int x,int y){
	if(y==0){
		return 1;
	}
	int p=power(x,y/2)%m;
	return (y%2==0)? p : (x*p)%m; 
}
int modular_inverse(int a){
	return power(a,m-2);
}



int m=998244353;
int power(int x,int y){
	int ans=1;
	while(y){
		if(y%2==0){
			x=x*x;
			x%=m;
			y/=2;
		}
		else{
			ans=ans*x;
			ans%=m;
			y--;
		}
	}
	return ans;
}
int modular_inverse(int a){
	// if()
	return power(a,m-2);
}