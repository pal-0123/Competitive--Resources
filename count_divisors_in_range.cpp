int countDivisibles(int A, int B, int M) { 
    if (A % M == 0) {
        return (B / M) - (A / M) + 1; 
    }
  	
    return (B / M) - (A / M); 
}