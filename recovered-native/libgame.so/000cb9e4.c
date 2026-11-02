/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb9e4  Symbol: StageSelectChild */

/* StageSelectChild::StageSelectChild() */

StageSelectChild * __thiscall StageSelectChild::StageSelectChild(StageSelectChild *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000cba2c + 0xcb9f6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x110));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x118));
  return this;
}


