__off64_t →lseek64(void __fd, __off64_t __offset, int __whence) {
    sub_11E90();
    return (uint64_t)R0 | ((uint64_t)R1 << 32);
}
