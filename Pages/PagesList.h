#ifndef _PAGES_LIST_H_
#define _PAGES_LIST_H_

#include "Page.h"

Page* PAGES_LIST[MAX_PAGES] = {
    new Empty("Empty"),
    NULL,
};

Page* currentPage = NULL;

#endif