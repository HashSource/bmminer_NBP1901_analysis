int sub_46FE8(int param0, int param1) {
    short __ptr1;
    int v0 = param1;
    char* ptr0 = "read return data";
    int v1 = param0;
    snprintf(&__ptr1, 0x800, "Dumping %u %s bytes from %p:\n", param1, "read return data", param0);
    int result = sub_2E584(2, &__ptr1, 0);
    if(v0 > 0) {
        while(SOCK_STREAM) {
            int v2 = 0;
        loc_47088:
            do {
                if(v2 >= v0) {
                    ++v2;
                    *(int*)&__ptr1 = ' ';
                    sub_2E584(2, &__ptr1, 0);
                    if(v2 != 16) {
                        goto loc_47088;
                    }
                    goto loc_470B0;
                }
                else {
                    int v3 = (uint32_t)*(char*)(v2 + v1);
                    ++v2;
                    snprintf(&__ptr1, 0x800, "%02x ", v3);
                    sub_2E584(2, &__ptr1, 0);
                    if(v2 == 16) {
                        goto loc_470B0;
                    }
                }
            }
            while(SOCK_STREAM);
        loc_470B0:
            int v4 = 0;
        loc_47100:
            do {
                if(v4 >= v0) {
                    ++v4;
                    __ptr1 = 32;
                    sub_2E584(2, &__ptr1, 0);
                    if(v4 != 16) {
                        goto loc_47100;
                    }
                    goto loc_47134;
                }
                else {
                    ++v4;
                    snprintf(&__ptr1, 0x800, "%c");
                    sub_2E584(2, &__ptr1, 0);
                    if(v4 == 16) {
                        goto loc_47134;
                    }
                }
            }
            while(SOCK_STREAM);
        loc_47134:
            __ptr1 = 10;
            v1 += 16;
            result = sub_2E584(2, &__ptr1, 0);
            if(v0 <= 16) {
                goto loc_47154;
            }
            else {
                v0 -= 16;
            }
        }
    }
loc_47154:
    return result;
}
