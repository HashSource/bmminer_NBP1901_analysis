// Stale decompilation - Refresh this view to re-decompile this code
int sub_440E8(int param0) {
    int result;
    if((uint32_t)param0 <= 15) {
        result = *(int*)(param0 * 8 + 0x505088);
        if(*(int*)(param0 * 8 + 0x505088) == 0 || *(int*)(param0 * 8 + 0x50508c) == 0) {
            short v0 = 0;
            char v1 = 10;
            int v2 = param0;
            char v3 = (uint8_t)param0;
            result = sub_493D0((int)&v2);
            if(result >= 0) {
                *(int*)(param0 * 8 + 0x505088) = result;
                *(int*)(param0 * 8 + 0x50508c) = SOCK_STREAM;
            }
        }
        return result;
    }
    return sub_44098(param0);
}
