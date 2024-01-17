int sub_4B91C(uint32_t* param0) {
    *param0 = NULL;
    *(param0 + 2) = (int*)&g3;
    size_t v0 = sub_4D880(64);
    *(size_t*)(param0 + SOCK_STREAM) = v0;
    if(v0 != 0) {
        int* ptr0 = *(param0 + 2);
        *(param0 + 4) = param0 + 3;
        *(param0 + 3) = param0 + 3;
        *(param0 + 6) = param0 + 5;
        *(param0 + 5) = param0 + 5;
        if((int*)(SOCK_STREAM << (int)ptr0) != 0) {
            int* ptr1 = (int*)((int)(int*)(8 << (int)ptr0) + v0);
            do {
                *(uint32_t*)(v0 + 4) = param0 + 3;
                *(uint32_t**)v0 = param0 + 3;
                v0 += 8;
            }
            while(v0 != ptr1);
        }
        return 0;
    }
    return -1;
}
