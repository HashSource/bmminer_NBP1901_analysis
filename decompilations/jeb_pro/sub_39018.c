int sub_39018() {
    int result;
    uint32_t v0 = gvar_4FCB3C;
    if(v0 == 0) {
    loc_39074:
        if(gvar_7EB9C > 3) {
            int __ptr1 = 1684955464;
            int v1 = 0x6920656c;
            int v2 = 0x554e2073;
            int v3 = 0xa2e4c4c;
            char v4 = 0;
            return sub_2E584(3, &__ptr1, 0);
        }
    }
    else {
        int* ptr0 = *(uint32_t*)(v0 + 4);
        if(ptr0 == 0) {
            goto loc_39074;
        }
        else if(*(int*)(v0 + 64) != 0) {
            result = *(ptr0 + 5)();
        }
    }
    return result;
}
