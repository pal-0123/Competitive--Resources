int sumInRange(int l, int r){ 
    return sumNatural(r) - sumNatural(l - 1); 
}

int sumNatural(int n) { 
    int sum = (n * (n + 1)); 
    return sum; 
} 