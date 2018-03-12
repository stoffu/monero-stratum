#include "crypto/hash-ops.h"

void cryptonight_hash(const char* input, char* output, uint32_t len) {
    const int variant = input[0] >= 2 ? input[0] - 1 : 0;
    cn_slow_hash(input, len, output, 1, 1);
}

void cryptonight_fast_hash(const char* input, char* output, uint32_t len) {
    cn_fast_hash(input, len, output);
}
