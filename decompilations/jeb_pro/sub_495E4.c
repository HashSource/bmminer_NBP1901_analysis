int sub_495E4(int param0, char* param1, int param2) {
    int v0 = pthread_mutex_lock(&g505188);
    if(v0 == 0) {
        int result = sub_49B10(param0, param1, param2);
        pthread_mutex_unlock(&g505188);
        return result;
    }
    int __ptr1 = 1818845542;
    int v1 = 1948279909;
    int v2 = 845750383;
    int v3 = 1869357155;
    int v4 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -4;
}
