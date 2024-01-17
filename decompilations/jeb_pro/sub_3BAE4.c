int sub_3BAE4(int param0) {
    char __ptr1;
    int v0 = sub_3B8A0(param0, (int)(gvar_4FCB44 + 4));
    int v1 = sub_3B94C(param0, (int)(gvar_4FCB44 + 4));
    int v2 = sub_3BA18(param0, (int)(gvar_4FCB44 + 4));
    int v3 = sub_3BA18(param0, (int)(gvar_4FCB44 + 0x1014));
    int* ptr0 = *(int**)gvar_4FCB44;
    uint32_t v4 = *(uint32_t*)(ptr0 + 5);
    if(v4 > (uint32_t)v0) {
        int v5 = *(ptr0 + 7);
        uint32_t v6 = (uint32_t)(v2 - v1);
        if(v5 <= v6 && gvar_7EB9C <= 3) {
            return SOCK_STREAM;
        }
        else if(v5 <= v6) {
            snprintf(&__ptr1, 0x800, "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n", param0, v2, v1, v6, v5);
        }
        else {
            if((uint32_t)v3 <= v4) {
                return 0;
            }
            if(gvar_7EB9C <= 3) {
                return SOCK_STREAM;
            }
            snprintf(&__ptr1, 0x800, "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n", param0, v3, v4);
        }
    loc_3BC38:
        sub_2E584(3, &__ptr1, 0);
    }
    else if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n", param0, v0, v4);
        goto loc_3BC38;
    }
    return SOCK_STREAM;
}
