void* sub_432D0(int param0, int param1, int param2) {
    void* result = malloc(4);
    if(result != 0) {
        void* ptr0 = sub_437AC(param0, param1, param2);
        *(void**)result = ptr0;
        if(ptr0 != 0) {
            return result;
        }
    }
    return NULL;
}
