// Stale decompilation - Refresh this view to re-decompile this code
int sub_4F494(int* param0, int param1) {
    int v0;
    if(param1 != 0) {
        if(param0 == 0) {
        loc_4F4D4:
            if(*(int*)(param1 + 4) != -1) {
                DMB();
                v0 = *(int*)(param1 + 4) - SOCK_STREAM;
                --*(int*)(param1 + 4);
            loc_4F500:
                if(v0 == 0) {
                    sub_4EB6C(param1, 0, 0);
                    return -1;
                }
            }
        }
        else {
            int* ptr0 = (int*)(param1 - (int)param0);
            int v1 = (int)ptr0 >= 0 ? ((int*)((int)(int*)((int)ptr0 >>> 30) & SOCK_STREAM) ? SOCK_STREAM: (int*)((int)(int*)((int)ptr0 >>> 29) & SOCK_STREAM) ? 2: (int*)((int)(int*)((int)ptr0 >>> 28) & SOCK_STREAM) ? 3: (int*)((int)(int*)((int)ptr0 >>> 27) & SOCK_STREAM) ? 4: (int*)((int)(int*)((int)ptr0 >>> 26) & SOCK_STREAM) ? 5: (int*)((int)(int*)((int)ptr0 >>> 25) & SOCK_STREAM) ? 6: (int*)((int)(int*)((int)ptr0 >>> 24) & SOCK_STREAM) ? 7: (int*)((int)(int*)((int)ptr0 >>> 23) & SOCK_STREAM) ? 8: (int*)((int)(int*)((int)ptr0 >>> 22) & SOCK_STREAM) ? 9: (int*)((int)(int*)((int)ptr0 >>> 21) & SOCK_STREAM) ? 10: (int*)((int)(int*)((int)ptr0 >>> 20) & SOCK_STREAM) ? 11: (int*)((int)(int*)((int)ptr0 >>> 19) & SOCK_STREAM) ? 12: (int*)((int)(int*)((int)ptr0 >>> 18) & SOCK_STREAM) ? 13: (int*)((int)(int*)((int)ptr0 >>> 17) & SOCK_STREAM) ? 14: (int*)((int)(int*)((int)ptr0 >>> 16) & SOCK_STREAM) ? 15: (int*)((int)(int*)((int)ptr0 >>> 15) & SOCK_STREAM) ? 16: (int*)((int)(int*)((int)ptr0 >>> 14) & SOCK_STREAM) ? 17: (int*)((int)(int*)((int)ptr0 >>> 13) & SOCK_STREAM) ? 18: (int*)((int)(int*)((int)ptr0 >>> 12) & SOCK_STREAM) ? 19: (int*)((int)(int*)((int)ptr0 >>> 11) & SOCK_STREAM) ? 20: (int*)((int)(int*)((int)ptr0 >>> 10) & SOCK_STREAM) ? 21: (int*)((int)(int*)((int)ptr0 >>> 9) & SOCK_STREAM) ? 22: (int*)((int)(int*)((int)ptr0 >>> 8) & SOCK_STREAM) ? 23: (int*)((int)(int*)((int)ptr0 >>> 7) & SOCK_STREAM) ? 24: (int*)((int)(int*)((int)ptr0 >>> 6) & SOCK_STREAM) ? 25: (int*)((int)(int*)((int)ptr0 >>> 5) & SOCK_STREAM) ? 26: (int*)((int)(int*)((int)ptr0 >>> 4) & SOCK_STREAM) ? 27: (int*)((int)(int*)((int)ptr0 >>> 3) & SOCK_STREAM) ? 28: (int*)((int)(int*)((int)ptr0 >>> 2) & SOCK_STREAM) ? 29: (int*)((int)(int*)((int)ptr0 >>> SOCK_STREAM) & SOCK_STREAM) ? 30: (int*)((int)ptr0 & SOCK_STREAM) ? 31: 32) >>> 5: 0;
            if(param0[0] != SOCK_STREAM) {
                v1 |= SOCK_STREAM;
            }
            if(v1 == 0) {
                void* ptr1 = sub_4E0B8(param0, SOCK_STREAM, SOCK_STREAM);
                if(ptr1 != 0) {
                    int v2 = param0[3];
                    *(int*)(v2 * 4 + param0[4]) = param1;
                    param0[3] = v2 + SOCK_STREAM;
                    return 0;
                }
                if(*(int*)(param1 + 4) != -1) {
                    DMB();
                    v0 = *(int*)(param1 + 4) - SOCK_STREAM;
                    --*(int*)(param1 + 4);
                    goto loc_4F500;
                }
            }
            else {
                goto loc_4F4D4;
            }
        }
    }
    return -1;
}
