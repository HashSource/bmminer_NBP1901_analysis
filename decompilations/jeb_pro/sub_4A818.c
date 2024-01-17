int sub_4A818(int param0, int param1, int param2, int param3, int param4) {
    if((param0 & 0x1f) != 0) {
        int v0 = (param0 & 0x1f) * param1;
        int v1 = param3("\n", SOCK_STREAM, param4);
        if(v1 != 0) {
            return -1;
        }
        else if(v0 == 0) {
            return 0;
        }
        while(SOCK_STREAM) {
            int v2 = param3("                                ", v0 < 32 ? v0: 32, param4);
            if(v2 != 0) {
                return -1;
            }
            v0 -= v0 < 32 ? v0: 32;
            if(v0 == 0) {
                return 0;
            }
        }
    }
    else if(param2 != 0 && (param0 & 0x20) == 0) {
        jump param3;
    }
    return 0;
}
