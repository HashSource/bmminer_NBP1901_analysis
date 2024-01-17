int sub_4FF50(int param0, int param1) {
    int v0 = sub_5F880(0x100, param1);
    if(v0 != 0) {
        int v1 = 0;
        int v2 = 0;
        do {
            sub_4FEAC(param0, v2);
            ++v1;
            usleep(10000);
            v2 += param1;
        }
        while(v1 != v0);
    }
    return 0;
}
