/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015adb4  Symbol: updateColor */

/* cocos2d::CCSprite::updateColor() */

void __thiscall cocos2d::CCSprite::updateColor(CCSprite *this)

{
  CCSprite CVar1;
  CCSprite CVar2;
  CCSprite CVar3;
  CCSprite CVar4;
  
  CVar1 = this[0x105];
  CVar2 = this[0x104];
  CVar3 = this[0x106];
  CVar4 = this[0x107];
  this[0x184] = CVar1;
  this[0x187] = CVar2;
  this[0x185] = CVar3;
  this[0x186] = CVar4;
  this[0x1b4] = CVar1;
  this[0x1b7] = CVar2;
  this[0x1b5] = CVar3;
  this[0x1b6] = CVar4;
  this[0x16c] = CVar1;
  this[0x16f] = CVar2;
  this[0x16d] = CVar3;
  this[0x16e] = CVar4;
  this[0x19c] = CVar1;
  this[0x19f] = CVar2;
  this[0x19d] = CVar3;
  this[0x19e] = CVar4;
  if (this[0x128] != (CCSprite)0x0) {
    if (*(uint *)(this + 0x10c) == 0xffffffff) {
      this[0x118] = (CCSprite)0x1;
    }
    else {
      CCTextureAtlas::updateQuad
                (*(CCTextureAtlas **)(this + 0x108),(_ccV3F_C4B_T2F_Quad *)(this + 0x160),
                 *(uint *)(this + 0x10c));
    }
  }
  return;
}


