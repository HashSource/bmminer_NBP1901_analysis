int sub_1E91C(int param0) {
    uint32_t v0 = gvar_58E038;
    if((int)v0 > 0) {
        uint32_t v1 = gvar_58E03C;
        if((uint32_t)*(short*)v1 == param0) {
            return SOCK_STREAM;
        }
        v0 = v0 * 2 + v1;
        v1 += 2;
        while(v0 != v1) {
            int v2 = (uint32_t)*(short*)v1;
            v1 += 2;
            if(param0 == v2) {
                return SOCK_STREAM;
            }
        }
    }
    return 0;
}
