char* sub_3DBDC(char* param0, uint32_t* param1) {
    int v0 = SOCK_STREAM;
    char* result = sub_3D83C(param0, param1, &v0);
    if(result == 0) {
        return NULL;
    }
    while(result[0] == 45) {
        result = sub_3D83C(result, param1, &v0);
        if(result == 0) {
            return NULL;
        }
    }
    return result;
}
