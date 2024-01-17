void sub_43594(int param0, uint32_t* param1) {
    int* ptr0;
    uint32_t* ptr1 = param1;
loc_435A8:
    while(param0 + 4 != ptr1) {
    loc_435C4:
        do {
            param1 = *ptr1;
            if(*(ptr1 + 3) == SOCK_STREAM) {
                if((param0 + 4 != param1 && *(param1 + 3) != 0)) {
                    /*NO_RETURN*/ __assert_fail("debug_node_color(pTree,n->left) == clib_black", "3rdparty/cstl/src/c_rb.c", 495, "debug_verify_property_4");
                }
                uint32_t* ptr2 = *(ptr1 + SOCK_STREAM);
                if(param0 + 4 != ptr2) {
                    if(*(ptr2 + 3) == 0) {
                        ptr0 = *(ptr1 + 2);
                        if(param0 + 4 == ptr0) {
                            ptr1 = ptr2;
                            sub_43594(param0, (int)param1);
                            goto loc_435C4;
                        }
                        else {
                            goto loc_43614;
                        }
                    }
                    /*NO_RETURN*/ __assert_fail("debug_node_color(pTree,n->right) == clib_black", "3rdparty/cstl/src/c_rb.c", 496, "debug_verify_property_4");
                }
                ptr0 = *(ptr1 + 2);
                if(param0 + 4 != ptr0) {
                    goto loc_43614;
                }
                ptr1 = param1;
                continue loc_435A8;
            loc_43614:
                if(*(ptr0 + 3) != 0) {
                    /*NO_RETURN*/ __assert_fail("debug_node_color(pTree,n->parent) == clib_black", "3rdparty/cstl/src/c_rb.c", 0x1f1, "debug_verify_property_4");
                }
                ptr1 = ptr2;
            }
            else {
                ptr1 = *(ptr1 + SOCK_STREAM);
            }
            sub_43594(param0, (int)param1);
        }
        while(param0 + 4 != ptr1);
        return;
    }
}
