int sub_312A8(int param0, char* param1) {
    char v0;
    char v1;
    switch(param0) {
        case 1: {
            return SOCK_STREAM;
        }
        case 2: {
            if((char*)((int)param1 & 0x80) != 128) {
                param0 = SOCK_STREAM;
            }
            return param0;
        }
        case 4: {
            param1 = (int)param1 & 0xc0;
            if(param1 == 64) {
                return 2;
            }
            else if(param1 == 192) {
                return 4;
            }
            else if(param1 != 128) {
                return SOCK_STREAM;
            }
            return 3;
        }
        case 8: {
            param1 = (int)param1 & 0xe0;
            v1 = param1 == 128;
            v0 = (uint32_t)param1 >= 128;
            if(param1 == 128) {
                return 5;
            }
            if(v0 == 0 || v1 != 0) {
                if(param1 == 64) {
                    return 3;
                }
                if(param1 == 32) {
                    return 2;
                }
                else if(param1 != 96) {
                    return SOCK_STREAM;
                }
                return 4;
            }
            if(param1 == 192) {
                return 7;
            }
            else if(param1 == 224) {
                return 8;
            }
            if(param1 == 160) {
                return 6;
            }
            return SOCK_STREAM;
        }
        case 16: {
            param1 = (int)param1 & 0xf0;
            v1 = param1 == 128;
            v0 = (uint32_t)param1 >= 128;
            if(param1 == 128) {
                return 9;
            }
            else if(v0 != 0 && v1 == 0) {
                v1 = param1 == 192;
                v0 = (uint32_t)param1 >= 192;
                if(param1 == 192) {
                    return 13;
                }
                if((v0 != 0 && v1 == 0)) {
                    if(param1 == 224) {
                        return 15;
                    }
                    else if(param1 == 240) {
                        return 16;
                    }
                    if(param1 == 208) {
                        return 14;
                    }
                }
                else if(param1 == 144) {
                    return 10;
                }
                else if(param1 == 160) {
                    return 11;
                }
                else if(param1 == 176) {
                    return 12;
                }
                return SOCK_STREAM;
            }
            v1 = param1 == 64;
            v0 = (uint32_t)param1 >= 64;
            if(param1 == 64) {
                return 5;
            }
            if(v0 == 0 || v1 != 0) {
                if(param1 == 32) {
                    return 3;
                }
                if(param1 == 48) {
                    return 4;
                }
                if(param1 == 16) {
                    return 2;
                }
                return SOCK_STREAM;
            }
            if(param1 == 96) {
                return 7;
            }
            if(param1 == 112) {
                return 8;
            }
            if(param1 == 80) {
                return 6;
            }
            return SOCK_STREAM;
        }
        case 32: {
            param1 = (uint32_t)(((uint8_t)param1 & 0xf8) - 8);
            if((uint32_t)param1 <= 240) {
                return (int)*(param1 + 0x65bb4);
            }
            return SOCK_STREAM;
        }
        case 64: {
            param1 = (uint32_t)(((uint8_t)param1 & 0xfc) - 4);
            if((uint32_t)param1 <= 248) {
                return (int)*(param1 + 416936);
            }
            return SOCK_STREAM;
        }
        default: {
            return 0;
        }
    }
}
