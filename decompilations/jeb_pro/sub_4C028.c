int sub_4C028(uint32_t* param0) {
    char* ptr0 = *(param0 + SOCK_STREAM);
    int result = (uint32_t)*(char*)((int)*param0 + (int)ptr0);
    int v0 = (uint32_t)*(char*)((int)*param0 + (int)ptr0);
    if(result == 0) {
        result = -1;
    }
    else {
        ++ptr0;
    }
    if(v0 != 0) {
        *(param0 + SOCK_STREAM) = ptr0;
    }
    return result;
}
