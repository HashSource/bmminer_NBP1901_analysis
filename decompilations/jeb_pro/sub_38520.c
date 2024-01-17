int sub_38520(int param0) {
    if((uint32_t)(param0 - 48) > 9) {
        switch(param0 & 0xdf) {
            case 65: {
                return 10;
            }
            case 66: {
                return 11;
            }
            case 67: {
                return 12;
            }
            case 68: {
                return 13;
            }
            case 69: {
                return 14;
            }
            case 70: {
                return 15;
            }
            default: {
                return sub_384C0(param0);
            }
        }
    }
    return param0 & 0xf;
}
