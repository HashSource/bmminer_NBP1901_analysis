char* sub_2F600(char* param0, char* param1, int param2) {
    if(param2 > 0) {
        int* ptr0 = (int*)((char*)(param1 + param2) - SOCK_STREAM);
        --param1;
        char* ptr1 = param0 + 2;
        do {
            int v0 = (uint32_t)*(param1 + SOCK_STREAM);
            ++param1;
            ptr1 += 2;
            *(ptr1 - 4) = a0123456789abcde[v0 >>> 4];
            *(ptr1 - 3) = a0123456789abcde[(uint32_t)*param1 & 0xf];
        }
        while(param1 != ptr0);
        param0 += param2 * 2;
        *param0 = 0;
        return param0;
    }
    *param0 = 0;
    return param0;
}
