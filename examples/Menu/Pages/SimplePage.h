#ifndef _SIMPLEPAGE_H_
#define _SIMPLEPAGE_H_

#include "Menu/Menus.h"

class SimplePage : public Page {
    private:
    Text uiSymbol_1 = { "0" };

    public:
    UIObject* localObjects[MAX_OBJECTS_ON_PAGE] = {
        new UIButton("X+", { 0, 0, 65, 65 }, { 25, 25 }, "↑", BLACK, WHITE_L_80, WHITE_L_5),
        new UITextPanel("X+", { 0, 75, 65, 65 }, { 25, 25 }, uiSymbol_1, BLACK, WHITE_L_80),
        new UIButton("X+", { 0, 145, 65, 65 }, { 25, 25 }, "↓", BLACK, WHITE_L_80, WHITE_L_5),
        NULL,
    };

    SimplePage(char* getName) {
        Name = getName;

        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            UIObjects[i] = localObjects[i];
        }
    }

    void Awake() override {
        
    }

    void Start() override {
        RepaintAll();
    }

    void Update() override {
        for (int i = 0; i < MAX_OBJECTS_ON_PAGE; i++) {
            if (UIObjects[i] == NULL) break;
            UIObjects[i]->Update();
        }
    }
};

#endif