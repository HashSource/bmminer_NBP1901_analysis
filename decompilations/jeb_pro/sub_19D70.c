uint32_t sub_19D70(uint32_t param0, int* param1, int* param2, int* param3) {
    int v0;
    int v1;
    int v2;
    uint32_t result = sub_1E0F0();
    uint32_t v3 = result;
    v2 = 0;
    if((int)v3 > 0) {
        result = param0;
        uint32_t v4 = v3 * 4 + param0;
        v1 = 0;
        v0 = 0xffffff;
        while(SOCK_STREAM) {
            int v5 = *(int*)result;
            result += 4;
            v2 += v5;
            if(v5 > v1) {
                v1 = v5;
            }
            if(v0 >= v5) {
                v0 = v5;
            }
            if(result != v4) {
                continue;
            }
            break;
        }
    }
    else {
        v0 = 0xffffff;
        v1 = 0;
    }
    *param1 = v0;
    *param2 = v1;
    *param3 = v2;
    return result;
}
