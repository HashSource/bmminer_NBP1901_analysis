int sub_30B58(sem_t* __sem, int param1, int param2, int param3) {
    int v0 = sem_post(__sem);
    if(v0 == 0) {
        return 0;
    }
    return sub_2F258((int)__sem, param1, param2, param3);
}
