size_t sub_2F8E8(uint8_t* param0, char* __s) {
    size_t v0;
    char v1;
    char v2;
    int v3 = 0;
    *(int*)&v1 = 0;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    int v7 = 0;
    uint32_t v8 = 0;
    size_t result = strlen(__s);
    if(result == 0) {
        v0 = 0;
    }
    else {
        char* ptr0 = __s - SOCK_STREAM;
        uint32_t v9 = 0;
        int* ptr1 = (int*)(result + ptr0);
        while(SOCK_STREAM) {
            int v10 = (uint32_t)*(ptr0 + SOCK_STREAM);
            ++ptr0;
            uint32_t* ptr2 = &v8;
            uint32_t v11 = *(uint32_t*)(v10 * 4 + 416028);
            while(SOCK_STREAM) {
                int64_t v12 = v9 * 58L + v11;
                *ptr2 = (uint32_t)v12;
                --ptr2;
                v11 = v12 >>> 32L;
                if(ptr2 == &v2) {
                    break;
                }
                v9 = *ptr2;
            }
            if(ptr1 == ptr0) {
                break;
            }
            v9 = v8;
        }
        v0 = v1;
        result = (uint32_t)(uint8_t)(v3 >>> 24) | ((uint32_t)(uint8_t)(v3 >>> 16) << 8) | ((uint32_t)(uint8_t)(v3 >>> 8) << 16) | ((uint32_t)(uint8_t)v3 << 24);
    }
    uint32_t* ptr3 = (uint32_t*)(param0 + SOCK_STREAM);
    int* ptr4 = &v3;
    *param0 = (uint8_t)v0;
    while(SOCK_STREAM) {
        *ptr3 = result;
        ++ptr3;
        if((uint32_t*)(param0 + 25) == ptr3) {
            return result;
        }
        int v13 = *(ptr4 + SOCK_STREAM);
        ++ptr4;
        result = (uint32_t)(uint8_t)(v13 >>> 24) | ((uint32_t)(uint8_t)(v13 >>> 16) << 8) | ((uint32_t)(uint8_t)(v13 >>> 8) << 16) | ((uint32_t)(uint8_t)v13 << 24);
    }
    return result;
}
