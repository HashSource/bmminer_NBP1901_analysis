int sub_397A0(int param0) {
    char* ptr0;
    int __ptr1;
    uint32_t v0 = gvar_4FCB3C;
    if(gvar_7EB9C > 4) {
        int v1 = *(int*)((param0 + 2) * 4 + v0);
        switch(v1) {
            case 0: {
                ptr0 = "BLOCK";
                break;
            }
            case 1: {
                ptr0 = "READY";
                break;
            }
            default: {
                ptr0 = "UNKNOWN";
                if(v1 == 2) {
                    ptr0 = "DONE";
                }
                break;
            }
        }
        char* ptr1 = ptr0;
        snprintf(&__ptr1, 0x800, "[DEBUG] chain = %d, status = %s\n", param0, ptr0);
        sub_2E584(4, &__ptr1, 0);
        v0 = gvar_4FCB3C;
    }
    if(v0 != 0 && *(int*)(v0 + 4) != 0) {
        return *(int*)((param0 + 2) * 4 + v0);
    }
    if(gvar_7EB9C <= 3) {
        return 2;
    }
    __ptr1 = 1684955464;
    int v2 = 0x6920656c;
    int v3 = 0x554e2073;
    int v4 = 0xa2e4c4c;
    char v5 = 0;
    sub_2E584(3, &__ptr1, 0);
    return 2;
}
