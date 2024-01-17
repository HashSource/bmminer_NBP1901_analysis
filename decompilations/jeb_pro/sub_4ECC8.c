uint32_t* sub_4ECC8(uint32_t* param0, int* param1, void* param2) {
    uint32_t* ptr0;
    if(param0 != 0 && *param0 == 0) {
        if(param1 == 0) {
            ptr0 = &g1;
        }
        if(param1 != 0) {
            ptr0 = (int)param2 >= 0 ? (uint32_t*)(((int*)((int)(int*)((int)param2 >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)param2 >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)param2 >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)param2 >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)param2 >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)param2 >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)param2 >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)param2 >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)param2 >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)param2 >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)param2 >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)param2 >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)param2 >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)param2 >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)param2 >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)param2 >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)param2 >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)param2 >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)param2 >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)param2 >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)param2 >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)param2 >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)param2 >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)param2 >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)param2 >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)param2 >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)param2 >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)param2 >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)param2 >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)param2 >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (void*)((int)param2 & SOCK_STREAM) ? 31: 32) >>> 5): NULL;
        }
        if(ptr0 == 0) {
            sub_4BEC0(param1, (int)param2);
            return NULL;
        }
    }
    if(param2 != 0 && *(int*)((int)param2 + 4) != -1) {
        DMB();
        param1 = (char*)*(uint32_t*)((int)param2 + 4) - SOCK_STREAM;
        *(int**)((int)param2 + 4) = (int*)((char*)*(uint32_t*)((int)param2 + 4) - SOCK_STREAM);
        if(param1 == 0) {
            sub_4EB6C(param2);
            return &gFFFFFFFF;
        }
    }
    return &gFFFFFFFF;
}
