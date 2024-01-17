int sub_2E92C(int param0, int param1, int param2) {
    if(param2 != 0) {
        pthread_mutex_trylock(&g59450C);
        sub_2E828(42);
        gvar_7ECC4{sub_2F250}();
    }
    sub_2E8A4();
    printf("\n", param0, param1, "                    \n");
    sub_2E828(55);
    return gvar_7ECC4{sub_2F250}();
}
