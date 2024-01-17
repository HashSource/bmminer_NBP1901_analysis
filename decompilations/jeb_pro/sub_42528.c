int sub_42528(int param0, int param1) {
    int v0;
    int v1;
    int result;
    int v2;
    int v3;
    uint32_t* ptr0;
    int v4 = sub_42388(param0);
    if(v4 != 0) {
        int v5 = pthread_mutex_lock(&g504FEC);
        if(v5 == 0) {
            uint32_t* ptr1 = (uint32_t*)gvar_505004;
            switch(param1) {
                case 1: {
                    sub_42180((uint32_t*)v4, ptr1);
                    result = sub_40ED4(v4, 0);
                    break;
                }
                case 2: {
                    int v6 = v4;
                    if(ptr1 == 0) {
                    loc_425C4:
                        result = -1;
                    }
                    else {
                        uint32_t* ptr2 = sub_43338(ptr1, &v6);
                        if(ptr2 == 0) {
                            ptr0 = NULL;
                            result = -1;
                            v3 = 200;
                            v2 = SOCK_STREAM;
                            sub_43320((int*)ptr1, &v6, 4, &v3, 12);
                        }
                        else {
                            goto loc_425C4;
                        }
                    }
                    break;
                }
                default: {
                    sub_42180((uint32_t*)v4, ptr1);
                    result = sub_40ED4(v4, SOCK_STREAM);
                    break;
                }
            }
            pthread_mutex_unlock(&g504FEC);
            return result;
        }
        v3 = 1818845542;
        ptr0 = &g74206465;
        v2 = 1885413487;
        v1 = 1869357161;
        v0 = 0xa6b63;
        sub_2E584(0, (char*)&v3, 0);
        return -1;
    }
    v3 = 1970499189;
    ptr0 = &g74726F70;
    v2 = 1730176101;
    v1 = 544172400;
    v0 = 1953656688;
    short v7 = 10;
    sub_2E584(0, (char*)&v3, 0);
    return -1;
}
