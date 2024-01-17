size_t sub_4E144(void* __src, size_t __n, int param2) {
    size_t v0 = (size_t)__src;
    if(v0 != 0) {
        if(param2 == 0) {
            v0 = sub_4D8B0(__src, __n);
            if(v0 == 0) {
                return 0;
            }
        }
        size_t result = sub_4D880(16);
        if(result != 0) {
            *(size_t*)(result + 8) = v0;
            *(size_t*)(result + 12) = __n;
            *(int*)result = 2;
            *(int*)(result + 4) = SOCK_STREAM;
            return result;
        }
        sub_4D898((void*)v0);
    }
    return 0;
}
