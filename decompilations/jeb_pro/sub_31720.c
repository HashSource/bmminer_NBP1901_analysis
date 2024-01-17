int sub_31720(int param0) {
    char __dest;
    int v0 = param0;
    if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        memcpy(&__dest, "==========================capability start==========================\n", 70);
        param0 = sub_2E584(5, (char*)&__dest, 0);
        if(gvar_590404 != 0 || gvar_482A5C != 0) {
            goto loc_317B4;
        }
        if((int)gvar_7EBA0 > 4) {
        loc_317B4:
            snprintf((char*)&__dest, 0x800, "board num = %d\n", *(int*)v0);
            param0 = sub_2E584(5, (char*)&__dest, 0);
        }
    }
    else if((int)gvar_7EBA0 > 4) {
        goto loc_317B4;
    }
    int v1 = gvar_590404;
    if(*(int*)v0 != 0) {
        int v2 = v0;
        int v3 = 0;
        do {
            if(v1 == 0) {
                v1 = gvar_482A5C;
                if(v1 != 0 || (int)gvar_7EBA0 > 4) {
                    goto loc_318C8;
                }
            }
            else {
            loc_318C8:
                int v4 = *(int*)(v2 + 4);
                int v5 = *(int*)(v2 + 8);
                snprintf((char*)&__dest, 0x800, "board id = %d, chain num = %d\n", v4, v5);
                param0 = sub_2E584(5, (char*)&__dest, 0);
                v1 = gvar_590404;
            }
            int v6 = *(int*)(v2 + 8);
            if(v6 != 0) {
                int v7 = 0;
            loc_3182C:
                do {
                    if(v1 == 0) {
                    loc_31830:
                        do {
                            v1 = gvar_482A5C;
                            if(v1 != 0 || (int)gvar_7EBA0 > 4) {
                                goto loc_31904;
                            }
                            else {
                                ++v7;
                                if(v6 > v7) {
                                    goto loc_31830;
                                }
                                goto loc_31858;
                            }
                        }
                        while(SOCK_STREAM);
                    }
                    else {
                    loc_31904:
                        int v8 = *(int*)(v7 * 4 + v2 + 12);
                        ++v7;
                        snprintf((char*)&__dest, 0x800, "\tchain id = %d\n", v8);
                        param0 = sub_2E584(5, (char*)&__dest, 0);
                        v6 = *(int*)(v2 + 8);
                        v1 = gvar_590404;
                        if(v6 > v7) {
                            goto loc_3182C;
                        }
                    }
                    goto loc_31858;
                }
                while(SOCK_STREAM);
            }
        loc_31858:
            ++v3;
            v2 += 72;
        }
        while(*(int*)v0 > v3);
    }
    if(v1 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 4) {
        memcpy(&__dest, "==========================capability end============================\n", 70);
        param0 = sub_2E584(5, (char*)&__dest, 0);
    }
    return param0;
}
