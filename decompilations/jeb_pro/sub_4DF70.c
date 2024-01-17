char* sub_4DF70(char* param0, int param1, uint32_t* param2) {
    uint32_t* ptr0;
    if(param1 == 0) {
        return param0;
    }
    int v0 = sub_4DE1C((int)param0[0]);
    if(v0 == SOCK_STREAM) {
        ptr0 = param2;
        goto loc_4DFCC;
    }
    else if(v0 != 0 && param1 >= (uint32_t)v0) {
        int v1 = sub_4DE88(param0, v0, &ptr0);
        if(v1 != 0) {
        loc_4DFCC:
            param0 = &param0[v0];
            if(param2 != 0) {
                *param2 = ptr0;
            }
            return param0;
        }
    }
    return NULL;
}
