/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00109ec0  Symbol: ~Clear_Item_View_Layer */

/* Clear_Item_View_Layer::~Clear_Item_View_Layer() */

Clear_Item_View_Layer * __thiscall
Clear_Item_View_Layer::~Clear_Item_View_Layer(Clear_Item_View_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00109ef4 + 0x109eca);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


