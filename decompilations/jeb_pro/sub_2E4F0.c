int sub_2E4F0(void* __ptr, int param1, int param2, int param3) {
    char __ptr1;
    if(*(char*)((int)__ptr + 4) == 0) {
        int v0 = *(int*)__ptr;
        char* ptr0 = "klist.c";
        char* ptr1 = "_k_free_store";
        char* ptr2 = "_k_free_store";
        int v1 = 424;
        snprintf(&__ptr1, 0x800, "Store %s can\'t %s() the list - from %s %s() line %d in %s %s():%d", v0, "_k_free_store", param1, param2, param3, "klist.c", "_k_free_store", 424);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    free(__ptr);
    return 0;
}
