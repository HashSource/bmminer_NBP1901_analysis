int sub_14D60(int param0, int param1, int param2) {
    pthread_mutex_lock(&g7F7C0);
    uint32_t v0 = param1 == 0 ? sub_1E19C(): sub_14434();
    int result = param0 > 3 || (int)v0 <= param2 ? 0: (int)*((short*)(param2 * 6 + *(int*)(param1 * 4 + *(int*)(param0 * 4 + gvar_7F7B8))) + 2);
    pthread_mutex_unlock(&g7F7C0);
    return result;
}
