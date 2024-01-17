int sub_2823C() {
    puts("bmminer_socket_init");
    pthread_mutexattr_t* ptr0 = sub_5261C(&gvar_7E3F8, 4);
    while(ptr0 != 0) {
        sleep(3);
        ptr0 = sub_5261C(&gvar_7E3F8, 4);
    }
    puts("regist ..");
    while(SOCK_STREAM) {
        sub_52930("bitmain_submit_nonce");
        int v0 = sub_52930("bitmain_api_status");
        if(v0 == 0) {
            break;
        }
        sleep(3);
    }
    puts("regist done!");
    return 0;
}
