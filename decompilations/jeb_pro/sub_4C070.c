int sub_4C070(int* param0) {
    int v0 = *(param0 + 0x101);
    if(*(param0 + 0x100) <= v0) {
        int v1 = *(param0 + 258);
        *(param0 + 0x101) = 0;
        int v2 = v1((int)param0, 0x400, *(param0 + 259));
        *(param0 + 0x100) = v2;
        if(v2 - SOCK_STREAM > -3) {
            return -1;
        }
        v0 = *(param0 + 0x101);
    }
    int result = (uint32_t)*(char*)((int)param0 + v0);
    *(param0 + 0x101) = v0 + SOCK_STREAM;
    return result;
}
