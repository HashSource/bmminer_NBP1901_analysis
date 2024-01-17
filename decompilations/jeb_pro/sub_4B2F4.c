int sub_4B2F4(char* param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int result;
    int v3 = param2 - 0x21524111 + param1;
    if((int*)((int)param0 & 0x3) == 0) {
        if(param1 > 12) {
            char* ptr0 = param0 + 12;
            result = v3;
            v2 = v3;
            do {
                param1 -= 12;
                int v4 = *(int*)(ptr0 - 12);
                int v5 = *(int*)(ptr0 - 8);
                param0 = ptr0;
                int v6 = *(int*)(ptr0 - 4) + result;
                ptr0 += 12;
                int v7 = v5 + v2;
                int v8 = (v4 - v6 + v3) ^ (__ror__(v6, 28));
                int v9 = v6 + v7;
                int v10 = v8 + v9;
                int v11 = (v7 - v8) ^ (__ror__(v8, 26));
                int v12 = v11 + v10;
                int v13 = (v9 - v11) ^ (__ror__(v11, 24));
                int v14 = v13 + v12;
                int v15 = (v10 - v13) ^ (__ror__(v13, 16));
                v3 = v15 + v14;
                param2 = (v12 - v15) ^ (__ror__(v15, 13));
                v2 = param2 + v3;
                result = (v14 - param2) ^ (__ror__(param2, 28));
            }
            while(param1 > 12);
        }
        else {
            result = v3;
            v2 = v3;
        }
        switch(param1) {
            case 1: {
                goto loc_4B640;
            }
            case 2: {
                v1 = (uint32_t)*(short*)param0 + v3;
                goto loc_4B648;
            }
            case 3: {
                v1 = (uint32_t)(*(int*)param0 & 0xffffff) + v3;
                goto loc_4B648;
            }
            case 4: {
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 5: {
                v2 += (uint32_t)*(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 6: {
                v2 += (uint32_t)*(short*)(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 7: {
                v1 = *(int*)param0 + v3;
                v2 += (uint32_t)(*(int*)(param0 + 4) & 0xffffff);
                goto loc_4B648;
            }
            case 8: {
                v2 += *(int*)(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 9: {
                v0 = (uint32_t)*(param0 + 8);
                result += v0;
                v2 += *(int*)(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 10: {
                v0 = (uint32_t)*(short*)(param0 + 8);
                result += v0;
                v2 += *(int*)(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 11: {
                result += (uint32_t)(*(int*)(param0 + 8) & 0xffffff);
                v2 += *(int*)(param0 + 4);
                v1 = *(int*)param0 + v3;
                goto loc_4B648;
            }
            case 12: {
                break;
            }
            default: {
                return result;
            }
        }
        v0 = *(int*)(param0 + 8);
        result += v0;
        v2 += *(int*)(param0 + 4);
        v1 = *(int*)param0 + v3;
        goto loc_4B648;
    }
    else {
        if((int*)((int)param0 & SOCK_STREAM) == 0) {
            if(param1 > 12) {
                char* ptr1 = param0 + 12;
                result = v3;
                v2 = v3;
                do {
                    int v16 = (uint32_t)*(short*)(ptr1 - 2);
                    param1 -= 12;
                    int v17 = (uint32_t)*(short*)(ptr1 - 4);
                    int v18 = (uint32_t)*(short*)(ptr1 - 10);
                    param0 = ptr1;
                    int v19 = (uint32_t)*(short*)(ptr1 - 12);
                    ptr1 += 12;
                    int v20 = v16 * &ELFHeader + result + v17;
                    int v21 = (v18 * &ELFHeader + v19 - v20 + v3) ^ (__ror__(v20, 28));
                    int v22 = (uint32_t)*(short*)(ptr1 - 18) * &ELFHeader + (uint32_t)*(short*)(ptr1 - 20) + v2;
                    int v23 = v20 + v22;
                    int v24 = (v22 - v21) ^ (__ror__(v21, 26));
                    int v25 = v21 + v23;
                    int v26 = v24 + v25;
                    int v27 = (v23 - v24) ^ (__ror__(v24, 24));
                    int v28 = v27 + v26;
                    int v29 = (v25 - v27) ^ (__ror__(v27, 16));
                    v3 = v29 + v28;
                    param2 = (v26 - v29) ^ (__ror__(v29, 13));
                    v2 = param2 + v3;
                    result = (v28 - param2) ^ (__ror__(param2, 28));
                }
                while(param1 > 12);
            }
            else {
                result = v3;
                v2 = v3;
            }
            switch(param1) {
                case 1: {
                    goto loc_4B640;
                }
                case 2: {
                    v1 = (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 3: {
                    v3 += (uint32_t)*(param0 + 2) * &ELFHeader;
                    v1 = (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 4: {
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 5: {
                    v2 += (uint32_t)*(param0 + 4);
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 6: {
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    v2 += (uint32_t)*(short*)(param0 + 4);
                    goto loc_4B648;
                }
                case 7: {
                    v2 += (uint32_t)*(param0 + 6) * &ELFHeader;
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    v2 += (uint32_t)*(short*)(param0 + 4);
                    goto loc_4B648;
                }
                case 8: {
                    v2 += (uint32_t)*(short*)(param0 + 6) * &ELFHeader + (uint32_t)*(short*)(param0 + 4);
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 9: {
                    result += (uint32_t)*(param0 + 8);
                    v2 += (uint32_t)*(short*)(param0 + 6) * &ELFHeader + (uint32_t)*(short*)(param0 + 4);
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    goto loc_4B648;
                }
                case 10: {
                    v2 += (uint32_t)*(short*)(param0 + 6) * &ELFHeader + (uint32_t)*(short*)(param0 + 4);
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    result += (uint32_t)*(short*)(param0 + 8);
                    goto loc_4B648;
                }
                case 11: {
                    result += (uint32_t)*(param0 + 10) * &ELFHeader;
                    v2 += (uint32_t)*(short*)(param0 + 6) * &ELFHeader + (uint32_t)*(short*)(param0 + 4);
                    v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
                    result += (uint32_t)*(short*)(param0 + 8);
                    goto loc_4B648;
                }
                case 12: {
                    break;
                }
                default: {
                    return result;
                }
            }
            result += (uint32_t)*(short*)(param0 + 10) * &ELFHeader + (uint32_t)*(short*)(param0 + 8);
            v2 += (uint32_t)*(short*)(param0 + 6) * &ELFHeader + (uint32_t)*(short*)(param0 + 4);
            v1 = (uint32_t)*(short*)(param0 + 2) * &ELFHeader + (uint32_t)*(short*)param0 + v3;
            goto loc_4B648;
        }
        if(param1 <= 12) {
            result = v3;
            v2 = v3;
        }
        else {
            char* ptr2 = param0 + 12;
            result = v3;
            v2 = v3;
            do {
                int v30 = (uint32_t)*(ptr2 - 2);
                param1 -= 12;
                int v31 = (uint32_t)*(ptr2 - 10);
                int v32 = (uint32_t)*(ptr2 - 3);
                param0 = ptr2;
                int v33 = (uint32_t)*(ptr2 - 11);
                ptr2 += 12;
                int v34 = (uint32_t)*(ptr2 - 13) * 0x1000000 + v30 * &ELFHeader + (v32 * 0x100 + (uint32_t)*(ptr2 - 16)) + result;
                int v35 = ((uint32_t)*(ptr2 - 21) * 0x1000000 + v31 * &ELFHeader + (v33 * 0x100 + (uint32_t)*(ptr2 - 24)) - v34 + v3) ^ (__ror__(v34, 28));
                int v36 = (uint32_t)*(ptr2 - 17) * 0x1000000 + (uint32_t)*(ptr2 - 18) * &ELFHeader + ((uint32_t)*(ptr2 - 19) * 0x100 + (uint32_t)*(ptr2 - 20)) + v2;
                int v37 = v34 + v36;
                int v38 = (v36 - v35) ^ (__ror__(v35, 26));
                int v39 = v35 + v37;
                int v40 = v38 + v39;
                int v41 = (v37 - v38) ^ (__ror__(v38, 24));
                int v42 = v41 + v40;
                int v43 = (v39 - v41) ^ (__ror__(v41, 16));
                v3 = v43 + v42;
                param2 = (v40 - v43) ^ (__ror__(v43, 13));
                v2 = param2 + v3;
                result = (v42 - param2) ^ (__ror__(param2, 28));
            }
            while(param1 > 12);
        }
        switch(param1) {
            case 1: {
                goto loc_4B640;
            }
            case 2: {
                goto loc_4B638;
            }
            case 3: {
                goto loc_4B630;
            }
            case 4: {
                goto loc_4B628;
            }
            case 5: {
                goto loc_4B620;
            }
            case 6: {
                goto loc_4B618;
            }
            case 7: {
                goto loc_4B610;
            }
            case 8: {
                goto loc_4B608;
            }
            case 9: {
                goto loc_4B600;
            }
            case 10: {
                goto loc_4B5F8;
            }
            case 11: {
                goto loc_4B5F0;
            }
            case 12: {
                break;
            }
            default: {
                return result;
            }
        }
        result += (uint32_t)*(param0 + 11) * 0x1000000;
    loc_4B5F0:
        result += (uint32_t)*(param0 + 10) * &ELFHeader;
    loc_4B5F8:
        result += (uint32_t)*(param0 + 9) * 0x100;
    loc_4B600:
        result += (uint32_t)*(param0 + 8);
    loc_4B608:
        v2 += (uint32_t)*(param0 + 7) * 0x1000000;
    loc_4B610:
        v2 += (uint32_t)*(param0 + 6) * &ELFHeader;
    loc_4B618:
        v2 += (uint32_t)*(param0 + 5) * 0x100;
    loc_4B620:
        v2 += (uint32_t)*(param0 + 4);
    loc_4B628:
        v3 += (uint32_t)*(param0 + 3) * 0x1000000;
    loc_4B630:
        v3 += (uint32_t)*(param0 + 2) * &ELFHeader;
    loc_4B638:
        v3 += (uint32_t)*(param0 + SOCK_STREAM) * 0x100;
    loc_4B640:
        v1 = (uint32_t)*param0 + v3;
    loc_4B648:
        int v44 = (result ^ v2) - __ror__(v2, 18);
        int v45 = (v44 ^ v1) - __ror__(v44, 21);
        int v46 = (v45 ^ v2) - __ror__(v45, 7);
        int v47 = (v44 ^ v46) - __ror__(v46, 16);
        int v48 = (v47 ^ v45) - __ror__(v47, 28);
        v3 = (v48 ^ v46) - __ror__(v48, 18);
        result = (v47 ^ v3) - __ror__(v3, 8);
    }
    return result;
}
