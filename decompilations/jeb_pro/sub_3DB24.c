char* sub_3DB24(char* param0, uint32_t* param1, uint32_t param2) {
    char* ptr0 = sub_3D83C(param0, param1, param2);
    if(ptr0 == 0) {
        return NULL;
    }
    while(ptr0[0] != 45) {
        ptr0 = sub_3D83C(ptr0, param1, param2);
        if(ptr0 == 0) {
            return NULL;
        }
    }
    --*(int*)param2;
    return ptr0 + SOCK_STREAM;
}
