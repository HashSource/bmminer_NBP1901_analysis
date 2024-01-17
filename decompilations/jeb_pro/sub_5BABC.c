int sub_5BABC(int* param0, int* param1) {
    if((uint32_t)*(char*)((char*)param0 + 0x1001) - 33 <= 28) {
        jump *(int*)(((uint32_t)*(char*)((char*)param0 + 0x1001) - 33) * 4 + (int)&gvar_5BAD4);
    }
    return 0;
}
