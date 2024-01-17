void sub_4C3B8(int param0, int param1) {
    int v0;
    int v1;
    int v2 = *(int*)(param0 + 16);
    int v3 = param0 + v2;
    if(*(char*)(v3 + 8) == 0) {
        int v4 = *(int*)param0(*(int*)(param0 + 4), param1, v2);
        if(v4 == -1) {
            *(int*)(param0 + 20) = -1;
            return;
        }
        *(int*)(param0 + 16) = 0;
        *(char*)(param0 + 8) = (uint8_t)v4;
        if((uint32_t)(v4 - 128) > 127) {
            v0 = SOCK_STREAM;
            v3 = param0;
            *(char*)(param0 + 9) = 0;
            goto loc_4C420;
        }
        else {
            v1 = sub_4DE1C((int)(uint8_t)v4);
        }
    }
    else {
        v0 = v2 + SOCK_STREAM;
        goto loc_4C420;
    }
    if(v1 != 0) {
        if((uint32_t)v1 <= SOCK_STREAM) {
            /*NO_RETURN*/ __assert_fail("count >= 2", "load.c", 189, "stream_get");
        }
        char* ptr0 = (char*)(param0 + 9);
        int* ptr1 = (int*)(param0 + v1 + 8);
        do {
            int v5 = *(int*)param0(*(int*)(param0 + 4));
            *ptr0 = (uint8_t)v5;
            ++ptr0;
        }
        while(ptr0 != ptr1);
        int v6 = sub_4DE88((char*)(param0 + 8), v1, NULL);
        if(v6 != 0) {
            *(char*)(param0 + v1 + 8) = 0;
            int v7 = *(int*)(param0 + 16);
            v0 = v7 + SOCK_STREAM;
            v3 = param0 + v7;
        loc_4C420:
            *(int*)(param0 + 16) = v0;
            int v8 = (int)*(char*)(v3 + 8);
            ++*(int*)(param0 + 36);
            if(v8 != 10) {
                int v9 = sub_4DE1C(v8);
                if(v9 != 0) {
                    ++*(int*)(param0 + 28);
                }
                return;
            }
            int v10 = *(int*)(param0 + 24);
            int v11 = *(int*)(param0 + 28);
            *(int*)(param0 + 28) = 0;
            *(int*)(param0 + 24) = v10 + SOCK_STREAM;
            *(int*)(param0 + 32) = v11;
            return;
        }
    }
    *(int*)(param0 + 20) = -2;
    sub_4C0CC(param1, param0, 5, "unable to decode byte 0x%x");
}
