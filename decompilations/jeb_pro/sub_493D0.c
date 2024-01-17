int sub_493D0(int param0) {
    int v0;
    int v1;
    int v2;
    int __ptr1;
    int result;
    short v3;
    char v4;
    int v5 = pthread_mutex_lock(&g505188);
    if(v5 == 0) {
        if(param0 == 0) {
            result = -3;
            __ptr1 = 543449442;
            v2 = 1634886000;
            v3 = 2669;
            char v6 = 0;
            sub_2E584(0, &__ptr1, 0);
        }
        else {
            uint32_t v7 = sub_49904();
            result = v7;
            if(result >= 0) {
                int v8 = sub_4A3EC((int)v7, (int)*(short*)(param0 + 4));
                if(v8 == 0) {
                    int v9 = sub_4A2D8(result, 1795, ((uint32_t)*(char*)(param0 + 6) * 16) | ((uint32_t)*(char*)(param0 + 7) * 2));
                    if(v9 != 0) {
                        __ptr1 = 1818845542;
                        v2 = 1948279909;
                        *(int*)&v3 = 845750383;
                        v1 = 1869176675;
                        v0 = 174879843;
                        v4 = 0;
                        sub_2E584(0, &__ptr1, 0);
                    loc_4944C:
                        if(result == 0) {
                            result = -1;
                        }
                        else {
                            int v10 = result;
                            result = -1;
                            sub_499E8(v10);
                        }
                    }
                }
                else {
                    __ptr1 = 1818845542;
                    v2 = 1948279909;
                    *(int*)&v3 = 845750383;
                    v1 = 1702059875;
                    v0 = 0x7463656c;
                    *(short*)&v4 = 10;
                    sub_2E584(0, &__ptr1, 0);
                    goto loc_4944C;
                }
            }
            else {
                result = -1;
                __ptr1 = 1818845542;
                v2 = 1948279909;
                *(int*)&v3 = 845750383;
                v1 = 1852399459;
                v0 = 685161;
                sub_2E584(0, &__ptr1, 0);
            }
        }
        pthread_mutex_unlock(&g505188);
        return result;
    }
    __ptr1 = 1818845542;
    v2 = 1948279909;
    *(int*)&v3 = 0x6969206f;
    v1 = 1869357155;
    v0 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -4;
}
