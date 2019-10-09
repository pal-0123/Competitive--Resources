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