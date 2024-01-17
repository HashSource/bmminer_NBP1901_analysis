int sub_41250(int param0, int* param1, int* param2, uint32_t* param3, uint32_t* param4) {
    int* ptr0;
    int v0;
    char __ptr1;
    switch(param0) {
        case 0: {
            v0 = 64;
            *param1 = 24;
            ptr0 = &g44;
            param1 = &g45;
            break;
        }
        case 1: {
            v0 = 64;
            *param1 = 16;
            ptr0 = &g46;
            param1 = &g47;
            break;
        }
        case 2: {
            v0 = 64;
            *param1 = 8;
            ptr0 = &g48;
            param1 = &g49;
            break;
        }
        case 3: {
            *param1 = 0;
            *param2 = 64;
            *param3 = (int*)&g4A;
            *param4 = (int*)&g4B;
            return 0;
        }
        case 4: {
            v0 = 65;
            *param1 = 24;
            ptr0 = &g4C;
            param1 = &g4D;
            break;
        }
        case 5: {
            v0 = 65;
            *param1 = 16;
            ptr0 = &g4E;
            param1 = &g4F;
            break;
        }
        case 6: {
            v0 = 65;
            *param1 = 8;
            ptr0 = &g50;
            param1 = &g51;
            break;
        }
        case 7: {
            *param1 = 0;
            *param2 = 65;
            *param3 = (int*)&g52;
            *param4 = (int*)&g53;
            return 0;
        }
        case 8: {
            v0 = 66;
            *param1 = 24;
            ptr0 = &g54;
            param1 = &g55;
            break;
        }
        case 9: {
            v0 = 66;
            *param1 = 16;
            ptr0 = &g56;
            param1 = &g57;
            break;
        }
        case 10: {
            v0 = 66;
            *param1 = 8;
            ptr0 = &g73;
            param1 = &g74;
            break;
        }
        case 11: {
            *param1 = 0;
            *param2 = 66;
            *param3 = (int*)&g75;
            *param4 = (int*)&g76;
            return 0;
        }
        case 12: {
            v0 = 67;
            *param1 = 24;
            ptr0 = &g77;
            param1 = &g78;
            break;
        }
        case 13: {
            v0 = 67;
            *param1 = 16;
            ptr0 = &g79;
            param1 = &g7A;
            break;
        }
        default: {
            snprintf(&__ptr1, 0x800, "%s: The uart %d is not supported!!!\n", "get_send_address_info", param0);
            sub_2E584(0, &__ptr1, 0);
            return -1;
        }
    }
    *param2 = v0;
    *param3 = ptr0;
    *param4 = param1;
    return 0;
}
