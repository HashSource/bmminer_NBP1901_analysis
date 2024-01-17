int sub_4FFA0(int param0, int param1, int param2) {
    if(param2 != 0) {
        int v0 = 0;
        int v1 = 0;
        do {
            sub_4FEAC(param0, v1);
            ++v0;
            usleep(10000);
            v1 += param1;
        }
        while(param2 != v0);
    }
    return 0;
}
