uint32_t* sub_23430(void* __src, size_t param1, char* param2) {
    int v0 = 0x6a09e667;
    int v1 = 1013904242;
    int v2 = -1521486534;
    int v3 = 1359893119;
    int v4 = -1694144372;
    int v5 = -1150833019;
    int v6 = 0x1f83d9ab;
    int v7 = 1541459225;
    int v8 = 0;
    int v9 = 0;
    if((int)param1 > 0) {
        sub_231A4(&v8, __src, param1);
    }
    return sub_2327C(&v8, param2);
}
