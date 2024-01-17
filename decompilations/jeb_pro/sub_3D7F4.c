char* sub_3D7F4(int param0, uint32_t* param1) {
    uint32_t v0 = *param1;
    int v1 = param0 + v0;
    if((((uint32_t)*(char*)(param0 + v0) & 0xdf) != 0 ? *(char*)(param0 + v0) == 61: SOCK_STREAM) != 0) {
        return NULL;
    }
    size_t v2 = strcspn((char*)(v1 + 2), &g68A48);
    *param1 = v2;
    return (char*)(v1 + 2);
}
