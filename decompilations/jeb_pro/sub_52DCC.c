int sub_52DCC(char* param0) {
    int v0;
    if(gvar_58DE18 == 0) {
        int v1 = pthread_key_create(&gvar_58DE08, &sub_5CFA8);
        if(v1 == 0) {
            sub_60318();
            if(param0 != 0) {
                v0 = param0;
                sub_5DF98(&g2, "src/zlog.c", 85, "atexit fail, rc[%d]");
                sub_52D68();
                return -1;
            }
            gvar_58DE18 = 1;
            goto loc_52E24;
        }
        else {
            v0 = v1;
            sub_5DF98(&g2, "src/zlog.c", 76, "pthread_key_create fail, rc[%d]");
        }
    }
    else {
    loc_52E24:
        char* ptr0 = sub_56EB8(param0);
        gvar_99EEC8 = (uint32_t)ptr0;
        if(ptr0 == 0) {
            v0 = param0;
            sub_5DF98(&g2, "src/zlog.c", 93, "zlog_conf_new[%s] fail");
        }
        else {
            void* ptr1 = sub_55DB8();
            gvar_58DE0C = (uint32_t)ptr1;
            if(ptr1 == 0) {
                sub_5DF98(&g2, "src/zlog.c", 99, "zlog_category_table_new fail");
            }
            else {
                void* ptr2 = sub_58500();
                gvar_58DE14 = (uint32_t)ptr2;
                if(ptr2 != 0) {
                    return 0;
                }
                sub_5DF98(&g2, "src/zlog.c", 105, "zlog_record_table_new fail");
            }
        }
    }
    sub_52D68();
    return -1;
}
