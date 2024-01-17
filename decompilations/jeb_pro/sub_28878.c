void sub_28878(int param0, int param1, size_t __n) {
    sigaction(SIGTERM, &g592464, NULL);
    sigaction(SIGINT, &g594524, NULL);
    int v0 = sigaction(SIGABRT, &g58E35C, NULL);
    sub_31CAC(v0, param1, __n);
    /*NO_RETURN*/ exit(0);
}
