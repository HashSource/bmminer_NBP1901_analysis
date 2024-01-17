int sub_51908(int param0, uint8_t param1) {
    return sub_4FA10(param0, SOCK_STREAM, 0, 60, ((param1 * 4) & 0xffff7fff) | 0x80000000);
}
