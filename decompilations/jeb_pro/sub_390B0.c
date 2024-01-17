char* sub_390B0(char* param0) {
    uint32_t v0 = gvar_5945B8;
    *(int*)((v0 + SOCK_STREAM) * 8 + (int)&gvar_5945BC) = *(int*)(param0 + 4);
    *(char*)((v0 + SOCK_STREAM) * 8 + (int)&gvar_5945C0) = (uint8_t)(*(param0 + 3) & 0x1f);
    *(char*)((char*)(v0 * 8 + (int)&gvar_5945C0) + 9) = *(param0 + 2);
    *(char*)((char*)(v0 * 8 + (int)&gvar_5945C0) + 10) = *(param0 + SOCK_STREAM);
    int v1 = (uint32_t)*param0;
    if(v0 <= 509) {
        gvar_5945B8 = v0 + SOCK_STREAM;
    }
    *(char*)((char*)(v0 * 8 + (int)&gvar_5945C0) + 11) = (uint8_t)(v1 & 0xf);
    if(v0 > 509) {
        gvar_5945B8 = 0;
    }
    uint32_t v2 = gvar_5945C0;
    gvar_5945C0 = v2 <= 510 ? v2 + SOCK_STREAM: 0x1ff;
    return param0;
}
