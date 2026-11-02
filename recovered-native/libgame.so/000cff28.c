/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cff28  Symbol: ~Item_Text_View_Layer */

/* Item_Text_View_Layer::~Item_Text_View_Layer() */

Item_Text_View_Layer * __thiscall
Item_Text_View_Layer::~Item_Text_View_Layer(Item_Text_View_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000cff5c + 0xcff32);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


