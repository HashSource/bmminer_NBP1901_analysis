void* sub_4BEC0(int* param0, int param1) {
    void* result = *(void**)(param0 + 3);
    if(result != 0 && *(int*)((int)result + 4) != -1) {
        DMB();
        int v0 = *(int*)((int)result + 4) - SOCK_STREAM;
        --*(int*)((int)result + 4);
        if(v0 == 0) {
            result = sub_4EB6C(result);
            *(param0 + 3) = param1;
            return result;
        }
    }
    *(param0 + 3) = param1;
    return result;
}
