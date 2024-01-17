int sub_517BC(int param0, int param1, uint16_t param2) {
    if(param1 != 0) {
        param2 = 0xff;
    }
    return sub_4FA10(param0, SOCK_STREAM, 0, 32, param1 == 0 ? (int)(uint16_t)param1: param2);
}
