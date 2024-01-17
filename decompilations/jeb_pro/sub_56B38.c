int* sub_56B38(uint32_t* param0, char* param1) {
    uint32_t* ptr0;
    int* result;
    if(param0 != 0) {
        uint32_t* ptr1 = param0;
        sub_5DF98(param1, "src/conf.c", 45, "-conf[%p]-");
        sub_5DF98(param1, "src/conf.c", 46, "--global--");
        uint32_t* ptr2 = (uint32_t*)((char*)param0 + 1025);
        ptr1 = param0;
        sub_5DF98(param1, "src/conf.c", 47, "---file[%s],mtime[%s]---");
        ptr1 = *(param0 + 262);
        sub_5DF98(param1, "src/conf.c", 48, "---strict init[%d]---");
        ptr1 = *(param0 + 263);
        sub_5DF98(param1, "src/conf.c", 49, "---buffer min[%ld]---");
        ptr1 = *(param0 + 264);
        sub_5DF98(param1, "src/conf.c", 50, "---buffer max[%ld]---");
        if(*(param0 + 2316) != 0) {
            sub_5DF98(param1, "src/conf.c", 52, "---default_format---");
            sub_575FC(*(int**)(param0 + 2316), param1);
        }
        ptr1 = *(param0 + 2317);
        sub_5DF98(param1, "src/conf.c", 55, "---file perms[0%o]---");
        ptr1 = *(param0 + 2319);
        sub_5DF98(param1, "src/conf.c", 56, "---reload conf period[%ld]---");
        ptr1 = *(param0 + 2318);
        sub_5DF98(param1, "src/conf.c", 57, "---fsync period[%ld]---");
        ptr1 = param0 + 265;
        sub_5DF98(param1, "src/conf.c", 59, "---rotate lock file[%s]---");
        uint32_t* ptr3 = *(uint32_t**)(param0 + 1290);
        if(ptr3 != 0) {
            sub_58638(ptr3, param1);
        }
        result = *(int**)(param0 + 2320);
        if(result != 0) {
            result = sub_57A8C(result, param1);
        }
        uint32_t* ptr4 = *(param0 + 2321);
        if(ptr4 != 0) {
            ptr1 = ptr4;
            result = sub_5DF98(param1, "src/conf.c", 65, "--format list[%p]--");
            ptr0 = *(param0 + 2321);
            if((int)*(ptr0 + SOCK_STREAM) > 0) {
                int v0 = 0;
                while(SOCK_STREAM) {
                    int* ptr5 = *(int**)(v0 * 4 + (int)*ptr0);
                    ++v0;
                    result = sub_575FC(ptr5, param1);
                    ptr0 = *(param0 + 2321);
                    if((int)*(ptr0 + SOCK_STREAM) > v0) {
                        continue;
                    }
                    break;
                }
            }
        }
        uint32_t* ptr6 = *(param0 + 2322);
        if(ptr6 != 0) {
            ptr1 = ptr6;
            result = sub_5DF98(param1, "src/conf.c", 72, "--rule_list[%p]--");
            ptr0 = *(param0 + 2322);
            if((int)*(ptr0 + SOCK_STREAM) > 0) {
                int v1 = 0;
                while(SOCK_STREAM) {
                    uint32_t* ptr7 = *(uint32_t**)(v1 * 4 + (int)*ptr0);
                    ++v1;
                    result = sub_5A850(ptr7, param1);
                    ptr0 = *(param0 + 2322);
                    if((int)*(ptr0 + SOCK_STREAM) <= v1) {
                        return result;
                    }
                }
            }
        }
        return result;
    }
    return sub_5DF98(&g2, "src/conf.c", 44, "a_conf is null or 0");
}
