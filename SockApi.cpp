//
// Created by leon on 16-12-19.
//
#include <netdb.h>
#include <cstdio>
#include "SockApi.h"

static void printAllProtos() {
    while (true) {
        protoent *ent = getprotoent();
        if (!ent) {
            break;
        }
        if (ent->p_aliases != NULL) {
            printf("proto ent name:%s alias:%s number:%d\n", ent->p_name, *(ent->p_aliases), ent->p_proto);
        } else {
            printf("proto ent name:%s alias:(NULL) number:%d\n", ent->p_name, ent->p_proto);
        }
    }
    endprotoent();
}

void testSockOptions() {
    printAllProtos();
}

