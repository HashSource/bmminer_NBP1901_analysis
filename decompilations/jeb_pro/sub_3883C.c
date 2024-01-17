int sub_3883C(int* param0) {
    char __ptr1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Send work one chain, chain = %d.\n", *param0);
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v0 = gvar_4FCB3C;
    if(v0 == 0) {
    loc_388B0:
        if(gvar_7EB9C > 3) {
            sub_387F8();
            return 0;
        }
    }
    else {
        int* ptr0 = *(uint32_t*)(v0 + 4);
        if(ptr0 == 0) {
            goto loc_388B0;
        }
        else {
            *(ptr0 + 7)(*param0, *(param0 + 2));
            *(param0 + SOCK_STREAM) = SOCK_STREAM;
        }
    }
    return 0;
}
