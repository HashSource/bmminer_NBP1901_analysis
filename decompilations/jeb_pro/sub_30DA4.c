int sub_30DA4(sem_t* __sem) {
    int result;
loc_30DB8:
    do {
        result = sem_trywait(__sem);
        if(result < 0) {
            result = __errno_location();
            if(*(int*)result == 4) {
                goto loc_30DB8;
            }
            return result;
        }
    }
    while(result == 0);
    return result;
}
