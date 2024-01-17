uint32_t sub_1EB74() {
    int v0;
    char v1;
    uint32_t result = sub_1E0E0();
    if((int)result > 9) {
        result = sub_1E0E0();
        int v2 = result - 3;
        if(v2 >= 0) {
            do {
                uint32_t v3 = sub_1E100();
                int v4 = 0;
                uint32_t v5 = sub_1E160();
                int v6 = (v3 * v2 + v3 - SOCK_STREAM) * v5;
                do {
                    int v7 = (int)(uint8_t)v4;
                    result = sub_1E29C(v4);
                    ++v4;
                    if(result != 0) {
                        uint32_t v8 = sub_1E0E0();
                        uint32_t v9 = sub_1E100();
                        *(int*)&v1 = SOCK_STREAM;
                        result = sub_5129C(v7, v6, ((uint16_t)v8 - (uint16_t)v2) * (uint16_t)v9 + 14, 1, 1);
                    }
                }
                while(v4 != 4);
                v0 = v2;
                v2 -= 3;
            }
            while(v0 >= 3);
            return result;
        }
    }
    else if(gvar_7EB9C > 4) {
        int __ptr1 = 0x6e206f6e;
        int v10 = 543450469;
        int v11 = 1931505524;
        int v12 = 1965061221;
        int v13 = 544502369;
        int v14 = 1634493810;
        short v15 = 2681;
        char v16 = 0;
        result = sub_2E584(4, &__ptr1, 0);
    }
    return result;
}
