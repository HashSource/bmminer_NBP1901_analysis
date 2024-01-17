int sub_33E34(int param0, int param1, size_t __n) {
    int __ptr1;
    sub_323DC();
    sub_446DC();
    int v0 = sub_13DA4(4000, 1, __n);
    int result = v0;
    if(result == 0) {
        if(gvar_7EB9C <= 3) {
            result = sub_3204C(v0, param1, __n);
            if(result != 0) {
                goto loc_33F4C;
            }
        }
        else {
            __ptr1 = 544104774;
            int v1 = 0x63656863;
            int v2 = 1634738283;
            int v3 = 0x64657373;
            short v4 = 2606;
            char v5 = 0;
            int v6 = sub_2E584(3, &__ptr1, 0);
            result = sub_3204C(v6, param1, __n);
            if(result != 0) {
            loc_33F4C:
                int v7 = sub_1E28C();
                if(v7 == 0 || gvar_7EDC8 == 0) {
                    return result;
                }
            }
        }
        sub_27940();
        sub_14FA4();
        if(gvar_7EB79 == 0) {
            int v8 = (int)gvar_482A8C;
            if(v8 > 0) {
                result = sub_19698(v8, param1, __n);
                goto loc_33FC0;
            }
        }
        else {
            uint32_t __s1 = sub_1E0C0();
            int v9 = strcmp((char*)__s1, "BHB28601");
            result = sub_19698(v9 != 0 ? 1500: 1900, param1, __n);
        loc_33FC0:
            if(result != 0) {
                sub_356C4(12, 0);
                sub_31D58(9, "get power type version failed!", __n);
                return result;
            }
        }
        if(gvar_7EB9C > 3) {
            int v10 = sub_1572C();
            snprintf(&__ptr1, 0x800, "start up min temp by 75a = %d", v10);
            sub_2E584(3, &__ptr1, 0);
        }
        sub_448C8();
        sub_449E0();
        sub_44A50();
        sub_304D4(10);
        sub_28138(&loc_1C200);
        sub_304D4(10);
        result = sub_329DC();
        if(result == 0) {
        loc_33F0C:
            sub_33950();
            result = 0;
            gvar_7F8D4 = 0;
            gvar_7F8DC = 0;
            gvar_7F8D8 = 0;
        }
        else {
            int v11 = sub_1E28C();
            if(v11 != 0 && gvar_7EDC8 != 0) {
                goto loc_33F0C;
            }
        }
    }
    return result;
}
