void* memchr(void* __s, int __c, size_t __n) {
    void* ptr0;
    if(__n != 0) {
        if((int*)((int)__s & 0x3) != 0) {
            if((uint32_t)(uint8_t)__c == (uint32_t)*(char*)__s) {
                return __s;
            }
            ptr0 = (int)__s + SOCK_STREAM;
            do {
                size_t v0 = __n;
                --__n;
                __s = ptr0;
                if(v0 == SOCK_STREAM) {
                    return NULL;
                }
                char v1 = (int*)((int)ptr0 & 0x3) == 0;
                ptr0 = (int)ptr0 + SOCK_STREAM;
                if(v1 != 0) {
                    goto loc_3E820;
                }
            }
            while((uint32_t)(uint8_t)__c != (uint32_t)*(char*)__s);
            return __s;
        }
    loc_3E820:
        if(__n > 3) {
            int v2 = ((((uint32_t)(uint16_t)((uint32_t)0 | ((uint32_t)(__c & 0xffffff) << 8)) | (uint32_t)(uint8_t)__c) * &ELFHeader) | (uint32_t)(uint16_t)((uint32_t)0 | ((uint32_t)(__c & 0xffffff) << 8)) | (uint32_t)(uint8_t)__c) ^ *(int*)__s;
            if(((v2 - 0x1010101) & ~v2 & 0x80808080) == 0) {
                void* ptr1 = (void*)((int)__s + 4);
                while(SOCK_STREAM) {
                    __n -= 4;
                    __s = ptr1;
                    ptr1 = (int)ptr1 + 4;
                    if(__n > 3) {
                        int v3 = ((((uint32_t)(uint16_t)((uint32_t)0 | ((uint32_t)(__c & 0xffffff) << 8)) | (uint32_t)(uint8_t)__c) * &ELFHeader) | (uint32_t)(uint16_t)((uint32_t)0 | ((uint32_t)(__c & 0xffffff) << 8)) | (uint32_t)(uint8_t)__c) ^ *(int*)__s;
                        if(((v3 - 0x1010101) & ~v3 & 0x80808080) == 0) {
                            continue;
                        }
                        break;
                    }
                    if(__n != 0) {
                        break;
                    }
                    return NULL;
                }
            }
        }
        if((uint32_t)(uint8_t)__c == (uint32_t)*(char*)__s) {
            return __s;
        }
        __n += (int)__s;
        ptr0 = (int)__s + SOCK_STREAM;
        do {
            __s = ptr0;
            ptr0 = (int)ptr0 + SOCK_STREAM;
            if(__s == __n) {
                return NULL;
            }
        }
        while((uint32_t)(uint8_t)__c != (uint32_t)*(char*)__s);
        return __s;
    }
    return NULL;
}
