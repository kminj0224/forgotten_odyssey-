/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155c3c  Symbol: textHandler */

/* cocos2d::CCDictMaker::textHandler(void*, char const*, int) */

void __thiscall
cocos2d::CCDictMaker::textHandler(CCDictMaker *this,void *param_1,char *param_2,int param_3)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  if (*(int *)(this + 0x38) != 0) {
    iVar1 = *(int *)(this + 0x80);
    iVar3 = 2;
    if (iVar1 != *(int *)(this + 0x70)) {
      if (iVar1 == *(int *)(this + 0x84)) {
        iVar1 = *(int *)(*(int *)(this + 0x8c) + -4) + 0x200;
      }
      iVar3 = *(int *)(iVar1 + -4);
    }
    this_00 = (int *)operator_new(0x18);
    CCObject::CCObject((CCObject *)this_00);
    piVar2 = this_00 + 5;
    iVar1 = DAT_00155d10 + 0x155c90;
    *this_00 = *(int *)(DAT_00155d0c + 0x155c8a) + 8;
    FUN_001eed40(piVar2,iVar1,auStack_24);
    FUN_001eed40(auStack_1c,param_2,auStack_28);
    FUN_001eeb80(auStack_20,auStack_1c,0,param_3);
    FUN_001ee874(piVar2,auStack_20);
    FUN_001ed6b8(auStack_20);
    FUN_001ed6b8(auStack_1c);
    iVar1 = *(int *)(this + 0x38);
    if (iVar1 == 1) {
      FUN_001ee874(this + 0x34,piVar2);
    }
    else if ((0 < iVar1) && (iVar1 - 3U < 3)) {
      if (iVar3 == 6) {
        CCMutableArray<cocos2d::CCObject*>::addObject
                  (*(CCMutableArray<cocos2d::CCObject*> **)(this + 0x3c),(CCObject *)this_00);
      }
      else if (iVar3 == 2) {
        CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
        ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
                      **)(this + 8),(CCObject *)this_00,(basic_string *)(this + 0x34));
      }
    }
    CCObject::release((CCObject *)this_00);
  }
  return;
}


