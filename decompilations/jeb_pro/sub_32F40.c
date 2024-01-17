int sub_32F40(void* param0) {
    uint32_t v0;
    int __ptr1;
    int v1;
    int v2 = (uint32_t)*(char*)param0;
    uint32_t v3 = gvar_482A5D;
    if(v2 != 82) {
        if(v3 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
            snprintf(&__ptr1, 0x800, "%s: SEND_JOB_TYPE is wrong : 0x%x\n", "dhash_chip_send_job", v2);
            sub_2E584(7, &__ptr1, 0);
        }
        return -1;
    }
    void* __src = param0;
    int v4 = *(int*)((int)param0 + 4);
    if(v3 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        int v5 = v4;
        snprintf(&__ptr1, 0x800, "%s: len = 0x%x\n", "dhash_chip_send_job", v5);
        sub_2E584(7, &__ptr1, 0);
    }
    size_t __nmemb = (size_t)(v4 + 8);
    void* __dest = calloc(__nmemb, 1);
    void* __ptr = __dest;
    if(__ptr != 0) {
        memcpy(__dest, __src, __nmemb);
        if(gvar_482A88 != 0) {
            int v6 = (int)gvar_7EDD8;
            if(*(char*)((int)__ptr + 80) != 0) {
                v0 = *(uint32_t*)((int)__ptr + 84);
                uint32_t v7 = *(uint32_t*)((int)__ptr + 88);
                gvar_7EB58 = v0;
                gvar_80F98 = v7;
                if(v6 == v0) {
                    goto loc_33100;
                }
                else {
                    goto loc_330F4;
                }
            }
            v0 = 1;
            gvar_7EB58 = 1;
            gvar_80F98 = 0;
            if(v6 != SOCK_STREAM) {
            loc_330F4:
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "Version num %d\n", v0);
                    sub_2E584(3, &__ptr1, 0);
                }
                v6 = gvar_7EB58;
                gvar_7EDD8 = gvar_7EB58;
            loc_33100:
                int v8 = v6 - 4;
                int v9 = v8 & 0xfffffffb;
                if((v8 & 0xfffffffb) == 0) {
                    uint32_t v10 = gvar_80F98;
                    if(gvar_7EDDC != v10) {
                        if(gvar_7EB9C > 3) {
                            snprintf(&__ptr1, 0x800, "Mask num 0x%x\n", v10);
                            sub_2E584(3, &__ptr1, v9);
                            v10 = gvar_80F98;
                            v6 = gvar_7EB58;
                        }
                        int v11 = (int)gvar_482A6C;
                        gvar_7EDDC = v10;
                        sub_321B8(v11, v6, 90);
                    }
                    int v12 = (uint32_t)*(char*)((int)__ptr + 9);
                    if((v12 & 0x2) != 0) {
                        sub_44E1C((int)*(char*)((int)__ptr + 10));
                        v12 = (uint32_t)*(char*)((int)__ptr + 9);
                    }
                    int v13 = (uint32_t)*(short*)((int)__ptr + 60);
                    uint32_t v14 = gvar_80F98;
                    int v15 = gvar_482A89;
                    int v16 = (int)gvar_7EB58;
                    uint32_t v17 = gvar_99EDDC;
                    int v18 = *(int*)((int)__ptr + 12);
                    int* ptr0 = (int*)(v13 + (int)__src) + 24;
                    int v19 = (uint32_t)*(short*)((int)__ptr + 66);
                    int v20 = v18;
                    int v21 = *(int*)((int)__ptr + 56);
                    int v22 = v19;
                    int v23 = (uint32_t)*(short*)((int)__ptr + 64);
                    int v24 = v21;
                    int v25 = (uint32_t)*(short*)((int)__ptr + 62);
                    int v26 = v12 & SOCK_STREAM;
                    uint32_t v27 = v14;
                    int v28 = v23;
                    int v29 = *(int*)((int)__ptr + 16);
                    int* ptr1 = (int*)((int)__ptr + 20);
                    int v30 = v25;
                    int v31 = *(int*)((int)__ptr + 72);
                    int v32 = *(int*)((int)__ptr + 76);
                    int v33 = *(int*)((int)__ptr + 52);
                    int v34 = v16;
                    int v35 = v13;
                    int* ptr2 = (int*)((int)__src + 96);
                    int v36 = v29;
                    int v37 = v31;
                    int v38 = v32;
                    int v39 = 32;
                    int v40 = v33;
                    int v41 = 0;
                    if(v15 == 0) {
                        int v42 = sub_452B0();
                        sub_452D0(v42 | &ELFHeader);
                        int v43 = sub_4476C();
                        sub_44794(v43 | 0x80);
                        gvar_482A89 = 1;
                    }
                    if(gvar_7EB9C > 4) {
                        snprintf(&__ptr1, 0x800, "start to send job, mid_auto_gen = %d", 0);
                        sub_2E584(4, &__ptr1, 0);
                    }
                    sub_45334(&v41);
                    free(__ptr);
                    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                        snprintf(&__ptr1, 0x800, "--- %s end\n", "dhash_chip_send_job");
                        sub_2E584(7, &__ptr1, 0);
                    }
                    sub_302A0(&gvar_482A74);
                    sub_304D4(SOCK_STREAM);
                    return 0;
                }
            }
        }
        else if(gvar_7EB9C > 3) {
            __ptr1 = 0x796c6e6f;
            int v44 = 0x70757320;
            int v45 = 1953656688;
            int v46 = 1769169184;
            __builtin_strcpy(&v1, "c boost");
            sub_2E584(3, &__ptr1, 0);
        }
        free(__ptr);
        return 0;
    }
    if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        snprintf(&__ptr1, 0x800, "%s: malloc buffer failed.\n", "dhash_chip_send_job");
        sub_2E584(7, &__ptr1, 0);
    }
    return -2;
}
