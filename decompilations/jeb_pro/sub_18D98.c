int sub_18D98(int param0, int param1, int param2) {
    int v0 = param1;
    int result = sub_18C40(param2);
    uint32_t v1 = gvar_7E298;
    if(v1 == 3) {
        if(v0 + 3 < 3) {
            v0 += 3;
        }
        if(v0 >> 2 <= 0) {
            return result;
        }
        int v2 = (v0 >> 2) * 4 + param0;
        v1 = param0;
        do {
            *(int*)v1 ^= *(int*)result;
            v1 += 4;
        }
        while(v1 != v2);
        return result;
    }
    else if(v1 != 2) {
        return result;
    }
    if((v0 & 0x7) != 0) {
        if(gvar_7EB9C <= 3) {
            return result;
        }
        return sub_18BC0();
    }
    int v3 = v0 + 3;
    if(v3 >= 3) {
        v3 = v0;
    }
    return sub_19074(param0, v3 >> 2, (int*)result);
}
