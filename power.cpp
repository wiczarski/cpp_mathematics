long long power(int a, int b) {
    long long power = 1;
    for(int i = 0; i < b; i++){
        power *= a;
    }
    return power;
}