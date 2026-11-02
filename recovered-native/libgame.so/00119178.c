/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119178  Symbol: Set_KG_State_Long_Distance_Unbeatable */

/* StateMode::Set_KG_State_Long_Distance_Unbeatable() */

void __thiscall StateMode::Set_KG_State_Long_Distance_Unbeatable(StateMode *this)

{
  int *piVar1;
  CCTexture2D *pCVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar4 = *(int ***)(DAT_001191f0 + 0x119182);
  if (*ppiVar4 == (int *)0x0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001191f4 + 0x11918e));
    *ppiVar4 = piVar1;
    cocos2d::CCObject::retain((CCObject *)piVar1);
  }
  ppiVar5 = *(int ***)(DAT_001191f8 + 0x11919c);
  if (*ppiVar5 == (int *)0x0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001191fc + 0x1191a8));
    *ppiVar5 = piVar1;
    cocos2d::CCObject::retain((CCObject *)piVar1);
  }
  pCVar2 = (CCTexture2D *)(**(code **)(**ppiVar4 + 0x118))();
  uVar3 = cocos2d::CCSprite::spriteWithTexture(pCVar2);
  (**(code **)(*(int *)this + 0xcc))(this,uVar3,0,0);
  pCVar2 = (CCTexture2D *)(**(code **)(**ppiVar5 + 0x118))();
  uVar3 = cocos2d::CCSprite::spriteWithTexture(pCVar2);
  (**(code **)(*(int *)this + 0xcc))(this,uVar3,1,1);
  return;
}


