int sub_3962C(int param0, int param1) {
    char* ptr0;
    int __ptr1;
    int v0 = param0;
    if(gvar_7EB9C > 3) {
        switch(param1) {
            case 0: {
                ptr0 = "BLOCK";
                break;
            }
            case 1: {
                ptr0 = "READY";
                break;
            }
            default: {
                ptr0 = "DONE";
                if(param1 != 2) {
                    ptr0 = "UNKNOWN";
                }
                break;
            }
        }
        char* ptr1 = ptr0;
        snprintf(&__ptr1, 0x800, "\n", v0, ptr0);
        param0 = sub_2E584(3, &__ptr1, 0);
        uint32_t v1 = gvar_4FCB3C;
        if(v1 != 0 && *(int*)(v1 + 4) != 0) {
            goto loc_39714;
        }
        else if(gvar_7EB9C > 3) {
            __ptr1 = 1684955464;
            int v2 = 0x6920656c;
            int v3 = 0x554e2073;
            int v4 = 0xa2e4c4c;
            char v5 = 0;
            param0 = sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        uint32_t v6 = gvar_4FCB3C;
        if(v6 != 0 && *(uint32_t*)(v6 + 4) != 0) {
        loc_39714:
            int v7 = 0;
            do {
                param0 = sub_1E29C(v7);
                if(param0 != 0) {
                    if(v0 != 0xFF && v7 != v0) {
                        goto loc_39738;
                    }
                    else if(v0 != 0xFF) {
                        *(int*)((v0 + 2) * 4 + gvar_4FCB3C) = param1;
                        return param0;
                    }
                    *(int*)((v7 + 2) * 4 + gvar_4FCB3C) = param1;
                }
            loc_39738:
                ++v7;
            }
            while(v7 != 4);
            return param0;
        }
    }
    return param0;
}
