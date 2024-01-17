int sub_45D30(int param0) {
    int v0;
    int v1 = 0;
    sub_40314(15, &v1);
    if(param0 != 0) {
        switch(param0) {
            case 1: {
                v0 = (uint32_t)(uint8_t)((v1 >>> 8) & 0x3f);
                break;
            }
            case 2: {
                v0 = (uint32_t)(uint8_t)((v1 >>> 16) & 0x3f);
                break;
            }
            case 3: {
                v0 = (uint32_t)(uint8_t)((v1 >>> 24) & 0x3f);
                break;
            }
            default: {
                return -1;
            }
        }
        if(v0 == 0) {
            return 3000000;
        }
    loc_45D68:
        if(v0 == SOCK_STREAM) {
            return 1500000;
        }
        if(v0 == 4) {
            return 12000000;
        }
        else if(v0 == 5) {
            return 25000000;
        }
        else if(v0 < 3 || v0 >= 6) {
            return &loc_1C200;
        }
        return 6000000;
    }
    v0 = v1 & 0x3f;
    if((v1 & 0x3f) != 0) {
        goto loc_45D68;
    }
    return 3000000;
}
