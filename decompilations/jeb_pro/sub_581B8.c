int* sub_581B8(uint32_t* param0, int param1) {
    int* ptr0 = sub_5DA58(*param0, param1);
    if(ptr0 != 0) {
        return (int*)((char*)ptr0 + 1025);
    }
    sub_5DF98(&g2, "src/mdc.c", 121, "zc_hashtable_get fail");
    return NULL;
}
