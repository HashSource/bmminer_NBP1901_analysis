int sub_4C23C(int* param0) {
    char __buf;
    ssize_t v0 = read(*param0, &__buf, 1);
    return v0 == SOCK_STREAM ? __buf: -1;
}
