void* sub_3D2B4(char* __format, char* __s1) {
    size_t v0 = strlen(__format);
    size_t v1 = strlen(__s1);
    void* __s2 = malloc(v1 + v0);
    sprintf((char*)__s2, __format);
    return __s2;
}
