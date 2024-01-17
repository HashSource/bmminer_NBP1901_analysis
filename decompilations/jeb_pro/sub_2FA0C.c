int sub_2FA0C(int* param0, int* param1) {
    int result;
    char v0;
    char __ptr1;
    int* ptr0 = param0 + 8;
    int* ptr1 = param1 + 8;
    do {
        int v1 = *(ptr0 - SOCK_STREAM);
        --ptr0;
        int v2 = *(ptr1 - SOCK_STREAM);
        --ptr1;
        v0 = v2 <= v1;
        if(v0 != 0 && v2 != v1) {
            result = 0;
        loc_2FA50:
            if(gvar_482A5D == 0) {
                return result;
            }
            int v3 = *(param0 + 6);
            int v4 = *(param0 + 7);
            int v5 = *(param0 + 5);
            int v6 = *(param0 + 4);
            int v7 = (uint32_t)(uint8_t)(v3 >>> 24) | ((uint32_t)(uint8_t)(v3 >>> 16) << 8) | ((uint32_t)(uint8_t)(v3 >>> 8) << 16) | ((uint32_t)(uint8_t)v3 << 24);
            int v8 = *(param0 + 2);
            int v9 = (uint32_t)(uint8_t)(v4 >>> 24) | ((uint32_t)(uint8_t)(v4 >>> 16) << 8) | ((uint32_t)(uint8_t)(v4 >>> 8) << 16) | ((uint32_t)(uint8_t)v4 << 24);
            int v10 = (uint32_t)(uint8_t)(v5 >>> 24) | ((uint32_t)(uint8_t)(v5 >>> 16) << 8) | ((uint32_t)(uint8_t)(v5 >>> 8) << 16) | ((uint32_t)(uint8_t)v5 << 24);
            int v11 = *(param0 + 3);
            int v12 = (uint32_t)(uint8_t)(v6 >>> 24) | ((uint32_t)(uint8_t)(v6 >>> 16) << 8) | ((uint32_t)(uint8_t)(v6 >>> 8) << 16) | ((uint32_t)(uint8_t)v6 << 24);
            int v13 = *param0;
            int v14 = *(param0 + SOCK_STREAM);
            int v15 = (uint32_t)(uint8_t)(v8 >>> 24) | ((uint32_t)(uint8_t)(v8 >>> 16) << 8) | ((uint32_t)(uint8_t)(v8 >>> 8) << 16) | ((uint32_t)(uint8_t)v8 << 24);
            int v16 = *(param1 + 7);
            int v17 = (uint32_t)(uint8_t)(v14 >>> 24) | ((uint32_t)(uint8_t)(v14 >>> 16) << 8) | ((uint32_t)(uint8_t)(v14 >>> 8) << 16) | ((uint32_t)(uint8_t)v14 << 24);
            int v18 = *(param1 + 6);
            int v19 = (uint32_t)(uint8_t)(v13 >>> 24) | ((uint32_t)(uint8_t)(v13 >>> 16) << 8) | ((uint32_t)(uint8_t)(v13 >>> 8) << 16) | ((uint32_t)(uint8_t)v13 << 24);
            int v20 = (uint32_t)(uint8_t)(v16 >>> 24) | ((uint32_t)(uint8_t)(v16 >>> 16) << 8) | ((uint32_t)(uint8_t)(v16 >>> 8) << 16) | ((uint32_t)(uint8_t)v16 << 24);
            int v21 = *(param1 + 5);
            int v22 = *(param1 + 4);
            int v23 = *(param1 + 3);
            int v24 = (uint32_t)(uint8_t)(v18 >>> 24) | ((uint32_t)(uint8_t)(v18 >>> 16) << 8) | ((uint32_t)(uint8_t)(v18 >>> 8) << 16) | ((uint32_t)(uint8_t)v18 << 24);
            int v25 = *(param1 + 2);
            int v26 = (uint32_t)(uint8_t)(v21 >>> 24) | ((uint32_t)(uint8_t)(v21 >>> 16) << 8) | ((uint32_t)(uint8_t)(v21 >>> 8) << 16) | ((uint32_t)(uint8_t)v21 << 24);
            int v27 = (uint32_t)(uint8_t)(v22 >>> 24) | ((uint32_t)(uint8_t)(v22 >>> 16) << 8) | ((uint32_t)(uint8_t)(v22 >>> 8) << 16) | ((uint32_t)(uint8_t)v22 << 24);
            int v28 = *param1;
            v2 = *(param1 + SOCK_STREAM);
            int v29 = (uint32_t)(uint8_t)(v11 >>> 24) | ((uint32_t)(uint8_t)(v11 >>> 16) << 8) | ((uint32_t)(uint8_t)(v11 >>> 8) << 16) | ((uint32_t)(uint8_t)v11 << 24);
            int v30 = (uint32_t)(uint8_t)(v23 >>> 24) | ((uint32_t)(uint8_t)(v23 >>> 16) << 8) | ((uint32_t)(uint8_t)(v23 >>> 8) << 16) | ((uint32_t)(uint8_t)v23 << 24);
            int v31 = (uint32_t)(uint8_t)(v2 >>> 24) | ((uint32_t)(uint8_t)(v2 >>> 16) << 8) | ((uint32_t)(uint8_t)(v2 >>> 8) << 16) | ((uint32_t)(uint8_t)v2 << 24);
            int v32 = (uint32_t)(uint8_t)(v28 >>> 24) | ((uint32_t)(uint8_t)(v28 >>> 16) << 8) | ((uint32_t)(uint8_t)(v28 >>> 8) << 16) | ((uint32_t)(uint8_t)v28 << 24);
            int v33 = (uint32_t)(uint8_t)(v25 >>> 24) | ((uint32_t)(uint8_t)(v25 >>> 16) << 8) | ((uint32_t)(uint8_t)(v25 >>> 8) << 16) | ((uint32_t)(uint8_t)v25 << 24);
            void* __ptr = sub_2F670(&v9, &g20);
            void* __ptr2 = sub_2F670(&v20, &g20);
            if(gvar_482A5D != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
                char* ptr2 = result != 0 ? "YES (hash <= target)": "no (false positive; hash > target)";
                void* ptr3 = __ptr2;
                snprintf(&__ptr1, 0x800, " Proof: %s\nTarget: %s\nTrgVal? %s", __ptr, __ptr2, result != 0 ? "YES (hash <= target)": "no (false positive; hash > target)");
                sub_2E584(7, &__ptr1, 0);
            }
            free(__ptr);
            free(__ptr2);
            return result;
        }
    }
    while(v0 != 0 && param0 != ptr0);
    result = SOCK_STREAM;
    goto loc_2FA50;
}
