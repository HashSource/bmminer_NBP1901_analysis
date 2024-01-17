char* sub_3DACC(int* param0, uint32_t* param1) {
    char* ptr0 = sub_3D754(param0, param1);
    if(ptr0 == 0) {
        return NULL;
    }
    while(ptr0[0] != 45) {
        ptr0 = sub_3D83C(ptr0, (uint32_t*)param0, (uint32_t)param1);
        if(ptr0 == 0) {
            return NULL;
        }
    }
    --param1[0];
    return ptr0 + SOCK_STREAM;
}
