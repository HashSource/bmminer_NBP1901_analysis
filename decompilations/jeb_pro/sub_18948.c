int sub_18948(int param0, int* param1, int* param2) {
    char __ptr1;
    uint32_t v0 = gvar_7F814;
    if(v0 != 0 && *(char*)(v0 + 28) != 0) {
        int* ptr0 = *(uint32_t*)(param0 * 4 + v0);
        if(ptr0 != 0) {
            v0 = *(uint32_t*)(param2 + SOCK_STREAM);
            *(int*)((char*)ptr0 + 58) = *param2;
            *(uint32_t*)((char*)ptr0 + 62) = v0;
            *(char*)((char*)ptr0 + 66) = *(char*)(param2 + 2);
            return 0;
        }
    }
    if(gvar_7EB9C <= 3) {
        return -1;
    }
    snprintf(&__ptr1, 0x800, "Can\'t set work mode conf, configuration is not loaded, chain = %d, mode = %d.\n", param0, param1);
    sub_2E584(3, &__ptr1, 0);
    return -1;
}
