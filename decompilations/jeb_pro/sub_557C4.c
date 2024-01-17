char* sub_557C4(uint32_t* param0, char* param1) {
    char* result;
    if(param0 != 0) {
        int* ptr0 = *(param0 + 0x112);
        uint32_t* ptr1 = param0;
        int* ptr2 = ptr0;
        uint32_t* ptr3 = param0;
        result = sub_5DF98(param1, "src/category.c", 26, "--category[%p][%s][%p]--");
        int* ptr4 = *(param0 + 0x112);
        if(ptr4 != 0 && *(ptr4 + SOCK_STREAM) > 0) {
            int v0 = 0;
            do {
                uint32_t* ptr5 = *(uint32_t**)(v0 * 4 + *ptr4);
                ++v0;
                result = sub_5A850(ptr5, param1);
                ptr4 = *(param0 + 0x112);
            }
            while(*(ptr4 + SOCK_STREAM) > v0);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/category.c", 22, "a_category is null or 0");
}
