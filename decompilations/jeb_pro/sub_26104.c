time_t sub_26104() {
    int __info;
    int v0 = sysinfo(&__info);
    if(v0 != 0) {
        return sub_26094();
    }
    return __info;
}
