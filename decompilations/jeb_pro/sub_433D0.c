int sub_433D0(uint32_t* param0, int param1, uint32_t* param2) {
    if(param0 != 0) {
        uint32_t* ptr0 = sub_43804(*param0, param1);
        if(ptr0 != 0) {
            sub_44000(ptr0[5], param2);
            return SOCK_STREAM;
        }
    }
    return 0;
}
