uint32_t* sub_42180(uint32_t* param0, uint32_t* param1) {
    int v0;
    if(param1 != 0) {
        param0 = sub_43338(param1, &v0);
        if(param0 == SOCK_STREAM) {
            return sub_43358((int*)param1);
        }
    }
    return param0;
}
