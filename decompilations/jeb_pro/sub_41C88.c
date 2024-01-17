int sub_41C88(int param0, char* param1, int param2) {
    int v0 = param2;
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262952));
    short v1 = sub_41474((int)(uint8_t)param0);
    if((uint16_t)v1 < (uint32_t)v0) {
        v0 = v1;
    }
    if(v0 == 0) {
        pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262952));
        return 0;
    }
    int result = sub_41794(param0, param1, v0);
    pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262952));
    return result;
}
