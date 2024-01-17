int sub_4EB00(int param0, int param1) {
    if(param0 != 0) {
        int v0 = *(int*)param0;
        if(v0 == 3) {
            return sub_600C4(*(uint32_t*)(param0 + 8), *(uint32_t*)(param0 + 12));
        }
        if(v0 == 4) {
            return param0;
        }
    }
    return param0;
}
