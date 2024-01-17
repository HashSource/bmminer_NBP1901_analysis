int sub_2F3A0(char* param0, int param1) {
    int v0 = pthread_mutex_lock((pthread_mutex_t*)(param0 + 12));
    if(v0 != 0) {
        sub_2F33C("tq_freezethaw", 0x454);
    }
    *(param0 + 8) = (uint8_t)param1;
    pthread_cond_signal((pthread_cond_t*)(param0 + 40));
    sub_2F2C0((pthread_mutex_t*)(param0 + 12), "tq_freezethaw", 1111);
    return gvar_7ECC4{sub_2F250}();
}
