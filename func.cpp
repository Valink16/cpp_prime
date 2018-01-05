bool isPrime(int nb) {
    bool prime = true;
    for (int i(3); i < nb; i+=2) {
        if (nb % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}