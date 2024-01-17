int sub_4C540(int param0, int param1) {
    int result = *(int*)(param0 + 20);
    if(result == 0) {
        sub_4C3B8(param0, param1);
        result = param0;
    }
    if((uint32_t)(result + 2) > SOCK_STREAM) {
        sub_4DAB0((uint32_t*)(param0 + 40), (char)result);
    }
    return result;
}
