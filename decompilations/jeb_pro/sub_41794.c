int sub_41794(int param0, char* param1, int param2) {
    int result;
    int v0;
    int v1;
    char v2;
    char __ptr1;
    char v3;
    v2 = 0;
    switch(param0) {
        case 0: {
            v1 = 96;
            v0 = 95;
            goto loc_41870;
        }
        case 1: {
            v1 = 98;
            v0 = 97;
            goto loc_41870;
        }
        case 2: {
            v1 = 100;
            v0 = 99;
            goto loc_41870;
        }
        case 3: {
            v1 = 102;
            v0 = 101;
            goto loc_41870;
        }
        case 4: {
            v1 = 104;
            v0 = 103;
            goto loc_41870;
        }
        case 5: {
            v1 = 106;
            v0 = 105;
            goto loc_41870;
        }
        case 6: {
            v1 = 108;
            v0 = 107;
            goto loc_41870;
        }
        case 7: {
            v1 = 110;
            v0 = 109;
            goto loc_41870;
        }
        case 8: {
            v1 = 112;
            v0 = 111;
            goto loc_41870;
        }
        case 9: {
            v1 = 114;
            v0 = 113;
            goto loc_41870;
        }
        case 10: {
            v1 = 124;
            v0 = 123;
        loc_41870:
            sub_40390(v0, (uint32_t)(uint16_t)(param2 & 0x3ff) | 0x80000000);
            if(param2 >>> 2 != 0) {
                int* ptr0 = (int*)((param2 >>> 2) * 4 + param1);
                char* ptr1 = param1;
                do {
                    ptr1 += 4;
                    sub_40314(v1, &v2);
                    int v4 = v2;
                    *(ptr1 - SOCK_STREAM) = (uint8_t)v4;
                    *(ptr1 - 4) = (uint8_t)(v4 >>> 24);
                    *(ptr1 - 3) = (uint8_t)(v4 >>> 16);
                    *(ptr1 - 2) = (uint8_t)(v4 >>> 8);
                }
                while(ptr1 != ptr0);
            }
            result = param2 & 0xfffffffc;
            if((param2 & 0x3) != 0) {
                sub_40314(v1, &v2);
                char* ptr2 = (param2 >>> 2) * 4 + param1;
                if((param2 & 0x3) != 2) {
                    if((param2 & 0x3) == 3) {
                        int v5 = v2;
                        *((param2 >>> 2) * 4 + param1) = (uint8_t)(v5 >>> 24);
                        *(ptr2 + SOCK_STREAM) = (uint8_t)(v5 >>> 16);
                        *(ptr2 + 2) = (uint8_t)(v5 >>> 8);
                        return result + 3;
                    }
                    *((param2 >>> 2) * 4 + param1) = v3;
                    return result + SOCK_STREAM;
                }
                int v6 = v2;
                *((param2 >>> 2) * 4 + param1) = (uint8_t)(v6 >>> 24);
                *(ptr2 + SOCK_STREAM) = (uint8_t)(v6 >>> 16);
                return result + 2;
            }
            return result;
        }
        case 11: {
            v1 = 126;
            v0 = 125;
            goto loc_41870;
        }
        case 12: {
            v1 = 128;
            v0 = 127;
            goto loc_41870;
        }
        case 13: {
            v1 = 130;
            v0 = 129;
            goto loc_41870;
        }
        default: {
            result = 0;
            snprintf(&__ptr1, 0x800, "%s: The uart%d is not supported!!!\n", "get_read_address_info", param0);
            sub_2E584(0, &__ptr1, 0);
            snprintf(&__ptr1, 0x800, "get_read_address_info error, chain_id = %d\n", param0);
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
}
