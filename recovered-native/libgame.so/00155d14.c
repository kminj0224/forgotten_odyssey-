/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155d14  Symbol: endElement */

/* cocos2d::CCDictMaker::endElement(void*, char const*) */

undefined8 __thiscall
cocos2d::CCDictMaker::endElement(CCDictMaker *this,void *param_1,char *param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CCDictMaker *pCStack_20;
  void *pvStack_1c;
  char *pcStack_18;
  
  iVar3 = *(int *)(this + 0x80);
  iVar4 = DAT_00155f0c + 0x155d22;
  iVar5 = 2;
  if (iVar3 != *(int *)(this + 0x70)) {
    if (iVar3 == *(int *)(this + 0x84)) {
      iVar3 = *(int *)(*(int *)(this + 0x8c) + -4) + 0x200;
    }
    iVar5 = *(int *)(iVar3 + -4);
  }
  pCStack_20 = this;
  pvStack_1c = param_1;
  pcStack_18 = param_2;
  FUN_001eed40(&pvStack_1c,param_2,&pCStack_20);
  iVar3 = FUN_001ed39c(&pvStack_1c,DAT_00155f10 + 0x155d56);
  if (iVar3 == 0) {
    pvVar1 = *(void **)(this + 0x80);
    if (pvVar1 == *(void **)(this + 0x84)) {
      operator_delete(pvVar1);
      piVar2 = *(int **)(this + 0x8c) + -1;
      *(int **)(this + 0x8c) = piVar2;
      iVar3 = *piVar2;
      *(int *)(this + 0x84) = iVar3;
      *(int *)(this + 0x88) = iVar3 + 0x200;
      *(int *)(this + 0x80) = iVar3 + 0x1fc;
    }
    else {
      *(int *)(this + 0x80) = (int)pvVar1 + -4;
    }
    pvVar1 = *(void **)(this + 0x24);
    if (pvVar1 == *(void **)(this + 0x28)) {
      operator_delete(pvVar1);
      iVar3 = *(int *)(this + 0x30);
      *(int **)(this + 0x30) = (int *)(iVar3 + -4);
      iVar3 = *(int *)(iVar3 + -4);
      *(int *)(this + 0x28) = iVar3;
      *(int *)(this + 0x2c) = iVar3 + 0x200;
      *(int *)(this + 0x24) = iVar3 + 0x1fc;
    }
    else {
      *(int *)(this + 0x24) = (int)pvVar1 + -4;
    }
    iVar3 = *(int *)(this + 0x24);
    if (iVar3 != *(int *)(this + 0x14)) {
      if (iVar3 == *(int *)(this + 0x28)) {
        iVar3 = *(int *)(*(int *)(this + 0x30) + -4) + 0x200;
      }
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar3 + -4);
    }
  }
  else {
    iVar3 = FUN_001ed39c(&pvStack_1c,DAT_00155f14 + 0x155de8);
    if (iVar3 == 0) {
      pvVar1 = *(void **)(this + 0x80);
      if (pvVar1 == *(void **)(this + 0x84)) {
        operator_delete(pvVar1);
        piVar2 = *(int **)(this + 0x8c) + -1;
        *(int **)(this + 0x8c) = piVar2;
        iVar3 = *piVar2;
        *(int *)(this + 0x84) = iVar3;
        *(int *)(this + 0x88) = iVar3 + 0x200;
        *(int *)(this + 0x80) = iVar3 + 0x1fc;
      }
      else {
        *(int *)(this + 0x80) = (int)pvVar1 + -4;
      }
      pvVar1 = *(void **)(this + 0x58);
      if (pvVar1 == *(void **)(this + 0x5c)) {
        operator_delete(pvVar1);
        iVar3 = *(int *)(this + 100);
        *(int **)(this + 100) = (int *)(iVar3 + -4);
        iVar3 = *(int *)(iVar3 + -4);
        *(int *)(this + 0x5c) = iVar3;
        *(int *)(this + 0x60) = iVar3 + 0x200;
        *(int *)(this + 0x58) = iVar3 + 0x1fc;
      }
      else {
        *(int *)(this + 0x58) = (int)pvVar1 + -4;
      }
      iVar3 = *(int *)(this + 0x58);
      if (iVar3 != *(int *)(this + 0x48)) {
        if (iVar3 == *(int *)(this + 0x5c)) {
          iVar3 = *(int *)(*(int *)(this + 100) + -4) + 0x200;
        }
        *(undefined4 *)(this + 0x3c) = *(undefined4 *)(iVar3 + -4);
      }
    }
    else {
      iVar3 = FUN_001ed39c(&pvStack_1c,DAT_00155f18 + 0x155e78);
      if (iVar3 == 0) {
        piVar2 = (int *)operator_new(0x18);
        CCObject::CCObject((CCObject *)piVar2);
        iVar3 = DAT_00155f20 + 0x155e98;
        *piVar2 = *(int *)(iVar4 + DAT_00155f1c) + 8;
        piVar2[5] = *(int *)(iVar4 + DAT_00155f24) + 0xc;
      }
      else {
        iVar3 = FUN_001ed39c(&pvStack_1c,DAT_00155f28 + 0x155eac);
        if (iVar3 != 0) goto LAB_00155efe;
        piVar2 = (int *)operator_new(0x18);
        CCObject::CCObject((CCObject *)piVar2);
        iVar3 = DAT_00155f2c + 0x155ecc;
        *piVar2 = *(int *)(iVar4 + DAT_00155f1c) + 8;
        piVar2[5] = *(int *)(iVar4 + DAT_00155f24) + 0xc;
      }
      FUN_001ed9dc(piVar2 + 5,iVar3);
      if (iVar5 == 6) {
        CCMutableArray<cocos2d::CCObject*>::addObject
                  (*(CCMutableArray<cocos2d::CCObject*> **)(this + 0x3c),(CCObject *)piVar2);
      }
      else if (iVar5 == 2) {
        CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
        ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                      **)(this + 8),(CCObject *)piVar2,(basic_string *)(this + 0x34));
      }
      CCObject::release((CCObject *)piVar2);
    }
  }
LAB_00155efe:
  *(undefined4 *)(this + 0x38) = 0;
  FUN_001ed6b8(&pvStack_1c);
  return CONCAT44(pvStack_1c,pCStack_20);
}


