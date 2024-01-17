uint32_t* sub_4E768(uint32_t* param0) {
    if(param0 == 0) {
        return 0;
    }
    return *param0 == 2 ? *(param0 + 2): NULL;
}
