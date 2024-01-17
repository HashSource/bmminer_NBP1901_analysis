uint32_t sub_1A2E0(uint32_t param0) {
    uint32_t v0 = gvar_7EDC8;
    int* ptr0 = (int*)&gvar_7F8C4;
    if(v0 == 2) {
        param0 = *(uint32_t*)(param0 * 4 + (int)&gvar_7F8C4);
    }
    else {
        ptr0 = param0 * 4 + &gvar_7F8C4;
    }
    if(v0 != 2) {
        param0 = *(uint32_t*)(ptr0 + 7);
    }
    return param0;
}
