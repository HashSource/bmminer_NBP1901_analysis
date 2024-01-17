int sub_45E30(int param0) {
    int v0 = sub_44540(param0);
    int v1 = 0;
    sub_40314(15, &v1);
    int v2 = (uint32_t)(uint8_t)(v0 & 0x3f) | ((uint32_t)((v1 >>> 6) & 0x3ffffff) << 6);
    int v3 = (uint32_t)(uint8_t)v2 | ((uint32_t)(uint8_t)(v0 & 0x3f) << 8) | ((uint32_t)((v2 >>> 14) & 0x3ffff) << 14);
    int v4 = (uint32_t)(uint16_t)v3 | ((uint32_t)(uint8_t)(v0 & 0x3f) << 16) | ((uint32_t)(uint16_t)((v3 >>> 22) & 0x3ff) << 22);
    sub_40390(15, (uint32_t)(v4 & 0xffffff) | ((uint32_t)(uint8_t)(v0 & 0x3f) << 24) | ((uint32_t)(uint8_t)((v4 >>> 30) & 0x3) << 30));
    return 0;
}
