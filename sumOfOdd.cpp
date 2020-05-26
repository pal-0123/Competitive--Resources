int sumOfOdd(int n) { 
    int terms = (n + 1) / 2; 
    int sum = terms * terms; 
    return sum; 
} 

int sumInRange(int l, int r){ 
    return sumOdd(r) - sumOdd(l - 1); 
}