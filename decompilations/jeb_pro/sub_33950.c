int sub_33950() {
    int v0 = sub_3388C();
    sub_1E970();
    sub_304D4(200);
    sub_1ED08();
    sub_304D4(10);
    sub_1EF94(0xFF, (int)(uint8_t)v0);
    sub_304D4(10);
    sub_1EFE0(0xFF, (int)(uint8_t)(v0 >>> 8), (int)(uint8_t)(v0 >>> 16), 0);
    sub_304D4(10);
    sub_1EAD4(0xFF);
    sub_304D4(10);
    sub_1EA18(0xFF, 0, SOCK_STREAM, 3);
    return sub_1EA84(0xFF);
}
