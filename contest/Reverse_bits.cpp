// Problem statement
// There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.

long reverseBits(long n) {
    long ans = 0;

    for(int i = 0; i < 32; i++) {
        ans <<= 1;        // Make space for next bit
        ans |= (n & 1);   // Add last bit of n
        n >>= 1;          // Remove last bit from n
    }

    return ans;
}
