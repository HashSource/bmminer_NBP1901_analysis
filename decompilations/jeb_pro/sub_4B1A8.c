int sub_4B1A8(int* param0, int param1) {
    char v0;
    int result = sub_4D954(&v0);
    if(result != 0) {
        return 0;
    }
    int v1 = sub_4B130(param0, &sub_4A4E8, (int)&v0, param1);
    if(v1 == 0) {
        int __src = sub_4D9C8((int*)&v0);
        result = sub_4D8FC((char*)__src);
    }
    sub_4D988(&v0);
    return result;
}
