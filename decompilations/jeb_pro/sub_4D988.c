void* sub_4D988(uint32_t* param0) {
    void* result = *param0;
    if(result != 0) {
        result = sub_4D898(result);
    }
    *(param0 + 2) = NULL;
    *(param0 + SOCK_STREAM) = NULL;
    *param0 = NULL;
    return result;
}
