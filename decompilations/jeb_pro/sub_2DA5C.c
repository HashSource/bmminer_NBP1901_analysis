uint32_t* sub_2DA5C(void* param0, int param1, int param2, int param3) {
    uint32_t* result = sub_2D9D4(param0, param1, param2, param3);
    if(result != 0) {
        memset(result[3], 0, *(size_t*)((int)param0 + 20));
    }
    return result;
}
