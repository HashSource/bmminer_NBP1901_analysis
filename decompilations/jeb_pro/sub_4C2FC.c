void sub_4C2FC(int param0, int param1) {
    if(param1 + 2 <= SOCK_STREAM) {
        return;
    }
    int v0 = param0;
    --*(int*)(param0 + 36);
    if(param1 == 10) {
        int v1 = *(int*)(param0 + 32);
        --*(int*)(param0 + 24);
        *(int*)(param0 + 28) = v1;
    }
    else {
        param0 = sub_4DE1C((int)(uint8_t)param1);
        if(param0 != 0) {
            --*(int*)(v0 + 28);
        }
    }
    int v2 = *(int*)(v0 + 16);
    if(v2 != 0) {
        *(int*)(v0 + 16) = v2 - SOCK_STREAM;
        if((uint32_t)*(char*)(v2 + v0 + 7) == param1) {
            return;
        }
        /*NO_RETURN*/ __assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c", 240, "stream_unget");
    }
    /*NO_RETURN*/ __assert_fail("stream->buffer_pos > 0", "load.c", 0xee, "stream_unget");
}
