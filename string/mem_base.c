#include "../stdlib/stdlib.h"
#include "string.h"

void* memcpy(void* dest, const void* src, size_t n) {
    if (dest == src) return;

    int* dest_i = dest;
    int* src_i  = src;

    for (int i = 0; i < n; i++) dest_i[i] = src_i[i];
}

void* memmove(void* dest, const void* src, size_t n) {
    int* dest_i = dest;
    int* src_i  = src;

    for (int i = 0; i < n; i++) dest_i[i] = src_i[i];
}

void* memset(char* dest, char value, size_t size) {
    for (int i = 0; i <= size; i++) {
        *dest = value;
        dest++;
    }
}

int memcmp(const char* s1, const char* s2, size_t n) {
    for (int i = 0; i <= n; i++) 
        if (s1[i] != s2[i]) return s1[i] - s2[i];
}
