int* sub_5DE60(uint32_t* param0) {
    int* result1;
    int* ptr0 = *(param0 + 2);
    if(ptr0 != 0) {
        uint32_t* ptr1 = *(param0 + SOCK_STREAM);
        int* result = *ptr1;
        if(result != 0) {
            return result;
        }
        int* ptr2 = NULL;
        do {
            ptr2 = (char*)ptr2 + SOCK_STREAM;
            if(ptr2 == ptr0) {
                return 0;
            }
            result1 = *(ptr1 + SOCK_STREAM);
            ++ptr1;
        }
        while(result1 == 0);
        return result1;
    }
    return NULL;
}
