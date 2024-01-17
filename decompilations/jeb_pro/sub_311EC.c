int sub_311EC(uint32_t* param0, uint32_t* param1, uint32_t* param2) {
    int* ptr0 = *param1;
    int* ptr1 = *param2;
    char v0 = ptr1 == ptr0;
    if((int)ptr1 >= (int)ptr0) {
        if(v0 != 0 && (int)*(param1 + SOCK_STREAM) > (int)*(param2 + SOCK_STREAM)) {
            return -1;
        }
        ptr0 = (int)ptr1 - (int)ptr0;
        *param0 = ptr0;
        ptr1 = (int)*(param2 + SOCK_STREAM) - (int)*(param1 + SOCK_STREAM);
        *(param0 + SOCK_STREAM) = (int*)((int)*(param2 + SOCK_STREAM) - (int)*(param1 + SOCK_STREAM));
        if((int)ptr1 >= 0) {
            return 0;
        }
        *param0 = (int*)((char*)ptr0 - SOCK_STREAM);
        *(param0 + SOCK_STREAM) = ptr1 + &loc_3D090;
        return 0;
    }
    return -1;
}
