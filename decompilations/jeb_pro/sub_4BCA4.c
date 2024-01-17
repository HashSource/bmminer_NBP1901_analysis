// Stale decompilation - Refresh this view to re-decompile this code
int sub_4BCA4(int param0, char* __s2) {
    size_t v0 = strlen(__s2);
    int v1 = sub_4B2F4(__s2, (int)v0, gvar_5051C0);
    int v2 = *(int*)(param0 + 8);
    int* ptr0 = *(uint32_t*)(param0 + 4);
    int v3 = (v2 < 32 ? ~(-1 << v2): -1) & v1;
    uint32_t* ptr1 = (uint32_t*)(v3 * 8 + (int)ptr0);
    uint32_t* ptr2 = sub_4B838(param0, ptr1, __s2, (int*)v1);
    if(ptr2 != 0) {
        uint32_t v4 = ptr1[SOCK_STREAM];
        uint32_t v5 = ptr2[SOCK_STREAM];
        uint32_t v6 = ptr2[0];
        if(*(int*)(v3 * 8 + (int)ptr0) == ptr2) {
            uint32_t v7 = v4;
            if(v4 == ptr2) {
                v4 = param0 + 12;
            }
            else {
                *(uint32_t*)(v3 * 8 + (int)ptr0) = v5;
            }
            if(ptr2 == v7) {
                ptr1[SOCK_STREAM] = v4;
                *(uint32_t*)(v3 * 8 + (int)ptr0) = v4;
            }
        }
        else if(v4 == ptr2) {
            ptr1[SOCK_STREAM] = v6;
        }
        *(uint32_t*)(v6 + 4) = v5;
        uint32_t v8 = ptr2[3];
        uint32_t v9 = ptr2[5];
        *(uint32_t*)ptr2[SOCK_STREAM] = v6;
        uint32_t v10 = ptr2[2];
        *(uint32_t*)(v10 + 4) = v8;
        *(uint32_t*)ptr2[3] = v10;
        if(v9 != 0 && *(int*)(v9 + 4) != -1) {
            DMB();
            int v11 = *(int*)(v9 + 4) - SOCK_STREAM;
            --*(int*)(v9 + 4);
            if(v11 == 0) {
                sub_4EB6C((int)v9, 0, 0);
            }
        }
        sub_4D898(ptr2);
        --*(int*)param0;
        return 0;
    }
    return -1;
}
