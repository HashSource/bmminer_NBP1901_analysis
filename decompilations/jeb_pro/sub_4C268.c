void sub_4C268(char* param0) {
    if(*param0 == 117) {
        char* ptr0 = param0;
        int v0 = 0;
        int* ptr1 = (int*)(ptr0 + 4);
        do {
            int v1 = (uint32_t)*(ptr0 + SOCK_STREAM);
            ++ptr0;
            if((uint8_t)v1 - 48 <= 9) {
                v0 = v1 - 48 + v0 * 16;
            }
            else if(v1 - 97 <= 25) {
                v0 = v1 - 87 + v0 * 16;
            }
            else {
                if(v1 - 65 > 25) {
                    return;
                }
                v0 = v1 - 55 + v0 * 16;
            }
        }
        while(ptr0 != ptr1);
        return;
    }
    /*NO_RETURN*/ __assert_fail("str[0] == \'u\'", "load.c", 309, "decode_unicode_escape");
}
