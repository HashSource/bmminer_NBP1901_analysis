int sub_25DB0() {
    int v0;
    int* ptr0;
    int __ptr1;
    int v1;
    int result;
    sub_302A0(&v0);
    int result1 = &gvar_482A74;
    int v2 = (int)gvar_482A74;
    int v3 = (int)gvar_482A78;
    if((v2 == 0 && v3 == 0) == 0) {
        size_t __n = (size_t)(v0 - v2);
        if(v3 > (int)ptr0) {
            --__n;
        }
        if((int)__n <= 300) {
            if(gvar_7FA04 != 0) {
                if(gvar_7EB9C > 3) {
                    __builtin_strcpy(&__ptr1, "network connection resume, restart");
                    sub_2E584(3, &__ptr1, 0);
                }
                sub_31D58(6, "network connection resume, restart...", __n);
                gvar_7FA04 = 0;
                gvar_7FA00 = 0;
                return result;
            }
            if(gvar_7FA00 == 0) {
                return result1;
            }
            if(gvar_7EB9C > 3) {
                __ptr1 = 0x7774656e;
                int v4 = 543912559;
                int v5 = 1852731235;
                int v6 = 0x69746365;
                __builtin_strcpy(&v1, "on resume");
                sub_2E584(3, &__ptr1, 0);
            }
            uint32_t v7 = sub_31D48();
            sub_31D58((int)v7, 0, __n);
            gvar_7FA00 = 0;
            return (int)v7;
        }
        uint32_t v8 = gvar_7FA00;
        if(v8 == 0) {
            sub_31D58(3, "network connection lost", __n);
            int* __seed = sub_2B2F4();
            if(__seed == 0) {
                __seed = ptr0;
            }
            srandom((unsigned int)__seed);
            result1 = random();
            __n = gvar_7EB9C;
            gvar_7FA00 = (uint32_t)(result1 - result1 / 300 * 300 + SOCK_STREAM);
            if(__n <= 3) {
                return result1;
            }
            snprintf(&__ptr1, 0x800, "will power off in %d seconds in case not resume", (uint32_t)(result1 - result1 / 300 * 300 + SOCK_STREAM));
            return sub_2E584(3, &__ptr1, 0);
        }
        if((int)(v8 + 299) < (int)__n && gvar_7FA04 == 0) {
            size_t __n1 = gvar_7EB9C;
            if(__n1 > 3) {
                snprintf(&__ptr1, 0x800, "network connection lost for 5 min + %d seconds, power off...", v8);
                result1 = sub_2E584(3, &__ptr1, 0);
            }
            result1 = sub_194DC(result1, (int)(v8 + 299), __n1);
            gvar_7FA04 = 1;
        }
        return result1;
    }
    return sub_302A0((int*)&gvar_482A74);
}
