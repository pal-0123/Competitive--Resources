// non modulous ncr

int ncr1(int n,int r){
	// n=49;
	// r=25;
	int ret=1;
	int t1=n,t2=r;
	int r1=1;
	while(n>t1-t2){
		ret=ret*n;
		while(r1<=r && ret%r1==0){
			ret=ret/r1;
			r1++;
		}
		
		n--;
	}
	return ret;
}