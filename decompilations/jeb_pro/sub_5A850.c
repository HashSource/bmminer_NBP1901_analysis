char* sub_5A850(uint32_t* param0, char* param1) {
    char* result;
    if(param0 != 0) {
        int* ptr0 = *(param0 + 1566);
        int* ptr1 = *(param0 + 2081);
        uint32_t* ptr2 = (uint32_t*)((char*)param0 + 0x1c81);
        uint32_t* ptr3 = param0 + 1568;
        int* ptr4 = ptr1;
        int* ptr5 = *(param0 + 1565);
        int* ptr6 = *(param0 + 1561);
        uint32_t* ptr7 = param0 + 1302;
        int* ptr8 = ptr6;
        int* ptr9 = *(param0 + 0x515);
        int* ptr10 = *(param0 + 1300);
        int* ptr11 = *(param0 + 1294);
        int* ptr12 = *(param0 + 1293);
        uint32_t* ptr13 = param0 + 1036;
        int* ptr14 = ptr12;
        int* ptr15 = *(param0 + 1035);
        int* ptr16 = *(param0 + 1034);
        int* ptr17 = *(param0 + 1025);
        int v0 = (uint32_t)*(uint8_t*)((uint8_t*)param0 + 0x1001);
        uint32_t* ptr18 = param0;
        uint32_t* ptr19 = param0;
        int v1 = v0;
        result = sub_5DF98(param1, "src/rule.c", 65, "---rule:[%p][%s%c%d]-[%d,%d][%s,%p,%d:%ld*%d~%s][%d][%d][%s:%s:%p];[%p]---");
        int* ptr20 = *(param0 + 1293);
        if(ptr20 != 0 && *(ptr20 + SOCK_STREAM) > 0) {
            int v2 = 0;
            do {
                int* ptr21 = *(int**)(v2 * 4 + *ptr20);
                ++v2;
                result = sub_5C630(ptr21, param1);
                ptr20 = *(param0 + 1293);
            }
            while(*(ptr20 + SOCK_STREAM) > v2);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/rule.c", 39, "a_rule is null or 0");
}
