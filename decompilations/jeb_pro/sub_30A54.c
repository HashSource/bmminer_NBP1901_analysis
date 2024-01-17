int sub_30A54(int param0) {
    char __s;
    snprintf(&__s, 16, "cg@%s", param0);
    return prctl(PR_SET_NAME, &__s);
}
