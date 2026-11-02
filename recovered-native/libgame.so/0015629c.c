/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015629c  Symbol: startElement */

/* cocos2d::CCDictMaker::startElement(void*, char const*, char const**) */

undefined8 cocos2d::CCDictMaker::startElement(void *param_1,char *param_2,char **param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *__s;
  void *pvStack_20;
  char *pcStack_1c;
  char **ppcStack_18;
  
  pvStack_20 = param_1;
  pcStack_1c = param_2;
  ppcStack_18 = param_3;
  FUN_001eed40(&pcStack_1c,param_3,&pvStack_20);
  iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564e4 + 0x1562b2);
  if (iVar1 == 0) {
    piVar2 = (int *)operator_new(0x34);
    CCObject::CCObject((CCObject *)piVar2);
    __s = piVar2 + 6;
    *piVar2 = *(int *)(DAT_001564e8 + 0x1562ce) + 8;
    memset(__s,0,0x10);
    piVar2[10] = 0;
    piVar2[8] = (int)__s;
    piVar2[9] = (int)__s;
    piVar2[0xc] = 0;
    *(CCObject *)(piVar2 + 0xb) = (CCObject)0x0;
    *(int **)((int)param_1 + 8) = piVar2;
    if (*(int *)((int)param_1 + 4) == 0) {
      *(int **)((int)param_1 + 4) = piVar2;
      CCObject::retain((CCObject *)piVar2);
    }
    *(undefined4 *)((int)param_1 + 0x38) = 2;
    iVar1 = *(int *)((int)param_1 + 0x80);
    if (iVar1 != *(int *)((int)param_1 + 0x70)) {
      if (iVar1 == *(int *)((int)param_1 + 0x84)) {
        iVar1 = *(int *)(*(int *)((int)param_1 + 0x8c) + -4) + 0x200;
      }
      if (*(int *)(iVar1 + -4) == 6) {
        CCMutableArray<cocos2d::CCObject*>::addObject
                  (*(CCMutableArray<cocos2d::CCObject*> **)((int)param_1 + 0x3c),
                   *(CCObject **)((int)param_1 + 8));
      }
      else if (*(int *)(iVar1 + -4) == 2) {
        iVar1 = *(int *)((int)param_1 + 0x24);
        if (iVar1 == *(int *)((int)param_1 + 0x28)) {
          iVar1 = *(int *)(*(int *)((int)param_1 + 0x30) + -4) + 0x200;
        }
        CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
        ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                      **)(iVar1 + -4),*(CCObject **)((int)param_1 + 8),
                    (basic_string *)((int)param_1 + 0x34));
      }
    }
    CCObject::release(*(CCObject **)((int)param_1 + 8));
    puVar3 = *(undefined4 **)((int)param_1 + 0x80);
    if (puVar3 == (undefined4 *)(*(int *)((int)param_1 + 0x88) + -4)) {
      std::deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>>::_M_push_back_aux
                ((deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> *)
                 ((int)param_1 + 0x68),(CCSAXState *)((int)param_1 + 0x38));
    }
    else {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)((int)param_1 + 0x38);
      }
      *(int *)((int)param_1 + 0x80) = *(int *)((int)param_1 + 0x80) + 4;
    }
    puVar3 = *(undefined4 **)((int)param_1 + 0x24);
    if (puVar3 == (undefined4 *)(*(int *)((int)param_1 + 0x2c) + -4)) {
      std::
      deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
      ::_M_push_back_aux((deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
                          *)((int)param_1 + 0xc),(CCMutableDictionary **)((int)param_1 + 8));
    }
    else {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)((int)param_1 + 8);
      }
      *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 4;
    }
    goto LAB_001564dc;
  }
  iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564ec + 0x1563b8);
  uVar4 = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564f0 + 0x1563ca);
    uVar4 = 3;
    if (iVar1 != 0) {
      iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564f4 + 0x1563dc);
      uVar4 = 4;
      if (iVar1 != 0) {
        iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564f8 + 0x1563ec);
        uVar4 = 5;
        if (iVar1 != 0) {
          iVar1 = FUN_001ed39c(&pcStack_1c,DAT_001564fc + 0x1563fc);
          if (iVar1 == 0) {
            *(undefined4 *)((int)param_1 + 0x38) = 6;
            piVar2 = (int *)operator_new(0x20);
            CCObject::CCObject((CCObject *)piVar2);
            iVar1 = DAT_00156500;
            piVar2[5] = 0;
            piVar2[6] = 0;
            iVar1 = *(int *)(iVar1 + 0x15641c);
            piVar2[7] = 0;
            *piVar2 = iVar1 + 8;
            *(int **)((int)param_1 + 0x3c) = piVar2;
            iVar1 = *(int *)((int)param_1 + 0x80);
            if (iVar1 == *(int *)((int)param_1 + 0x70)) {
LAB_0015644e:
              CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
              ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                            **)((int)param_1 + 8),(CCObject *)piVar2,
                          (basic_string *)((int)param_1 + 0x34));
            }
            else {
              if (iVar1 == *(int *)((int)param_1 + 0x84)) {
                iVar1 = *(int *)(*(int *)((int)param_1 + 0x8c) + -4) + 0x200;
              }
              if (*(int *)(iVar1 + -4) == 2) goto LAB_0015644e;
              if (*(int *)(iVar1 + -4) == 6) {
                iVar1 = *(int *)((int)param_1 + 0x58);
                if (iVar1 == *(int *)((int)param_1 + 0x5c)) {
                  iVar1 = *(int *)(*(int *)((int)param_1 + 100) + -4) + 0x200;
                }
                CCMutableArray<cocos2d::CCObject*>::addObject
                          (*(CCMutableArray<cocos2d::CCObject*> **)(iVar1 + -4),(CCObject *)piVar2);
              }
            }
            CCObject::release(*(CCObject **)((int)param_1 + 0x3c));
            puVar3 = *(undefined4 **)((int)param_1 + 0x80);
            if (puVar3 == (undefined4 *)(*(int *)((int)param_1 + 0x88) + -4)) {
              std::deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>>::_M_push_back_aux
                        ((deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> *)
                         ((int)param_1 + 0x68),(CCSAXState *)((int)param_1 + 0x38));
            }
            else {
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *(undefined4 *)((int)param_1 + 0x38);
              }
              *(int *)((int)param_1 + 0x80) = *(int *)((int)param_1 + 0x80) + 4;
            }
            puVar3 = *(undefined4 **)((int)param_1 + 0x58);
            if (puVar3 == (undefined4 *)(*(int *)((int)param_1 + 0x60) + -4)) {
              std::
              deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
              ::_M_push_back_aux((deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
                                  *)((int)param_1 + 0x40),(CCMutableArray **)((int)param_1 + 0x3c));
            }
            else {
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *(undefined4 *)((int)param_1 + 0x3c);
              }
              *(int *)((int)param_1 + 0x58) = *(int *)((int)param_1 + 0x58) + 4;
            }
            goto LAB_001564dc;
          }
          uVar4 = 0;
        }
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x38) = uVar4;
LAB_001564dc:
  FUN_001ed6b8(&pcStack_1c);
  return CONCAT44(pcStack_1c,pvStack_20);
}


