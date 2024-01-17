void* sub_2D67C(int* param0) {
    char __ptr1;
    void* result = calloc(1, 64);
    int v0 = *param0;
    if(result == 0) {
        snprintf(&__ptr1, 0x800, "Failed to calloc store for %s in %s %s():%d", v0, "klist.c", "k_new_store", 85);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
        v0 = *param0;
    }
    int v1 = *(param0 + 2);
    char v2 = *(char*)(param0 + 11);
    *(int*)result = v0;
    *(int*)((int)result + 8) = v1;
    *(char*)((int)result + 44) = v2;
    *(char*)((int)result + 4) = SOCK_STREAM;
    return result;
}
