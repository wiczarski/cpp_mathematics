long long factorial(int a) {
    long long sum = 1;
    for(int i = 1; i <= a; i++) {
        sum *= i;
    }
    return sum;
}