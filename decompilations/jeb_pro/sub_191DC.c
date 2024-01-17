int sub_191DC(int param0) {
    int v0 = sub_4637C(param0);
    return ((v0 >>> 7) & SOCK_STREAM ? 24: (v0 >>> 6) & SOCK_STREAM ? 25: (v0 >>> 5) & SOCK_STREAM ? 26: (v0 >>> 4) & SOCK_STREAM ? 27: (v0 >>> 3) & SOCK_STREAM ? 28: (v0 >>> 2) & SOCK_STREAM ? 29: (v0 >>> SOCK_STREAM) & SOCK_STREAM ? 30: v0 & SOCK_STREAM ? 31: 32) >>> 5;
}
