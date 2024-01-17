int sub_4FFE8(int param0, int param1) {
    char v0;
    uint8_t v1;
    uint8_t v2;
    char v3;
    char v4;
    char v5;
    char v6;
    if((uint32_t)param1 > 3000000) {
        int v7 = sub_5F880(100000000, param1 * 8);
        sub_51A20(0, param0, 0, 104, &v3);
        sub_51A20(0, param0, 0, 40, &v4);
        char v8 = (v8 | 0x40) & 0xdf;
        int v9 = (uint32_t)*(short*)&v6;
        v3 = (uint8_t)((uint32_t)SOCK_STREAM | ((uint32_t)(((uint32_t)(((v3 & 0xf) >>> 3) & SOCK_STREAM) | ((uint32_t)SOCK_STREAM << SOCK_STREAM) | ((uint32_t)((v3 >>> 7) & 0x1ffffff) << 4) | ((uint32_t)0 << 29)) & 0x1FFFFFFF) << 3));
        uint8_t v10 = (uint8_t)((uint32_t)SOCK_STREAM | ((uint32_t)((v10 >>> 6) & 0x3ffffff) << 6));
        *(short*)&v6 = (uint16_t)((uint32_t)112 | ((uint32_t)((v9 >>> 12) & 0xfffff) << 12));
        sub_4FA10(param0, SOCK_STREAM, 0, 104, v3);
        usleep(10000);
        sub_4FA10(param0, SOCK_STREAM, 0, 104, v3);
        usleep(10000);
        char v11 = 3;
        v4 = 15;
        uint8_t v12 = (uint8_t)((uint32_t)6 | ((uint32_t)(((v12 & 0x3f) >>> 4) & 0xfffffff) << 4));
        uint8_t v13 = (uint8_t)((uint8_t)~(~(v13 * 0x2000000) >>> 25) & 0x8f);
        sub_4FA10(param0, SOCK_STREAM, 0, 40, v4);
        usleep(10000);
        sub_51A20(0, param0, 0, 24, &v5);
        v2 = (uint32_t)(uint8_t)(((uint32_t)((uint8_t)v7 - SOCK_STREAM) >>> 5) & 0xf) | ((uint32_t)((v2 >>> 4) & 0xfffffff) << 4);
        v1 = (uint32_t)((uint8_t)(v7 & 0x1f) - SOCK_STREAM) | ((uint32_t)((v1 >>> 5) & 0x7ffffff) << 5);
        v0 |= SOCK_STREAM;
    }
    else {
        int v14 = sub_5F880(25000000, param1 * 8);
        sub_51A20(0, param0, 0, 24, &v5);
        v2 = (uint32_t)(uint8_t)(((uint32_t)((uint8_t)v14 - SOCK_STREAM) >>> 5) & 0xf) | ((uint32_t)((v2 >>> 4) & 0xfffffff) << 4);
        v1 = (uint32_t)((uint8_t)(v14 & 0x1f) - SOCK_STREAM) | ((uint32_t)((v1 >>> 5) & 0x7ffffff) << 5);
        v0 &= 254;
    }
    sub_4FA10(param0, SOCK_STREAM, 0, 24, v5);
    usleep(50000);
    sub_45CBC(param0, param1);
    return 0;
}
