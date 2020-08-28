#ifndef _MENU_ABSTRACT_H_
#define _MENU_ABSTRACT_H_

#include "Menu/Menus.h"

class Page {
    public:
    char* Name;

    char* LastMenuName;

    UIObject* UIObjects[MAX_OBJECTS_ON_PAGE];

    virtual void Awake();
    virtual void Start();
    virtual void Update();
    
    void RepaintByIndex(int index) {
        if (UIObjects[index] == NULL) return;
        UIObjects[index]->Repaint();
    }

    void RepaintAll() {
        GLCD.fillScr(BACKGDOUND);

        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            if (UIObjects[i] == NULL) break;
            UIObjects[i]->Repaint();
        }
    }
};

#endif