int sub_44F48(int param0, int param1, int param2) {
    char v0;
    int v1;
    char v2;
    char v3;
    int v4 = 0;
    int v5 = 0;
    *(int*)&v0 = 0;
    do {
        char v6 = ((SOCK_STREAM << v4) & param2) == 0;
        char* ptr0 = (char*)(v5 + (int)&v1);
        if(v6 == 0) {
            *(ptr0 - 8) = (uint8_t)v4;
        }
        ++v4;
        if(v6 == 0) {
            ++v5;
        }
    }
    while(v5 <= 7 && v4 <= 31);
    if(param1 == 8) {
        sub_40390(45, param0);
        int v7 = (SOCK_STREAM << v0) | param0;
        sub_40390(57, v7);
        int v8 = (SOCK_STREAM << v3) | param0;
        int v9 = (SOCK_STREAM << v3) | v7;
        sub_40390(58, v8);
        sub_40390(59, (SOCK_STREAM << v2) | param0);
        sub_40390(60, v9);
        sub_40390(61, (SOCK_STREAM << v2) | v7);
        sub_40390(62, (SOCK_STREAM << v2) | v8);
        return sub_40390(63, (SOCK_STREAM << v2) | v9);
    }
    else if(param1 != 4) {
        return sub_40390(45, param0);
    }
    sub_40390(45, param0);
    int v10 = (SOCK_STREAM << v0) | param0;
    sub_40390(57, v10);
    sub_40390(58, (SOCK_STREAM << v3) | param0);
    return sub_40390(59, (SOCK_STREAM << v3) | v10);
}
