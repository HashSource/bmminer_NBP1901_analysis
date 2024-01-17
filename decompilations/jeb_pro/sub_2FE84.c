int sub_2FE84(int param0) {
    if(param0 == 0) {
        return 0;
    }
    pthread_t __th = *(pthread_t*)(param0 + 12);
    if(__th == 0) {
        return sem_destroy((sem_t*)(param0 + 16));
    }
    pthread_cancel(__th);
    *(int*)(param0 + 12) = 0;
    return sem_destroy((sem_t*)(param0 + 16));
}
