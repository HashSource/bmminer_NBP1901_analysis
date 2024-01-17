char* sub_3DB7C(int* param0) {
    int v0 = 0;
    char* result = sub_3D754(param0, &v0);
    if(result == 0) {
        return NULL;
    }
    while(result[0] == 45) {
        result = sub_3D83C(result, (uint32_t*)param0, (uint32_t)&v0);
        if(result == 0) {
            return NULL;
        }
    }
    return result;
}
