short sub_420C4(int param0) {
    pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262952));
    short result = sub_41474((int)(uint8_t)param0);
    pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262952));
    return result;
}
