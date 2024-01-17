uint32_t sub_356C4(int param0, int param1) {
    char __ptr1;
    switch(param0) {
        case 0: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:1", param1);
            break;
        }
        case 1: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:2", param1);
            break;
        }
        case 2: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:8", param1);
            break;
        }
        case 3: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:4", param1);
            break;
        }
        case 4: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:5", param1);
            break;
        }
        case 5: {
            gvar_4FCAE8 = 3226194;
            break;
        }
        case 6: {
            gvar_4FCAE8 = 0x323a52;
            break;
        }
        case 7: {
            snprintf((char*)&gvar_4FCAE8, 64, "T:%d", param1);
            break;
        }
        case 8: {
            gvar_4FCAE8 = 3226192;
            break;
        }
        case 9: {
            gvar_4FCAE8 = 0x323a50;
            break;
        }
        case 10: {
            gvar_4FCAE8 = 3226182;
            break;
        }
        case 11: {
            snprintf((char*)&gvar_4FCAE8, 64, "J%d:6", param1);
            break;
        }
        case 12: {
            gvar_4FCAE8 = 3226198;
            break;
        }
        case 13: {
            gvar_4FCAE8 = 3226189;
            break;
        }
        case 14: {
            gvar_4FCAE8 = 3226190;
            break;
        }
        case 15: {
            gvar_4FCAE8 = 0x343a50;
            break;
        }
        case 17: {
            gvar_4FCAE8 = 0x333a52;
            break;
        }
        case 18: {
            gvar_4FCAE8 = 3226179;
            break;
        }
        case 19: {
            gvar_4FCAE8 = 0x323a4e;
            break;
        }
        case 20: {
            gvar_4FCAE8 = 0x303a53;
            break;
        }
        case 21: {
            gvar_4FCAE8 = 0x333a4e;
            break;
        }
        case 22: {
            gvar_4FCAE8 = 3488336;
            break;
        }
        default: {
            __builtin_strcpy((char*)&gvar_4FCAE8, "unknown");
        }
    }
    uint32_t result = sub_36558(1);
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "Sweep error string = %s.\n", &gvar_4FCAE8);
        result = sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
