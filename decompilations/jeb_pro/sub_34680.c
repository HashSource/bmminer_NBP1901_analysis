int sub_34680() {
    int result;
    int __ptr1;
    if(gvar_7EB9C > 3) {
        __builtin_strcpy(&__ptr1, "soft open core");
        sub_2E584(3, &__ptr1, 0);
    }
    int v0 = 0;
    do {
        result = sub_1E29C(v0);
        if(result != 0) {
            sub_50C38((int)(uint8_t)v0, SOCK_STREAM);
            usleep(&loc_30D40);
            sub_50C38((int)(uint8_t)v0, 0);
            usleep("\n");
            sub_50DD4((int)(uint8_t)v0);
            result = usleep(&loc_30D40);
        }
        ++v0;
    }
    while(v0 != 4);
    return result;
}
