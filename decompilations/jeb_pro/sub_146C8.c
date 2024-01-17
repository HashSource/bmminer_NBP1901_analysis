int sub_146C8(int param0) {
    char v0;
    uint32_t v1;
    int v2;
    char* __format;
    char* ptr0;
    char v3;
    uint32_t v4;
    int v5;
    uint32_t v6;
    char* ptr1;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    char* ptr2;
    uint32_t v14;
    char __ptr1;
    int v15;
    int v16 = param0;
    char* ptr3 = NULL;
    int v17 = param0 * 4;
    char* ptr4 = NULL;
loc_146F0:
    uint32_t v18 = sub_14434();
    while((int)v18 > (int)ptr3) {
        uint32_t v19 = gvar_7F7B4;
        uint32_t v20 = (uint32_t)((int)ptr3 * 4);
        short v21 = (uint16_t)gvar_7F7B0;
        int v22 = 4;
        int v23 = (int)((uint8_t)*(int*)((int)(int*)((int)ptr3 * 4) + v19) * (uint8_t)v21);
        sub_50874((int)(uint8_t)v16, v23, 0);
        usleep(10000);
        do {
            __ptr1 = 0;
            sub_142BC(v16, (uint32_t)v23, 254, 0, &__ptr1);
            if(__ptr1 == 26) {
                v14 = 0;
                ptr4 = "NCT218";
                goto loc_147E0;
            }
            else {
                --v22;
            }
        }
        while(v22 != 0);
        int v24 = 4;
        do {
            __ptr1 = 0;
            sub_142BC(v16, (uint32_t)v23, 254, 0, &__ptr1);
            if(__ptr1 == 85) {
                v14 = 1;
                ptr4 = "TMP451";
                goto loc_147E0;
            }
            else {
                --v24;
            }
        }
        while(v24 != 0);
        if(gvar_7EB9C <= 3) {
            return -1;
        }
        snprintf(&__ptr1, 0x800, "sensor %d @ chain %d manufacture id unknown", *(int*)(gvar_7F7B4 + v20), v16);
        sub_2E584(3, &__ptr1, 0);
        return -1;
    loc_147E0:
        if(gvar_7EB9C > 3) {
            int v25 = *(int*)(gvar_7F7B4 + v20);
            ptr2 = ptr4;
            snprintf(&__ptr1, 0x800, "sensor %d @ chain %d is %s", v25, v16, ptr2);
            sub_2E584(3, &__ptr1, 0);
        }
        int v26 = (int)gvar_7F7B0;
        char v27 = 4;
        if(v26 == 0 && gvar_7EB9C <= 3) {
            return 0;
        }
        else if(v26 == 0) {
            *(int*)&__ptr1 = 'c';
            v13 = 544501614;
            v12 = 544499059;
            v11 = 544503909;
            v10 = 0x65646f6d;
            v9 = 0x66656220;
            v8 = 543519343;
            v7 = 0x696c6163;
            __builtin_strcpy(&v15, "bration");
            sub_2E584(3, &__ptr1, 0);
            goto loc_148DC;
        }
        else {
            uint32_t v28 = sub_1E170();
            if(v28 == 0) {
                if(gvar_7EB9C <= 3) {
                    return 0;
                }
                ptr2 = ptr3;
                snprintf(&__ptr1, 0x800, "%s chain %d ,index %d not connected", "set_ext_mode", v16, ptr2);
                sub_2E584(3, &__ptr1, 0);
                goto loc_148DC;
            }
            uint32_t v29 = gvar_7F7B4;
            uint32_t v30 = v14 * 16;
            uint32_t v31 = v20;
            uint32_t v32 = gvar_7F7B0;
            ptr1 = "read_sensor_on_asic";
            short v33 = (uint16_t)*(int*)(v31 + v29);
            int v34 = *(&gvar_604A3 + v30);
            v6 = v30;
            v5 = sub_142BC(v16, (uint32_t)((uint8_t)v33 * (uint8_t)v32), v34, SOCK_STREAM, &v27);
        }
        if(v5 == 0) {
            if(gvar_7EB9C <= 3) {
                return 0;
            }
            snprintf(&__ptr1, 0x800, "set ext mode failed for senser %d @ chain %d", *(int*)(gvar_7F7B4 + v20), v16);
            sub_2E584(3, &__ptr1, 0);
        loc_148DC:
            if(gvar_7EB9C <= 3) {
                return 0;
            }
            snprintf(&__ptr1, 0x800, "sensor %d @ chain %d fail to set to ext mode", *(int*)(gvar_7F7B4 + v20), v16);
            sub_2E584(3, &__ptr1, 0);
            v4 = gvar_7EB9C;
            goto loc_149D0;
        }
        else {
            char* ptr5 = "sensor %d @ chain %d, offset = %d";
            short* ptr6 = (short*)((int)ptr3 * 6);
            int v35 = 11;
            while(SOCK_STREAM) {
                int v36 = sub_14454(v16, ptr3, v14, 0);
                int v37 = v17;
                *(short*)((char*)(*(int*)(*(int*)(gvar_7F7B8 + v37) + 4) + (int)ptr6) + 2) = (short)(uint8_t)v36;
                int v38 = sub_14454(v16, ptr3, v14, 1);
                char v39 = (uint8_t)v36 - (uint8_t)v38;
                int v40 = (uint32_t)((uint8_t)v36 - (uint8_t)v38 + 2);
                char* ptr7 = v39;
                *(short*)((char*)(*(int*)(*(int*)(gvar_7F7B8 + v37) + 8) + (int)ptr6) + 2) = (short)(uint8_t)v38;
                if(v40 > 4) {
                    int v41 = (int)gvar_7F7B0;
                    char v42 = (uint8_t)ptr7;
                    if(v41 == 0) {
                        if(gvar_7EB9C > 3) {
                            *(int*)&__ptr1 = 'c';
                            v13 = 544501614;
                            v12 = 544499059;
                            v11 = 544503909;
                            v10 = 0x65646f6d;
                            v9 = 0x66656220;
                            v8 = 543519343;
                            v7 = 0x696c6163;
                            __builtin_strcpy(&v15, "bration");
                            sub_2E584(3, &__ptr1, 0);
                        }
                        goto loc_14A7C;
                    }
                    else {
                        uint32_t v43 = sub_1E170();
                        if(v43 == 0) {
                            uint32_t v44 = gvar_7EB9C;
                            v3 = v44 >= 3;
                            if(v3 == 0 || v44 == 3) {
                                goto loc_14A7C;
                            }
                            else {
                                ptr0 = "set_sensor_offset";
                                __format = "%s chain %d ,index %d not connected";
                                ptr2 = ptr3;
                            loc_14B5C:
                                snprintf(&__ptr1, 0x800, __format, ptr0, v16, ptr2);
                                sub_2E584(3, &__ptr1, 0);
                                if((int)ptr7 < 0) {
                                    ptr7 = 0 - ptr7;
                                }
                                if((int)ptr7 <= 2) {
                                    break;
                                }
                                goto loc_14A8C;
                            }
                        }
                        uint32_t v45 = v6;
                        char* ptr8 = ptr1;
                        short v46 = (uint16_t)*(int*)(gvar_7F7B4 + v20);
                        int v47 = sub_142BC(v16, (uint32_t)((uint8_t)gvar_7F7B0 * (uint8_t)v46), (int)ptr8[v45 + 32], SOCK_STREAM, &v42);
                        v2 = v47;
                        v1 = gvar_7EB9C;
                        v0 = v1 == 3;
                        if(v47 != 0) {
                            v3 = v1 >= 3;
                            if(v3 == 0 || v0 != 0) {
                                goto loc_14A7C;
                            }
                            __format = ptr5;
                            ptr0 = *(char**)(gvar_7F7B4 + v20);
                            ptr2 = ptr7;
                            goto loc_14B5C;
                        }
                    }
                    if((v1 >= 3 && v0 == 0)) {
                        int v48 = *(int*)(gvar_7F7B4 + v20);
                        snprintf(&__ptr1, 0x800, "set offset failed for senser %d @ chain %d", v48, v16);
                        sub_2E584(3, &__ptr1, v2);
                    }
                loc_14A7C:
                    if((int)ptr7 < 0) {
                        ptr7 = 0 - ptr7;
                    }
                    if((int)ptr7 <= 2) {
                        break;
                    }
                loc_14A8C:
                    int v49 = v35 - SOCK_STREAM;
                    v35 = (uint32_t)(uint8_t)v49;
                    if((uint8_t)v49 == 0) {
                        break;
                    }
                    continue;
                }
                uint32_t v50 = gvar_7EB9C;
                v0 = v50 == 4;
                if(v50 < 4 || v0 != 0) {
                    break;
                }
                ++ptr3;
                int v51 = *(int*)(gvar_7F7B4 + v20);
                snprintf(&__ptr1, 0x800, "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset", v51, v16);
                sub_2E584(4, &__ptr1, 0);
                goto loc_146F0;
            }
            ++ptr3;
            v18 = sub_14434();
        }
    }
    v4 = gvar_7EB9C;
loc_149D0:
    if(v4 > 3) {
        snprintf(&__ptr1, 0x800, "chain %d temp sensor %s\n", v16, ptr4);
        sub_2E584(3, &__ptr1, 0);
    }
    return 0;
}
