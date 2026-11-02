/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001061d0  Symbol: Game_Movey */

/* Game_Movey::Game_Movey() */

Game_Movey * __thiscall Game_Movey::Game_Movey(Game_Movey *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010620c + 0x1061e2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x114));
  return this;
}


