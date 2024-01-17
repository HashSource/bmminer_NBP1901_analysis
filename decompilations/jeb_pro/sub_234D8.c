int sub_234D8(char* __s, size_t __maxlen, int param2, int param3) {
    int v0;
    uint32_t v1 = sub_36548();
    if(v1 != 0) {
        if(v1 != SOCK_STREAM) {
            snprintf(__s, __maxlen, "searching", param3, v0);
            return 0;
        }
        int v2 = sub_359EC();
        snprintf(__s, __maxlen, "%s:%s", "searchfailed", v2);
        return 0;
    }
    snprintf(__s, __maxlen, "\n", param2, v0);
    return 0;
}
