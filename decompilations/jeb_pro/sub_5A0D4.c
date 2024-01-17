int sub_5A0D4(uint32_t* param0, uint32_t* param1) {
    int result;
    int v0;
    int v1;
    int v2;
    int* ptr0 = *(param0 + 1293);
    uint32_t v3 = param1[4];
    int v4 = *(ptr0 + SOCK_STREAM);
    char* ptr1 = *(char**)v3;
    if(v4 > 0) {
        v2 = 0;
    }
    *(uint32_t*)(v3 + 4) = ptr1;
    if(v4 <= 0) {
    loc_5A178:
        *ptr1 = 0;
        result = sub_57A1C(*(uint32_t**)(param0 + 1566), param1);
        if(result != 0) {
            sub_5DF98(&g2, "src/rule.c", 248, "zlog_format_output fail");
            return -1;
        }
        int __fd = open64(*(char**)param1[4], (int)*(param0 + 1035) | 0x441);
        if(__fd < 0) {
            int* ptr2 = __errno_location();
            uint32_t v5 = param1[4];
            v0 = ptr2[0];
            v1 = *(int*)v5;
            sub_5DF98(&g2, "src/rule.c", 0xFF, "open file[%s] fail, errno[%d]");
            return -1;
        }
        uint32_t v6 = param1[7];
        void* __buf = *(void**)v6;
        ssize_t v7 = write(__fd, __buf, (size_t)(*(int*)(v6 + 4) - (int)__buf));
        if(v7 < 0) {
            int* ptr3 = __errno_location();
            v1 = ptr3[0];
            sub_5DF98(&g2, "src/rule.c", 260, "write fail, errno[%d]");
            close(__fd);
            return -1;
        }
        int* ptr4 = *(param0 + 1562);
        if(ptr4 != 0) {
            int* ptr5 = (int*)((char*)*(param0 + 1563) + SOCK_STREAM);
            if(ptr5 < ptr4) {
                *(param0 + 1563) = ptr5;
            }
            else {
                *(int*)(param0 + 1563) = 0;
                int v8 = fsync(__fd);
                if(v8 != 0) {
                    int* ptr6 = __errno_location();
                    int v9 = ptr6[0];
                    v1 = __fd;
                    v0 = v9;
                    sub_5DF98(&g2, "src/rule.c", 267, "fsync[%d] fail, errno[%d]");
                }
            }
        }
        int v10 = close(__fd);
        if(v10 < 0) {
            int* ptr7 = __errno_location();
            v1 = ptr7[0];
            sub_5DF98(&g2, "src/rule.c", 271, "close fail, maybe cause by write, errno[%d]");
            return -1;
        }
        return result;
    }
    do {
        int* ptr8 = *(uint32_t*)(v2 * 4 + *ptr0);
        ++v2;
        int v11 = *(ptr8 + 2315)((int)ptr8, (int)param1, (int)v3);
        if(v11 != 0) {
            result = -1;
            sub_5DF98(&g2, "src/rule.c", 245, "zlog_spec_gen_path fail");
            return result;
        }
        ptr0 = *(param0 + 1293);
        v3 = *(uint32_t*)(ptr0 + SOCK_STREAM);
    }
    while((int)v3 > v2);
    ptr1 = *(uint32_t*)(param1[4] + 4);
    goto loc_5A178;
}
