int sub_4DE1C(int param0) {
    if((param0 & 0x80) == 0) {
        return SOCK_STREAM;
    }
    if((param0 ^ 0x80) > 65) {
        if((uint8_t)param0 + 62 > 29) {
            if((uint8_t)param0 + 32 > 15) {
                return (uint8_t)param0 + 16 > 4 ? 0: 4;
            }
            return 3;
        }
        return 2;
    }
    return 0;
}
