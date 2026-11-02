/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00106110  Symbol: Monster_HP */

/* Monster_HP::Monster_HP() */

Monster_HP * __thiscall Monster_HP::Monster_HP(Monster_HP *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010614c + 0x106122);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x114));
  return this;
}


