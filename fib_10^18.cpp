// gives fib of n+2 for normal fibonacci 0,1,1...
// set to give only unit digit
 
const int M = 1000000007; // modulo
map<int , int> F;
F[0]=0;
F[1]=1;

int get_fib(int n) {
	if (F.count(n)) return F[n];
	int k=n/2;

	if (n%2==0){ // n=2*k
		return F[n] = ((get_fib(k)*get_fib(k) + get_fib(k-1)*get_fib(k-1)) % M)%10;
	} 
	else{ // n=2*k+1
		return F[n] = ((get_fib(k)*get_fib(k+1) + get_fib(k-1)*get_fib(k)) % M)%10;
	}
}
