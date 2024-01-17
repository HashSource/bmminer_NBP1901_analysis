int sub_30B90(sem_t* __sem) {
    pthread_setcanceltype(SOCK_STREAM, NULL);
    *(int*)&__sem[SOCK_STREAM].__size[0](*(int*)&__sem[SOCK_STREAM].__size[4]);
    sub_30B58(__sem, "util.c", "completion_thread", 3638);
    return 0;
}
