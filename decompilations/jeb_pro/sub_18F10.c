int sub_18F10(int param0, int param1, int* param2) {
    if(param1 > SOCK_STREAM) {
        int v0 = param0;
        int* ptr0 = (int*)((param1 + 0x3fffffff) * 4 + v0);
        int* ptr1 = *(uint32_t*)((param1 + 0x3fffffff) * 4 + v0);
        int v1 = sub_5FAF8(52, param1);
        int v2 = 0x9e3779b9;
        int v3 = 0;
        int v4 = v1 * 0x9e3779b9 - 1253254570;
        while(SOCK_STREAM) {
            int v5 = v0;
            int v6 = 0;
            v3 += v2;
            do {
                int v7 = *(int*)(v5 + 4);
                int v8 = *(int*)((((v3 >>> 2) ^ v6) & 0x3) * 4 + (int)param2);
                ++v6;
                ptr1 = (int)(int*)((int)(int*)((int)(int*)((v7 * 4) ^ (int)(int*)((int)ptr1 >>> 5)) + (int)(int*)((int)(int*)((int)ptr1 * 16) ^ (v7 >>> 3))) ^ (int)(int*)((v7 ^ v3) + (int)(int*)(v8 ^ (int)ptr1))) + *(int*)v5;
                *(int**)v5 = ptr1;
                v5 += 4;
            }
            while(param1 - SOCK_STREAM != v6);
            int v9 = *(int*)v0;
            int v10 = v4;
            param0 = (int)(int*)((int)ptr1 * 16) ^ (v9 >>> 3);
            ptr1 = (int)(int*)((int)(int*)((int)(int*)((v9 * 4) ^ (int)(int*)((int)ptr1 >>> 5)) + param0) ^ (int)(int*)((int)(int*)(*(int*)((((param1 - SOCK_STREAM) ^ (v3 >>> 2)) & 0x3) * 4 + (int)param2) ^ (int)ptr1) + (v9 ^ v3))) + *ptr0;
            *ptr0 = ptr1;
            if(v3 == v10) {
                return param0;
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        int __ptr1 = 0x45545858;
        int v11 = 1852121153;
        int v12 = 0x65646f63;
        int v13 = 1767990816;
        int v14 = 0x2c73656c;
        int v15 = 1008750112;
        int v16 = 540090429;
        int v17 = 1853189990;
        int v18 = 667236;
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
