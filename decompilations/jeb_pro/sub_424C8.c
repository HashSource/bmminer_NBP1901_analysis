int sub_424C8(int param0, int param1) {
    int result;
    int v0 = sub_42308(param0);
    if(v0 != 258) {
        int* ptr0 = (int*)&gvar_505008;
        do {
            int v1 = *ptr0;
            ++ptr0;
            result = v0;
            if(v1 != 0) {
                result = v1(result, param1 == 0 ? param1: SOCK_STREAM);
            }
        }
        while(ptr0 != 0x50501c);
        return result;
    }
    return sub_42488(param0);
}
