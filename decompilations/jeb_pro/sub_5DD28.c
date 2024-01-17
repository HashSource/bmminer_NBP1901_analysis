char* sub_5DD28(char* param0, int param1) {
    if((param1 != 0 ? param0 == 0: SOCK_STREAM) == 0) {
        int v0 = *(int*)&param0[12](param1, param1);
        sub_5FADC(v0, *(int*)&param0[8]);
        void* __ptr = *(void**)(param1 * 4 + *(int*)&param0[4]);
        if(__ptr != 0) {
        loc_5DD84:
            do {
                int v1 = *(int*)&param0[16](param1, *(int*)((int)__ptr + 4));
                if(v1 == 0) {
                    __ptr = *(void**)((int)__ptr + 16);
                    if(__ptr == 0) {
                        goto loc_5DE14;
                    }
                    else {
                        goto loc_5DD84;
                    }
                }
                char v2 = *(int*)&param0[20];
                if(v2 != 0) {
                    v2(*(int*)((int)__ptr + 4));
                }
                char v3 = *(int*)&param0[24];
                if(v3 != 0) {
                    v3(*(int*)((int)__ptr + 8));
                }
                uint32_t* ptr0 = *(uint32_t*)((int)__ptr + 16);
                uint32_t* ptr1 = *(uint32_t*)((int)__ptr + 12);
                if(ptr0 != 0) {
                    *(ptr0 + 3) = ptr1;
                    ptr1 = *(uint32_t*)((int)__ptr + 12);
                }
                if(ptr1 == 0) {
                    sub_5FADC(*(int*)__ptr, *(int*)&param0[8]);
                    *(uint32_t*)(param1 * 4 + *(int*)&param0[4]) = ptr0;
                }
                else {
                    *(ptr1 + 4) = ptr0;
                }
                free(__ptr);
                --*(int*)&param0[0];
                return param0;
            }
            while(SOCK_STREAM);
        loc_5DE14:
        }
        param0 = sub_5DF98(&g2, "src/zc_hashtable.c", 251, "p[%p] not found in hashtable");
        return param0;
    }
    int v4 = param1;
    param0 = sub_5DF98(&g2, "src/zc_hashtable.c", 240, "a_table[%p] or a_key[%p] is NULL, just do nothing");
    return param0;
}
