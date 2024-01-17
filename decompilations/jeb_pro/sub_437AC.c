void* sub_437AC(int param0, int param1, int param2) {
    void* result = malloc(40);
    if(result == 0) {
        return 0;
    }
    *(int*)((int)result + 20) = 0;
    *(int*)((int)result + 24) = 0;
    *(int*)((int)result + 12) = 0;
    *(int*)((int)result + 16) = 0;
    *(int*)((int)result + 36) = param0;
    *(int*)((int)result + 28) = param1;
    *(int*)((int)result + 32) = param2;
    *(int**)result = (int*)((int)result + 4);
    *(uint32_t*)((int)result + 4) = (int*)((int)result + 4);
    *(uint32_t*)((int)result + 8) = (int*)((int)result + 4);
    return result;
}
