/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c8b2  Symbol: update */

/* cocos2d::CCAnimate::update(float) */

undefined8 __thiscall cocos2d::CCAnimate::update(CCAnimate *this,float param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_r1;
  CCSpriteFrame *pCVar4;
  int iVar5;
  int iVar6;
  CCSprite *this_00;
  uint uVar7;
  
  iVar6 = *(int *)(*(int *)(this + 0x2c) + 0x1c);
  iVar5 = *(int *)(iVar6 + 0x14);
  uVar7 = *(int *)(iVar6 + 0x18) - iVar5 >> 2;
  uVar1 = __floatunsisf(uVar7);
  __mulsf3(in_r1,uVar1);
  uVar2 = __fixunssfsi();
  if (uVar7 <= uVar2) {
    uVar2 = uVar7 - 1;
  }
  this_00 = *(CCSprite **)(this + 0x18);
  pCVar4 = (CCSpriteFrame *)0x0;
  if (uVar2 < uVar7) {
    pCVar4 = *(CCSpriteFrame **)(uVar2 * 4 + iVar5);
  }
  iVar3 = CCSprite::isFrameDisplayed(this_00,pCVar4);
  if (iVar3 == 0) {
    pCVar4 = (CCSpriteFrame *)0x0;
    if (uVar2 < (uint)(*(int *)(iVar6 + 0x18) - *(int *)(iVar6 + 0x14) >> 2)) {
      pCVar4 = *(CCSpriteFrame **)(uVar2 * 4 + *(int *)(iVar6 + 0x14));
    }
    CCSprite::setDisplayFrame(this_00,pCVar4);
  }
  return CONCAT44(iVar5,this);
}


