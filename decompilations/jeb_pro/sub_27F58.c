pthread_t sub_27F58() {
    pthread_t result;
    int v0 = (int)gvar_80754;
    if(v0 != 0) {
        result = pthread_self();
        if(*(int*)(v0 + 12) != result) {
            if(gvar_7EB9C > 3) {
                int __ptr1 = 0x636e6163;
                int v1 = 1948281957;
                int v2 = 1634038376;
                short v3 = 2660;
                char v4 = 0;
                sub_2E584(3, &__ptr1, 0);
                v0 = gvar_80754;
            }
            sub_2FE84(v0);
            free(gvar_80754);
            gvar_80754 = 0;
        }
    }
    return result;
}
