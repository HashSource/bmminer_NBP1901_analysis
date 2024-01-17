int sub_45CBC(int param0, int param1) {
    int v0 = sub_44540(param1);
    int v1 = 0;
    sub_40314(15, &v1);
    int v2 = v1;
    switch(param0) {
        case 0: {
            v2 = (uint32_t)(uint8_t)(v0 & 0x3f) | ((uint32_t)((v2 >>> 6) & 0x3ffffff) << 6);
            break;
        }
        case 1: {
            v2 = (uint32_t)(uint8_t)v2 | ((uint32_t)(uint8_t)(v0 & 0x3f) << 8) | ((uint32_t)((v2 >>> 14) & 0x3ffff) << 14);
            break;
        }
        case 2: {
            v2 = (uint32_t)(uint16_t)v2 | ((uint32_t)(uint8_t)(v0 & 0x3f) << 16) | ((uint32_t)(uint16_t)((v2 >>> 22) & 0x3ff) << 22);
            break;
        }
        case 3: {
            v2 = (uint32_t)(v2 & 0xffffff) | ((uint32_t)(uint8_t)(v0 & 0x3f) << 24) | ((uint32_t)(uint8_t)((v2 >>> 30) & 0x3) << 30);
            break;
        }
    }
    sub_40390(15, v2);
    return 0;
}
