void* sub_52D44() {
    void* __ptr2 = pthread_getspecific(gvar_58DE08);
    if(__ptr2 == 0) {
        return 0;
    }
    return sub_5CFA8((char*)__ptr2);
}
