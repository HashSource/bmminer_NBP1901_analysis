long sub_5E140(char* __nptr) {
    char* ptr0;
    if(__nptr != 0) {
        int v0 = (uint32_t)__nptr[0];
        if(v0 == 0) {
            ptr0 = __nptr;
        }
        else {
            unsigned short** ptr1 = __ctype_b_loc();
            ptr0 = __nptr;
            char* ptr2 = __nptr;
            while(SOCK_STREAM) {
                if((ptr1[0][v0] & 0x2000) == 0) {
                    ptr0[0] = (char)v0;
                    ++ptr0;
                }
                v0 = (uint32_t)ptr2[SOCK_STREAM];
                ++ptr2;
                if(v0 != 0) {
                    continue;
                }
                break;
            }
        }
        ptr0[0] = 0;
        size_t v1 = strlen(__nptr);
        long result = strtol(__nptr, NULL, 10);
        if(result <= 0) {
            return 0;
        }
        char* ptr3 = &__nptr[v1];
        int v2 = ((uint32_t)*(ptr3 - SOCK_STREAM) & 0xdf) != 66 ? (uint32_t)*(ptr3 - SOCK_STREAM): (uint32_t)*(ptr3 - 2);
        int v3 = ((uint32_t)*(ptr3 - SOCK_STREAM) & 0xdf) != 66 ? 1000: 0x400;
        switch(v2) {
            case 71: 
            case 103: {
                return (long)(v3 * v3 * (v3 * result));
            }
            case 75: 
            case 107: {
                return result * v3;
            }
            case 77: 
            case 109: {
                break;
            }
            default: {
                unsigned short** ptr4 = __ctype_b_loc();
                if((ptr4[0][v2] & 0x800) != 0) {
                    return result;
                }
                char* ptr5 = __nptr;
                sub_5DF98(&g2, "src/zc_util.c", 70, "Wrong suffix parsing size in bytes for string [%s], ignoring suffix");
                return result;
            }
        }
        v3 *= v3;
        return result * v3;
    }
    sub_5DF98(&g2, "src/zc_util.c", 27, "astring is null or 0");
    return 0;
}
