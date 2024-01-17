int sub_3DDD0(char* __format, int param1, int param2, int param3) {
    int __arg;
    vfprintf((FILE*)stderr, __format, &__arg);
    return fputc(10, stderr);
}
