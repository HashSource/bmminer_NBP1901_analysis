uint32_t sub_37C4C(char* param0) {
    int* ptr0;
    uint32_t v0;
    int v1 = *(int*)(param0 + 4);
    uint32_t v2 = sub_1E160();
    int v3 = sub_51978(v1, (int)v2);
    int v4 = (uint32_t)*param0 & 0xf;
    int v5 = (uint32_t)(uint16_t)(*(short*)(param0 + 2) & 0x7fff);
    int v6 = sub_51970(v1);
    uint32_t result = sub_1E140();
    if((uint32_t)v4 <= 3) {
        uint32_t v7 = result;
        result = sub_1E29C(v4);
        if(result != 0) {
            int v8 = (uint32_t)*param0;
            if((v8 & 0x20) == 0) {
                if((v8 & 0x40) == 0) {
                    if((v8 & 0x80) == 0) {
                        int* ptr1 = (int*)(v4 * 4 + gvar_4FCB38 + 0x80a000);
                        ++*(ptr1 + 0x212);
                        return result;
                    }
                    result = sub_1E0F0();
                    if(result <= (uint32_t)v3) {
                        v0 = v4 * 4 + gvar_4FCB38 + 0x80a000;
                        ++*(int*)(v0 + 0x88c);
                        return result;
                    }
                    int v9 = v7 * v6 + (v5 & 0x3);
                    result = sub_1E130();
                    int v10 = v5 >> 7 > 7;
                    if(result <= v9) {
                        v10 |= SOCK_STREAM;
                    }
                    if(v10 != 0) {
                        v0 = v4 * 4 + gvar_4FCB38 + 0x80a000;
                        ++*(int*)(v0 + 0x868);
                        return result;
                    }
                    uint32_t v11 = gvar_4FCB38;
                    if(*(int*)((v5 >> 7) * 52 + v9 * 416 + (*(uint32_t*)((int)(int*)(v3 * 4 + (int)&gvar_80A8AC) + v11) + 4)) != v1) {
                        result = sub_386BC((int*)(((uint32_t)((uint16_t)v5 & 0x7f) | ((uint32_t)(((v5 & 0x7f) >>> 15) & SOCK_STREAM ? 0xffff: 0) << 16)) * 52 + (uint32_t)((uint64_t)(v4 * 6656 + 8432812) | ((uint64_t)(v4 * 6656 < -8432812) << 32)) + v11), (int*)v1);
                        v0 = v4 * 4 + gvar_4FCB38 + 0x80a000;
                        ptr0 = (result != 0 ? *(int*)(v0 + 0x858): *(int*)(v0 + 0x868)) + SOCK_STREAM;
                        if(result != 0) {
                            *(uint32_t*)(v0 + 0x858) = ptr0;
                            return result;
                        }
                        *(uint32_t*)(v0 + 0x868) = ptr0;
                        return 0;
                    }
                    int v12 = v4 * 0x100 + v3;
                    int* ptr2 = (int*)((v12 * 0x400 + v9) * 4 + v11);
                    int v13 = *(ptr2 + 2);
                    if(((SOCK_STREAM << (v5 >> 7)) & v13) != 0) {
                        v0 = v4 * 4 + v11 + 0x80a000;
                        ++*(int*)(v0 + 0x818);
                        return 52;
                    }
                    *(ptr2 + 2) = (SOCK_STREAM << (v5 >> 7)) | v13;
                    int* ptr3 = (int*)(v12 * 4 + v11 + 0x809000);
                    ++*(ptr2 + 0x102402);
                    ptr0 = v4 * 4 + v11 + 0x80a000;
                    ++*(ptr3 + 2);
                    ++*(ptr0 + 2);
                    return (uint32_t)(ptr2 + 0x102400);
                }
                int* ptr4 = (int*)(v4 * 4 + gvar_4FCB38 + 0x80a000);
                ++*(ptr4 + 526);
                return result;
            }
            int* ptr5 = (int*)(v4 * 4 + gvar_4FCB38 + 0x80a000);
            ++*(ptr5 + 522);
            return result;
        }
    }
    v0 = gvar_4FCB38 + 0x80a000;
    ++*(int*)(v0 + 0x888);
    return result;
}
