// Stale decompilation - Refresh this view to re-decompile this code
int sub_46024(int param0) {
    int result;
    if((uint32_t)param0 <= 15) {
        result = *(int*)(param0 * 8 + 10088008);
        if(result == 0 || *(int*)(param0 * 8 + 10088012) == 0) {
            short v0 = 0;
            char v1 = 4;
            int v2 = param0;
            char v3 = (uint8_t)param0;
            pthread_mutex_lock(&g50514C);
            result = sub_493D0((int)&v2);
            pthread_mutex_unlock(&g50514C);
            if(result >= 0) {
                *(int*)(param0 * 8 + 10088008) = result;
                *(int*)(param0 * 8 + 10088012) = SOCK_STREAM;
            }
        }
        return result;
    }
    return sub_45E80(param0);
}
