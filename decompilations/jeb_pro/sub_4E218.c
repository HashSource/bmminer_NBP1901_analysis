uint32_t* sub_4E218(uint32_t* param0) {
    if(param0 == 0) {
        return 0;
    }
    return *param0 == 0 ? *(param0 + 2): NULL;
}
