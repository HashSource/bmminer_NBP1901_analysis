uint32_t* sub_2327C(uint32_t* param0, char* param1) {
    uint32_t v0 = param0[0];
    int v1 = (param0[SOCK_STREAM] * 8) | (v0 >>> 29);
    char v2 = (uint8_t)v0 * 8;
    char v3 = (uint8_t)(v0 >>> 21);
    char v4 = (uint8_t)v1;
    char v5 = (uint8_t)(v1 >>> 16);
    char v6 = (uint8_t)(v1 >>> 8);
    char v7 = (uint8_t)(v0 >>> 13);
    char v8 = (uint8_t)(v0 >>> 5);
    char __src = (uint8_t)(v1 >>> 24);
    sub_231A4(param0, &g62768, (v0 & 0x3f) <= 55 ? (size_t)(56 - (v0 & 0x3f)): (size_t)(120 - (v0 & 0x3f)));
    uint32_t* result = sub_231A4(param0, &__src, 8);
    *(int*)param1 = (uint32_t)*((char*)&param0[2] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[2] + 2) << 8) | ((uint32_t)(uint8_t)(param0[2] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[2] << 24);
    *(int*)(param1 + 4) = (uint32_t)*((char*)&param0[3] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[3] + 2) << 8) | ((uint32_t)(uint8_t)(param0[3] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[3] << 24);
    *(int*)(param1 + 8) = (uint32_t)*((char*)&param0[4] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[4] + 2) << 8) | ((uint32_t)(uint8_t)(param0[4] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[4] << 24);
    *(int*)(param1 + 12) = (uint32_t)*((char*)&param0[5] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[5] + 2) << 8) | ((uint32_t)(uint8_t)(param0[5] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[5] << 24);
    *(int*)(param1 + 16) = (uint32_t)*((char*)&param0[6] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[6] + 2) << 8) | ((uint32_t)(uint8_t)(param0[6] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[6] << 24);
    *(int*)(param1 + 20) = (uint32_t)*((char*)&param0[7] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[7] + 2) << 8) | ((uint32_t)(uint8_t)(param0[7] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[7] << 24);
    *(int*)(param1 + 24) = (uint32_t)*((char*)&param0[8] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[8] + 2) << 8) | ((uint32_t)(uint8_t)(param0[8] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[8] << 24);
    *(int*)(param1 + 28) = (uint32_t)*((char*)&param0[9] + 3) | ((uint32_t)(uint8_t)*(short*)((char*)&param0[9] + 2) << 8) | ((uint32_t)(uint8_t)(param0[9] >>> 8) << 16) | ((uint32_t)(uint8_t)param0[9] << 24);
    return result;
}
