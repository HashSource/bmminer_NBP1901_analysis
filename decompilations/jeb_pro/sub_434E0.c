uint32_t* sub_434E0(uint32_t* param0, uint32_t* param1) {
    uint32_t* ptr0 = *param1;
    uint32_t* ptr1 = param0 + SOCK_STREAM;
    uint32_t* ptr2 = *(ptr0 + SOCK_STREAM);
    *param1 = *(ptr0 + SOCK_STREAM);
    if(ptr2 != ptr1) {
        *(ptr2 + 2) = param1;
    }
    uint32_t* ptr3 = *(param1 + 2);
    if(ptr0 != ptr1) {
        *(ptr0 + 2) = ptr3;
        ptr3 = *(param1 + 2);
    }
    if(ptr3 == 0) {
        *param0 = ptr0;
    }
    else {
        param0 = *(ptr3 + SOCK_STREAM);
        if(*(ptr3 + SOCK_STREAM) == param1) {
            *(ptr3 + SOCK_STREAM) = ptr0;
        }
        else {
            *ptr3 = ptr0;
        }
    }
    *(ptr0 + SOCK_STREAM) = param1;
    if(param1 != ptr1) {
        *(param1 + 2) = ptr0;
    }
    return param0;
}
