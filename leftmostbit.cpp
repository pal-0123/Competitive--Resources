int last_power(int n){
	int r=0;
	while(n!=1){
		n=n>>1;
		r++;
	}
	return (int)pow(2,r);
}