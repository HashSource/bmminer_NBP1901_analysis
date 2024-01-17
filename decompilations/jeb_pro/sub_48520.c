int sub_48520(int param0, char* param1, int param2, char* param3, int param4) {
    int v0;
    int v1;
    int result;
    int __ptr1;
    int v2 = param0;
    char* ptr0 = param3 + SOCK_STREAM;
    char v3 = 17;
    pthread_mutex_lock(&g505164);
    __useconds_t __useconds = "\n";
    char* ptr1 = param4 - 2 + param3;
    int* ptr2 = (int*)(param3 - 3);
    char* ptr3 = param4 - SOCK_STREAM + param3;
    int v4 = 0;
    do {
        int v5 = 0;
        int v6 = 0;
        do {
            v5 = (uint32_t)((uint8_t)v5 + SOCK_STREAM);
            sub_49794(v2, &v3, SOCK_STREAM, (int)(param1 + v6), SOCK_STREAM);
            v6 = v5;
        }
        while(param2 > v5);
        int v7 = 0;
        usleep(__useconds);
        int v8 = 0;
        do {
            v7 = (uint32_t)((uint8_t)v7 + SOCK_STREAM);
            sub_496F4(v2, &v3, SOCK_STREAM, (int)(v8 + param3), SOCK_STREAM);
            v8 = v7;
        }
        while(v7 < param4);
        usleep(&loc_186A0);
        char* ptr4 = ptr0;
        int* ptr5 = (int*)((int)ptr2 + param4);
        int v9 = 0;
        do {
            int v10 = (uint32_t)*(ptr4 + SOCK_STREAM);
            ++ptr4;
            v9 = (uint32_t)((uint16_t)v10 + (uint16_t)v9);
        }
        while(ptr5 != ptr4);
        int v11 = (uint32_t)((uint16_t)*ptr3 * 0x100 + (uint16_t)*ptr1);
        if(v11 != v9) {
            snprintf(&__ptr1, 0x800, "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n", v9, v11);
        }
        else if(((uint32_t)*param1 == (uint32_t)*param3 && (uint32_t)*(param1 + SOCK_STREAM) == (uint32_t)*(param3 + SOCK_STREAM)) && (uint32_t)*(param1 + 3) == (uint32_t)*(param3 + 3) && (uint32_t)*(param3 + 2) + 2 == param4) {
            result = 0;
            pthread_mutex_unlock(&g505164);
            return result;
        }
        else {
            __ptr1 = 0x65776f70;
            int v12 = 0x65722072;
            int v13 = 544828528;
            int v14 = 543516788;
            int v15 = 543449442;
            int v16 = 0x61746164;
            short v17 = 10;
        }
        sub_2E584(0, &__ptr1, 0);
        char* ptr6 = param3 - SOCK_STREAM;
        int v18 = v2;
        int v19 = 0;
        int* ptr7 = (int*)(ptr6 + param4);
        do {
            int v20 = (uint32_t)*(ptr6 + SOCK_STREAM);
            ++ptr6;
            int v21 = v19;
            ++v19;
            v1 = v20;
            snprintf(&__ptr1, 0x800, "read_back_data[%d] = 0x%02x", v21);
            sub_2E584(0, &__ptr1, 0);
        }
        while(ptr6 != ptr7);
        v2 = v18;
        int v22 = (uint32_t)*(param1 + 3);
        v1 = v4;
        v0 = v4 + SOCK_STREAM;
        ++v4;
        snprintf(&__ptr1, 0x800, "Send power cmd(0x%02x) failed, retry %d\n", v22, v1);
        sub_2E584(0, &__ptr1, 0);
    }
    while(v0 != 3);
    result = 0x80000300;
    pthread_mutex_unlock(&g505164);
    return result;
}
