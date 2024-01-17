void* sub_4C1FC(int* param0) {
    if(*(param0 + 15) != 0x100) {
        return sub_4D988((uint32_t*)(param0 + 10));
    }
    sub_4D898(*(void**)(param0 + 16));
    *(param0 + 16) = 0;
    *(param0 + 17) = 0;
    return sub_4D988((uint32_t*)(param0 + 10));
}
