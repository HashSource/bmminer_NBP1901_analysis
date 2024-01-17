int sub_1F038(int param0) {
    int result;
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0) {
            result = (uint8_t)v0;
            if((param0 != v0 ? param0 == 0xFF: SOCK_STREAM) != 0) {
                result = sub_51708(result, SOCK_STREAM);
            }
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
