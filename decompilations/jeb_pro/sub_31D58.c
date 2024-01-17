void sub_31D58(int param0, int param1, size_t __n) {
    uint32_t v0;
    int __ptr1;
    int v1 = param0;
    gvar_482A64 = (uint32_t)param0;
    uint32_t v2 = gvar_7EB9C;
    if(param1 != 0 && v2 <= 3) {
        goto loc_31E34;
    }
    else if(param1 != 0) {
        if((uint32_t)param0 <= 17) {
            v2 = *(uint32_t*)(param0 * 4 + (int)&ptr_aSTATUS_INIT);
        }
        if((uint32_t)param0 > 17) {
            v2 = 0;
        }
        snprintf(&__ptr1, 0x800, "%s: %s\n", v2, param1);
        sub_2E584(3, &__ptr1, 0);
        goto loc_31DD4;
    }
    if(v2 <= 3) {
    loc_31E34:
        if(v1 == 3) {
            return;
        }
        v0 = v1;
        goto loc_31DDC;
    }
    else {
        snprintf(&__ptr1, 0x800, "\n");
        sub_2E584(3, &__ptr1, 0);
    loc_31DD4:
        v0 = gvar_482A64;
    }
    if(v1 != 3) {
    loc_31DDC:
        gvar_482A68 = (uint32_t)v1;
    }
    switch(v0) {
        case 6: 
        case 11: 
        case 13: {
            break;
        }
        case 4: 
        case 5: 
        case 7: 
        case 8: 
        case 9: 
        case 10: 
        case 12: 
        case 14: 
        case 15: 
        case 16: 
        case 17: {
            if(gvar_7EB9C > SOCK_STREAM) {
                snprintf(&__ptr1, 0x800, "%s: %s\n", "stop_mining", param1);
                sub_2E584(SOCK_STREAM, &__ptr1, 0);
            }
            sub_15150();
            sub_27FF8();
            sub_27F58();
            pthread_t v3 = sub_27EB8();
            sub_31CAC((int)v3, param1, __n);
            sub_42728();
            sub_42784();
            return;
        }
        default: {
            return;
        }
    }
    if(gvar_7EB9C > SOCK_STREAM) {
        snprintf(&__ptr1, 0x800, "%s: %s\n", "stop_mining_and_restart", param1);
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
    }
    sub_15150();
    sub_27FF8();
    sub_27F58();
    pthread_t v4 = sub_27EB8();
    sub_31CAC((int)v4, param1, __n);
    sub_42728();
    sub_42784();
    __ptr1 = 1953719666;
    int v5 = 175403617;
    char v6 = 0;
    sub_2E584(0, &__ptr1, 0);
    /*NO_RETURN*/ __assert_fail("\n", "driver-btm-api.c", 152, "stop_mining_and_restart");
}
