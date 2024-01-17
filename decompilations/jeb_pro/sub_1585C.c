int sub_1585C(int param0, int param1, size_t __n) {
    char* __s2;
    int v0;
    uint32_t v1;
    int v2;
    int v3;
    int v4;
    void* ptr0;
    int v5;
    int v6;
    size_t __size1;
    size_t __size;
    int64_t v7;
    short* ptr1;
    int v8;
    char* __s2;
    char* ptr2;
    int v9;
    char* __s2;
    char* ptr2;
    int v9;
    int __ptr1;
    int v10;
    int v11;
    int v12;
    char v13;
    int v14;
    char __dest;
    short v15;
    int v16;
    char* ptr3 = NULL;
    uint32_t* ptr4 = &gvar_7EB9C;
    prctl(PR_SET_NAME, "temp_mtr");
    uint32_t v17 = gvar_7EB9C;
    char v18 = v17 == 3;
    if((v17 >= 3 && v18 == 0)) {
        __ptr1 = 1886217588;
        int v19 = 1952543333;
        int v20 = 0x5f657275;
        int v21 = 1768845165;
        __builtin_strcpy(&v14, "tor_thread start...");
        sub_2E584(3, &__ptr1, 0);
        uint32_t v22 = gvar_7F7E0;
        v18 = v22 == 0;
        if(v22 == 0) {
        loc_15DC4:
            if(*ptr4 > 3) {
                __builtin_strcpy(&__ptr1, "temp monitor thread exit");
                sub_2E584(3, &__ptr1, 0);
            }
        }
        else {
            v9 = 274877907;
            *(int*)&v15 = 0;
            ptr2 = "%03d-";
            *(int*)&v13 = 0;
            __s2 = "BHB28601";
            goto loc_158F0;
        }
    }
    else if(gvar_7F7E0 != 0) {
        v9 = 274877907;
        *(int*)&v15 = 0;
        ptr2 = "%03d-";
        *(int*)&v13 = 0;
        __s2 = "BHB28601";
        goto loc_158F0;
    }
    return 0;
loc_158F0:
    int v23 = *(int*)&v13;
    int v24 = sub_1E29C(v23);
    if(v24 != 0) {
        char* ptr5 = NULL;
        void* __s = &__ptr1;
        int v25 = v23 * 4;
    loc_15918:
        uint32_t v26 = sub_14434();
        uint32_t v27 = sub_1E19C();
        if((int)v27 < (int)v26) {
            uint32_t v28 = sub_14434();
            if((int)v28 > (int)ptr5) {
            loc_15938:
                uint32_t __s1 = sub_1E0C0();
                int v29 = strcmp((char*)__s1, __s2);
                if(v29 == 0) {
                    v8 = SOCK_STREAM;
                }
                else {
                    uint32_t __s1_1 = sub_1E0C0();
                    int v30 = strcmp((char*)__s1_1, "BHB28501");
                    v8 = v30 >= 0 ? ((v30 >>> 30) & SOCK_STREAM ? SOCK_STREAM: (v30 >>> 29) & SOCK_STREAM ? 2: (v30 >>> 28) & SOCK_STREAM ? 3: (v30 >>> 27) & SOCK_STREAM ? 4: (v30 >>> 26) & SOCK_STREAM ? 5: (v30 >>> 25) & SOCK_STREAM ? 6: (v30 >>> 24) & SOCK_STREAM ? 7: (v30 >>> 23) & SOCK_STREAM ? 8: (v30 >>> 22) & SOCK_STREAM ? 9: (v30 >>> 21) & SOCK_STREAM ? 10: (v30 >>> 20) & SOCK_STREAM ? 11: (v30 >>> 19) & SOCK_STREAM ? 12: (v30 >>> 18) & SOCK_STREAM ? 13: (v30 >>> 17) & SOCK_STREAM ? 14: (v30 >>> 16) & SOCK_STREAM ? 15: (v30 >>> 15) & SOCK_STREAM ? 16: (v30 >>> 14) & SOCK_STREAM ? 17: (v30 >>> 13) & SOCK_STREAM ? 18: (v30 >>> 12) & SOCK_STREAM ? 19: (v30 >>> 11) & SOCK_STREAM ? 20: (v30 >>> 10) & SOCK_STREAM ? 21: (v30 >>> 9) & SOCK_STREAM ? 22: (v30 >>> 8) & SOCK_STREAM ? 23: (v30 >>> 7) & SOCK_STREAM ? 24: (v30 >>> 6) & SOCK_STREAM ? 25: (v30 >>> 5) & SOCK_STREAM ? 26: (v30 >>> 4) & SOCK_STREAM ? 27: (v30 >>> 3) & SOCK_STREAM ? 28: (v30 >>> 2) & SOCK_STREAM ? 29: (v30 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v30 & SOCK_STREAM ? 31: 32) >>> 5: 0;
                }
                int v31 = v8 + SOCK_STREAM;
                int v32 = v8 + SOCK_STREAM;
                int v33 = v31 - SOCK_STREAM;
                int* ptr6 = (int*)(v8 * 4);
                ptr1 = (int)ptr5 * 6;
                if(v32 != SOCK_STREAM) {
                loc_1597C:
                    if(gvar_7F7BC == 0) {
                        goto loc_15AB8;
                    }
                    else {
                        goto loc_15988;
                    }
                }
            loc_15ACC:
                uint32_t v34 = sub_1E19C();
                if((int)v34 <= (int)ptr5) {
                    if(gvar_7F7BC != 0) {
                    loc_15988:
                        if(gvar_7F7E8 == 0) {
                            uint32_t v35 = sub_14434();
                            if((int)v35 <= (int)ptr5) {
                            loc_15AB8:
                                if(v31 != 3) {
                                loc_15ABC:
                                    ++v31;
                                    ++ptr6;
                                    v33 = v31 - SOCK_STREAM;
                                    if(v33 == 0) {
                                        goto loc_15ACC;
                                    }
                                    else {
                                        goto loc_1597C;
                                    }
                                }
                                ++ptr5;
                                goto loc_15918;
                            }
                            else {
                                pthread_mutex_lock(&g7F7EC);
                                sub_302A0(&v12);
                                if(v33 == SOCK_STREAM) {
                                    short* ptr7 = ptr1;
                                    int v36 = *(int*)(*(int*)(gvar_7F7B8 + v25) + 4);
                                    int v37 = sub_14454(*(int*)&v13, ptr5, (uint32_t)*(short*)(v36 + (int)ptr7), 0);
                                    *(int*)&v15 = v37;
                                }
                                else if(v33 == 2) {
                                    short* ptr8 = ptr1;
                                    int v38 = *(int*)(*(int*)(gvar_7F7B8 + v25) + 8);
                                    int v39 = sub_14454(*(int*)&v13, ptr5, (uint32_t)*(short*)(v38 + (int)ptr8), 1);
                                    *(int*)&v15 = v39;
                                }
                                sub_302A0(&v10);
                                int v40 = v16;
                                int v41 = v11;
                                int v42 = v10 - v12;
                                int v43 = v40;
                                int v44 = v40 - v41;
                                uint32_t v45 = *ptr4;
                                if(v41 > v43) {
                                    --v42;
                                    v44 += 1000000;
                                }
                                if(v45 > 4) {
                                    int v46 = v9;
                                    int v47 = v33;
                                    char* __ptr1_1 = (char*)__s;
                                    ptr3 = ptr5;
                                    v7 = v46 * v44;
                                    v3 = *(int*)&v13;
                                    v2 = v42 * 1000 + ~(v44 >> 31) + (((uint32_t)(v7 >>> 32L) >> 6) + SOCK_STREAM);
                                    snprintf(__ptr1_1, 0x800, "%s read %d on chain %d takes %ldms\n", v47 == SOCK_STREAM ? 0x60830: 395316, ptr3, v3, v2);
                                    sub_2E584(4, __ptr1_1, 0);
                                }
                                pthread_mutex_unlock(&g7F7EC);
                            }
                        }
                        else {
                            goto loc_15AB8;
                        }
                    loc_15A68:
                        pthread_mutex_lock(&g7F7C0);
                        if(*(int*)&v15 == 0xFF) {
                            short* ptr9 = (short*)(*(int*)(*(int*)(gvar_7F7B8 + v25) + (int)ptr6) + (int)ptr1);
                            ++*(ptr9 + 2);
                        }
                        else {
                            uint32_t v48 = gvar_7F7B8;
                            int v49 = v25;
                            short* ptr10 = ptr1;
                            *(short*)((char*)(*(int*)(*(int*)(v49 + v48) + (int)ptr6) + (int)ptr10) + 2) = v15;
                            *(short*)((int*)(*(int*)(*(int*)(v49 + v48) + (int)ptr6) + (int)ptr10) + SOCK_STREAM) = 0;
                        }
                        pthread_mutex_unlock(&g7F7C0);
                        goto loc_15AB8;
                    }
                    goto loc_15ABC;
                }
                else {
                    sub_302A0(&v12);
                    int v50 = sub_1E29C(*(int*)&v13);
                    if(v50 != 0) {
                        uint32_t v51 = sub_1E19C();
                        if(((int)v51 > (int)ptr5 || *ptr4 > 3) && (int)v51 <= (int)ptr5) {
                            int v52 = *(int*)&v13;
                            char* __ptr1_2 = (char*)__s;
                            ptr3 = ptr5;
                            v3 = v52;
                            *(int*)&v15 = 0xFF;
                            snprintf(__ptr1_2, 0x800, "%s invalid index = %d on chain %d", "read_sensor_on_pic", ptr3, v3);
                            sub_2E584(3, __ptr1_2, v33);
                        }
                        else if((int)v51 > (int)ptr5 || *ptr4 > 3) {
                            int v53 = v13;
                            int v54 = (int)ptr5[gvar_7F7DC];
                            ptr3 = &g2;
                            int v55 = sub_48110(v53, v54, v33, &__dest, 2);
                            if(v55 != 2) {
                                if(*ptr4 <= 3) {
                                    goto loc_16010;
                                }
                                else {
                                    char* __ptr1_3 = (char*)__s;
                                    int v56 = *(int*)&v13;
                                    *(int*)&v15 = 0xFF;
                                    snprintf(__ptr1_3, 0x800, "fail to read pic temp for chain %d", v56);
                                    sub_2E584(3, __ptr1_3, v33);
                                    goto loc_16018;
                                }
                            }
                            *(int*)&v15 = __dest;
                        }
                        else {
                        loc_16010:
                            *(int*)&v15 = 0xFF;
                        }
                    }
                    else if(*ptr4 > 4) {
                        char* __ptr1_4 = (char*)__s;
                        ptr3 = *(char**)&v13;
                        snprintf(__ptr1_4, 0x800, "%s chain %d not pluged", "read_sensor_on_pic", ptr3);
                        *(int*)&v15 = 0xFF;
                        sub_2E584(4, __ptr1_4, 0);
                    }
                    else {
                        goto loc_16010;
                    }
                loc_16018:
                    sub_302A0(&v10);
                    int v57 = v16;
                    int v58 = v12;
                    int v59 = v11;
                    int v60 = v10;
                    int v61 = v57;
                    int v62 = v57 - v59;
                    char v63 = v59 > v61;
                    uint32_t* ptr11 = ptr4;
                    if(v63 != 0) {
                        v62 += 0xf4000;
                    }
                    int v64 = v60 - v58;
                    if(v63 != 0) {
                        --v64;
                        v62 += 576;
                    }
                    if(*ptr11 > 4) {
                        int v65 = v9;
                        char* __ptr1_5 = (char*)__s;
                        v7 = v65 * v62;
                        ptr3 = *(char**)&v13;
                        v3 = v64 * 1000 + ~(v62 >> 31) + (((uint32_t)(v7 >>> 32L) >> 6) + SOCK_STREAM);
                        snprintf(__ptr1_5, 0x800, "pic read %d on chain %d takes %ldms\n", ptr5, ptr3, v3);
                        sub_2E584(4, __ptr1_5, 0);
                    }
                    goto loc_15A68;
                }
            }
        }
        else {
            uint32_t v66 = sub_1E19C();
            if((int)v66 > (int)ptr5) {
                goto loc_15938;
            }
        }
        int v67 = v25;
        *(int*)&__dest = 395768;
        int v68 = 0x60830;
        int v69 = 395316;
        int v70 = 395772;
        memset(__s, 0, 0x100);
        if(gvar_7F804 == 0) {
            uint32_t v71 = sub_14434();
            uint32_t v72 = sub_1E19C();
            if((int)v72 < (int)v71) {
                uint32_t v73 = sub_14434();
                __size = v73 * 4 + SOCK_STREAM;
            }
            else {
                uint32_t v74 = sub_1E19C();
                __size = v74 * 4 + SOCK_STREAM;
            }
            void* ptr12 = malloc(__size);
            gvar_7F804 = (uint32_t)ptr12;
        }
        if(gvar_7F808 == 0) {
            uint32_t v75 = sub_14434();
            uint32_t v76 = sub_1E19C();
            if((int)v76 < (int)v75) {
                uint32_t v77 = sub_14434();
                __size1 = v77 * 4 + SOCK_STREAM;
            }
            else {
                uint32_t v78 = sub_1E19C();
                __size1 = v78 * 4 + SOCK_STREAM;
            }
            void* ptr13 = malloc(__size1);
            gvar_7F808 = (uint32_t)ptr13;
        }
        short* ptr14 = NULL;
        pthread_mutex_lock(&g7F7C0);
        char* __format = ptr2;
        while(SOCK_STREAM) {
            if(ptr14 == 0) {
                v1 = sub_1E19C();
            loc_15B64:
                if((int)v1 > 0) {
                    int v79 = 0;
                    int* ptr15 = (int*)((int)ptr14 * 4);
                    ptr1 = ptr14;
                    int v80 = 0;
                    int v81 = 0;
                    uint32_t v82 = v1 * 6;
                    do {
                        short* ptr16 = (short*)(*(int*)(*(int*)(gvar_7F7B8 + v67) + (int)ptr15) + v79);
                        int v83 = sprintf((char*)(gvar_7F804 + v81), __format, (int)*(ptr16 + SOCK_STREAM));
                        v81 += v83;
                        short* ptr17 = (short*)(*(int*)(*(int*)(gvar_7F7B8 + v67) + (int)ptr15) + v79);
                        v79 += 6;
                        int v84 = sprintf((char*)(gvar_7F808 + v80), __format, (int)*(ptr17 + 2));
                        v80 += v84;
                    }
                    while(v79 != v82);
                    ptr14 = ptr1;
                    v6 = v80 - SOCK_STREAM;
                    v5 = v81 - SOCK_STREAM;
                }
                else {
                    v5 = -1;
                    v6 = -1;
                }
                uint32_t v85 = gvar_7F808;
                uint32_t v86 = gvar_7F804;
                int v87 = *(int*)&v13;
                *(char*)(v85 + v6) = 32;
                *(char*)(v5 + v86) = 32;
                sprintf((char*)__s, "chain %d %s temp: %s, failure:%s", v87, *(int*)((int)(int*)((int)ptr14 * 4) + (int)&__dest), v86, v85);
                int v88 = (int)gvar_7F80C;
                if(v88 == 0) {
                    v88 = sub_536F4("bmminer_temp");
                    gvar_7F80C = (uint32_t)v88;
                }
                ptr0 = __s;
                v4 = "\n";
                ptr14 = (char*)ptr14 + SOCK_STREAM;
                v3 = 539;
                v2 = 20;
                ptr3 = &gE;
                sub_54CB0(v88, "temperature/temperature.c", 25, "dump_temp_info", 14, 539, 20, "\n");
                if(ptr14 != 3) {
                    continue;
                }
                break;
            }
            else if(gvar_7F7B0 == 0) {
                break;
            }
            else {
                v1 = sub_14434();
                goto loc_15B64;
            }
        }
        pthread_mutex_unlock(&g7F7C0);
    }
    int v89 = *(int*)&v13 + SOCK_STREAM;
    int v90 = *(int*)&v13 + SOCK_STREAM;
    *(int*)&v13 = v89;
    if(v90 != 4) {
        goto loc_158F0;
    }
    int v91 = 0;
    int v92 = sub_15508();
    int v93 = 0;
    int v94 = v92;
    int v95 = 0;
    int v96 = sub_155C4();
    do {
        int v97 = sub_1E29C(v95);
        int v98 = v93 + SOCK_STREAM;
        if(v97 != 0) {
            v93 = (uint32_t)(uint8_t)v98;
            uint32_t v99 = sub_14434();
            int v100 = sub_157F8(v95, (int)((uint8_t)v99 - SOCK_STREAM));
            int v101 = v100 + v91;
            uint32_t v102 = sub_14434();
            int v103 = sub_157F8(v95, (int)((uint8_t)v102 - 2));
            v91 = v103 + v101;
        }
        ++v95;
    }
    while(v95 != 4);
    uint32_t __s1_2 = sub_1E0C0();
    int v104 = strcmp((char*)__s1_2, "BHB28601");
    if(v104 != 0) {
        uint32_t __s1_3 = sub_1E0C0();
        int v105 = strcmp((char*)__s1_3, "BHB28501");
        if(v105 != 0) {
            v0 = v93 * 2;
            if(v94 > 80) {
                goto loc_15D40;
            }
            else {
                goto loc_15EEC;
            }
        }
    }
    if(gvar_7F7BC != 0) {
        v0 = v93 * 2;
        if(v94 <= 80) {
            goto loc_15EEC;
        }
    loc_15D40:
        sub_20A20(1);
        if(v91 < v0) {
            sub_20A38(0);
            goto loc_15D60;
        loc_15EEC:
            sub_20A20(0);
            if(v91 < v0) {
                goto loc_15F68;
            }
        }
        sub_20A38(SOCK_STREAM);
        if(*ptr4 > 3) {
            goto loc_15F24;
        loc_15F68:
            sub_20A38(0);
            uint32_t v106 = sub_31D48();
            if((v94 == 0 && v106 == 2) == 0) {
                goto loc_15D7C;
            }
            else {
                int v107 = 0xFF;
                int v108 = 0;
                do {
                    int v109 = v108;
                    ++v108;
                    int v110 = sub_156CC(v109);
                    if(v110 < v107) {
                        v107 = v110;
                    }
                    v107 = (uint16_t)v107;
                }
                while(v108 != 4);
                if(v107 != 0) {
                    goto loc_15D7C;
                }
                uint32_t v111 = gvar_7F810 + SOCK_STREAM;
                ++gvar_7F810;
                if((int)v111 <= 10) {
                    goto loc_15D7C;
                }
            loc_15D60:
                if(*ptr4 > 3) {
                loc_15F24:
                    v2 = 95;
                    int v112 = v91;
                    v3 = v96;
                    ptr0 = NULL;
                    v4 = 0;
                    ptr3 = &g50;
                    snprintf(&__ptr1, 0x800, "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n", v94, 80, v3, 95, 0, NULL, v112);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
        }
        sub_31D58(15, "over max temp", __n);
    }
loc_15D7C:
    sub_13DA4(400, 0, __n);
    uint32_t v113 = sub_31D38();
    if(v113 != 0 && *(int*)&gvar_80FB4 != SOCK_STREAM) {
        sub_35344();
    }
    usleep(10000);
    uint32_t v114 = gvar_7F7E0;
    v18 = v114 == 0;
    if(v114 != 0) {
        *(int*)&v13 = 0;
        __s2 = "BHB28601";
        goto loc_158F0;
    }
    goto loc_15DC4;
}
