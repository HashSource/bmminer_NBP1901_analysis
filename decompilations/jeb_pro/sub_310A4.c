void* sub_310A4(char* __src, uint32_t* param1) {
    size_t __n = strlen(__src);
    void* result = sub_2F408(__n + 9, "util.c", "ser_string", 996);
    if(__n > 252) {
        if(__n >= &ELFHeader) {
            *(char*)result = 254;
            *(int*)((int)result + SOCK_STREAM) = (uint32_t)(uint8_t)(__n >>> 24) | ((uint32_t)(uint8_t)(__n >>> 16) << 8) | ((uint32_t)(uint8_t)(__n >>> 8) << 16) | ((uint32_t)(uint8_t)__n << 24);
            sub_30EA8((void*)((int)result + 5), __src, __n, "util.c", "ser_string", 1019);
            *param1 = __n + 5;
            return result;
        }
        *(char*)result = 253;
        *(short*)((int)result + SOCK_STREAM) = (uint16_t)(uint8_t)(__n >>> 8) | ((uint16_t)(uint8_t)__n << 8);
        sub_30EA8((void*)((int)result + 3), __src, __n, "util.c", "ser_string", 1009);
        *param1 = __n + 3;
        return result;
    }
    *(char*)result = (uint8_t)__n;
    sub_30EA8((void*)((int)result + SOCK_STREAM), __src, __n, "util.c", "ser_string", 1000);
    *param1 = __n + SOCK_STREAM;
    return result;
}
