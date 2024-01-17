int sub_19074(int param0, int param1, int* param2) {
    int v0;
    if(param1 > SOCK_STREAM) {
        int v1 = param0;
        int* ptr0 = param2;
        int v2 = sub_5FAF8(52, param1);
        param2 = (v2 + 6) * 0x9e3779b9;
        int v3 = param1 - SOCK_STREAM;
        uint32_t v4 = *(uint32_t*)v1;
        int v5 = 0x61c88647;
        int* ptr1 = (int*)((param1 + 0x3fffffff) * 4 + v1);
        int* ptr2 = (int*)((char*)(v2 * 0x61c88647 + (int)param2) + 1253254570);
        while(SOCK_STREAM) {
            int v6 = v3;
            int* ptr3 = (int*)((int)param2 >>> 2);
            int* ptr4 = ptr1;
            do {
                int v7 = *(ptr4 - SOCK_STREAM);
                --ptr4;
                int v8 = *(int*)((int)(int*)((int)(int*)((int)(int*)(v6 ^ (int)ptr3) & 0x3) * 4) + (int)ptr0);
                v0 = v6;
                --v6;
                v4 = *(ptr4 + SOCK_STREAM) - (int)(int*)((((v7 * 16) ^ (v4 >>> 3)) + ((v4 * 4) ^ (v7 >>> 5))) ^ (int)(int*)((v7 ^ v8) + (int)(int*)((int)param2 ^ v4)));
                *(uint32_t*)(ptr4 + SOCK_STREAM) = v4;
            }
            while(v0 != SOCK_STREAM);
            int v9 = *ptr1;
            int* ptr5 = (int*)((int)param2 ^ v4);
            param2 = (int)param2 + v5;
            param0 = (v4 * 4) ^ (v9 >>> 5);
            v4 = *(int*)v1 - (int)(int*)((((v9 * 16) ^ (v4 >>> 3)) + ((v4 * 4) ^ (v9 >>> 5))) ^ (int)(int*)((*(int*)((int)(int*)((int)(int*)((int)ptr3 & 0x3) * 4) + (int)ptr0) ^ v9) + (int)ptr5));
            *(uint32_t*)v1 = v4;
            if(param2 == ptr2) {
                return param0;
            }
        }
    }
    else if(gvar_7EB9C > 3) {
        int __ptr1 = 0x45545858;
        int v10 = 1701060673;
        int v11 = 0x65646f63;
        int v12 = 1767990816;
        int v13 = 0x2c73656c;
        int v14 = 1008750112;
        int v15 = 540090429;
        int v16 = 1853189990;
        int v17 = 667236;
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
