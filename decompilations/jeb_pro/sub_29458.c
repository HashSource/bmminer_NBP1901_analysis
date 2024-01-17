void* sub_29458() {
    void* __dest = sub_2F408(0x1000, "bmminer.c", "load_default_config", 950);
    gvar_80AC0 = (uint32_t)__dest;
    sub_2935C((char*)__dest);
    int v0 = access(gvar_80AC0, 4);
    void* __filename = (void*)gvar_80AC0;
    if(v0 != 0) {
        free(__filename);
        gvar_80AC0 = 0;
        return __filename;
    }
    return sub_288C4((char*)__filename);
}
