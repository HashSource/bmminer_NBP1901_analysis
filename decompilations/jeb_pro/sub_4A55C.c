int sub_4A55C(void* __buf, size_t __n, int* param2) {
    ssize_t v0 = write(*param2, __buf, __n);
    return v0 == __n ? __n - v0: -1;
}
