void* sub_3DE58(char* __s) {
    size_t v0 = strlen(__s);
    void* __s1 = malloc(v0 + 22);
    sprintf((char*)__s1, "Invalid argument \'%s\'", __s);
    return __s1;
}
