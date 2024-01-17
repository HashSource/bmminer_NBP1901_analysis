char* sub_58638(uint32_t* param0, char* param1) {
    char* result;
    if(param0 != 0) {
        int* ptr0 = *(param0 + 271);
        int* ptr1 = *(param0 + 270);
        int* ptr2 = *(param0 + 269);
        int* ptr3 = *(param0 + 268);
        int* ptr4 = *(param0 + 267);
        uint32_t* ptr5 = param0 + 10;
        int* ptr6 = ptr4;
        int* ptr7 = *(param0 + 9);
        int* ptr8 = *(param0 + 8);
        int* ptr9 = *(param0 + 7);
        uint32_t* ptr10 = *(param0 + 6);
        uint32_t* ptr11 = param0;
        uint32_t* ptr12 = param0;
        uint32_t* ptr13 = ptr10;
        result = sub_5DF98(param1, "src/rotater.c", 50, "--rotater[%p][%p,%s,%d][%s,%s,%s,%ld,%ld,%d,%d,%d]--");
        int* ptr14 = *(param0 + 0x110);
        if(ptr14 != 0 && *(ptr14 + SOCK_STREAM) > 0) {
            int v0 = 0;
            do {
                uint32_t* ptr15 = *(uint32_t*)(v0 * 4 + *ptr14);
                ++v0;
                uint32_t* ptr16 = *ptr15;
                ptr12 = ptr15 + SOCK_STREAM;
                ptr11 = ptr16;
                result = sub_5DF98(param1, "src/rotater.c", 55, "[%s,%d]->");
                ptr14 = *(param0 + 0x110);
            }
            while(*(ptr14 + SOCK_STREAM) > v0);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/rotater.c", 34, "a_rotater is null or 0");
}
