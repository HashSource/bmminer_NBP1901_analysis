// Stale decompilation - Refresh this view to re-decompile this code
void* sub_288C4(char* __filename) {
    char v0;
    char __s;
    if(gvar_80AC0 == 0) {
        __strdup();
        gvar_80AC0 = (uint32_t)__filename;
    }
    uint32_t v1 = gvar_80AC4 + SOCK_STREAM;
    ++gvar_80AC4;
    if((int)v1 > 10) {
        return "Too many levels of JSON includes (limit 10) or a loop";
    }
    char* ptr0 = sub_4D6E4(__filename, 0, &v0);
    if(ptr0 == 0 || *(int*)&ptr0[0] != 0) {
        size_t v2 = strlen(__filename);
        size_t v3 = strlen(&__s);
        size_t __maxlen = v3 + v2 + 35;
        void* __s1 = sub_2F408(__maxlen, "bmminer.c", "load_config", 902);
        snprintf((char*)__s1, __maxlen, "JSON decode of file \'%s\' failed\n %s", __filename, &__s);
        return __s1;
    }
    return (void*)sub_289B8((int)ptr0, SOCK_STREAM);
}
