int sub_2A688() {
    int v0;
    char* ptr0;
    int v1;
    int v2;
    char __ptr;
    char v3;
    char __ptr1;
    FILE* __stream = fopen64(gvar_80970, "rb");
    memset(&__ptr, 0, 0x100);
    if(__stream == 0) {
        ptr0 = &gvar_590404;
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "Open miner version file %s error", gvar_80970);
            sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        size_t cnt_read = fread(&__ptr, 1, 0x100, __stream);
        if((int)cnt_read > 0) {
            char* ptr1 = strchr((char*)&__ptr, 10);
            if(ptr1 == 0) {
                strcpy(&g80BA0, (char*)&__ptr);
            }
            else {
                v2 = 1515;
                v1 = "read_version_file";
                sub_30EA8(&g80BA0, &__ptr, (size_t)(ptr1 - &__ptr), "bmminer.c", "read_version_file", 1515);
                char* ptr2 = stpcpy((char*)&__ptr, ptr1 + SOCK_STREAM);
                char* ptr3 = strchr((char*)&__ptr, 10);
                if(ptr3 == 0) {
                    memcpy(&g80CA0, &__ptr, (size_t)((char*)(ptr2 - &v3) + 2329));
                }
                else {
                    v2 = 1524;
                    v1 = "read_version_file";
                    sub_30EA8(&g80CA0, &__ptr, (size_t)(ptr3 - &__ptr), "bmminer.c", "read_version_file", 1524);
                }
            }
            size_t v4 = strlen(&g80BA0);
            char* ptr4 = (char*)(v4 - SOCK_STREAM);
            char* ptr5 = ptr4 + 0x80768;
            int v5 = (uint32_t)*(ptr5 + 1080);
            if(v5 == 10) {
                *(ptr5 + 1080) = 0;
                size_t v6 = strlen(&g80BA0);
                ptr4 = v6 - SOCK_STREAM;
                v5 = (uint32_t)*(ptr4 + 0x80ba0);
            }
            if(v5 == 13) {
                *(ptr4 + 0x80ba0) = 0;
            }
            size_t v7 = strlen(&g80CA0);
            char* ptr6 = (char*)(v7 - SOCK_STREAM);
            char* ptr7 = ptr6 + 0x80768;
            int v8 = (uint32_t)*(ptr7 + 1336);
            if(v8 == 10) {
                *(ptr7 + 1336) = 0;
                size_t v9 = strlen(&g80CA0);
                ptr6 = v9 - SOCK_STREAM;
                v8 = (uint32_t)*(ptr6 + 527520);
            }
            int v10 = v8;
            ptr0 = &g404;
            if(v10 == 13) {
                ptr6 += 0x80768;
                v8 = 0;
            }
            else {
                ptr0 = &gvar_590404;
            }
            if(v10 == 13) {
                ptr0 = (uint32_t)(uint16_t)ptr0 | ((uint32_t)89 << 16);
                *(ptr6 + 1336) = (uint8_t)v8;
            }
        }
        else {
            ptr0 = &gvar_590404;
            if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
                uint32_t v11 = gvar_80970;
                v1 = cnt_read;
                snprintf(&__ptr1, 0x800, "Read miner version file %s error %d", v11, v1);
                sub_2E584(3, &__ptr1, 0);
            }
        }
    }
    FILE* __stream1 = fopen64("/config/sn", "rb");
    if(__stream1 != 0) {
        memset(&__ptr, 0, 0x100);
        size_t cnt_read1 = fread(&__ptr, 1, 250, __stream1);
        if((int)cnt_read1 > 0) {
            char* ptr8 = strstr((char*)&__ptr, "\n");
            if(ptr8 == 0) {
                strcpy((char*)&gvar_80DA0, (char*)&__ptr);
            }
            else {
                v1 = "read_version_file";
                v2 = 1572;
                sub_30EA8(&gvar_80DA0, &__ptr, (size_t)(ptr8 - &__ptr), "bmminer.c", "read_version_file", 1572);
            }
        }
        else if(*ptr0 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            v1 = cnt_read1;
            snprintf(&__ptr1, 0x800, "Read miner sn file %s error %d", "/config/sn", v1);
            sub_2E584(3, &__ptr1, 0);
        }
        fclose(__stream1);
        v0 = (uint32_t)*ptr0;
    }
    else if(*ptr0 == 0) {
        v0 = gvar_482A5C;
        if(v0 != 0 || (int)gvar_7EBA0 > 2) {
            goto loc_2A9E0;
        }
    }
    else {
    loc_2A9E0:
        snprintf(&__ptr1, 0x800, "Open miner sn file %s error", "/config/sn");
        sub_2E584(3, &__ptr1, 0);
        v0 = (uint32_t)*ptr0;
    }
    size_t v12 = strlen((char*)&gvar_80DA0);
    int result = (int)(v12 - SOCK_STREAM);
    int v13 = result + 0x80768;
    int v14 = (uint32_t)*(char*)(v13 + 1592);
    if(v14 == 10) {
        *(char*)(v13 + 1592) = 0;
        size_t v15 = strlen((char*)&gvar_80DA0);
        result = v15 - SOCK_STREAM;
        v14 = *(&gvar_80DA0 + result);
    }
    if(v14 == 13) {
        *(&gvar_80DA0 + result) = 0;
    }
    if(v0 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "Miner compile time: %s type: %s sn :%s", 0x80ba0, 527520, &gvar_80DA0);
        result = sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
