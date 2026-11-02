/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a400  Symbol: ~Unit_Test */

/* Unit_Test::~Unit_Test() */

Unit_Test * __thiscall Unit_Test::~Unit_Test(Unit_Test *this)

{
  CCArray *this_00;
  CCNode *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(DAT_0010a458 + 0x10a40c);
  *(int *)this = iVar3 + 8;
  *(int *)(this + 0xfc) = iVar3 + 0x13c;
  *(int *)(this + 0x100) = iVar3 + 0x16c;
  *(int *)(this + 0x104) = iVar3 + 0x178;
  this_00 = (CCArray *)cocos2d::CCNode::getChildren((CCNode *)this);
  for (uVar4 = 0; uVar2 = cocos2d::CCArray::count(this_00), uVar4 < uVar2; uVar4 = uVar4 + 1) {
    pCVar1 = (CCNode *)cocos2d::CCArray::objectAtIndex(this_00,uVar4);
    KG_Fram_removeChild(pCVar1);
  }
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


