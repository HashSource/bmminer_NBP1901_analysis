uint32_t sub_3A828(int param0, int* param1) {
    int v0;
    int v1 = *(int*)((param0 + 2107392) * 4 + (int)param1);
    uint32_t v2 = sub_1E130();
    VCVT.F32.U32(v1, v1);
    uint32_t v3 = sub_1E0F0();
    VCVT.F32.S32(v0, v2 * v3 * 8);
    VDIV.F32(v0, v1, v0);
    return v2 * v3 * 8;
}
